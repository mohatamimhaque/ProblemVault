import requests
import datetime

handle = "nocturnalLogic"  # Codeforces handle
url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=10000"  

res = requests.get(url).json()

def format_time(epoch):
    dt = datetime.datetime.utcfromtimestamp(epoch) + datetime.timedelta(hours=6)
    return dt.strftime("%b/%d/%Y %H:%MUTC+6")

def get_extension(language):
    lang_map = {
        "GNU C++17": ".cpp",
        "C++17 (Clang 16.0.0)": ".cpp",
        "C++23 (GCC 14-64, msys2)": ".cpp",
        "C++14": ".cpp",
        "C++11": ".cpp",
        "C": ".c",
        "Python 3": ".py",
        "Python 3.11": ".py",
        "Java 17": ".java",
        "Java 11": ".java",
        "Kotlin": ".kt",
        "PyPy 3": ".py",
        "Pascal": ".pas",
        "Go": ".go",
        "Rust": ".rs",
        "JavaScript": ".js"
    }
    return lang_map.get(language, ".txt")  # default to .txt if unknown





submissions = {}

# Build dictionary
for sub in res["result"]:
    print(sub)
    pid = sub["id"]
    contest_id = sub.get("contestId", 0)
    submissions[pid] = {
        "contest_id": contest_id,
        "index": sub["problem"]["index"],
        "name": sub["problem"]["name"],
        "language": sub["programmingLanguage"],
        "tags": ", ".join(sub['problem'].get('tags', [])),
        "submitted_time": sub['creationTimeSeconds'],
        "time_ms": f"{sub['timeConsumedMillis']} ms",
        "memory_kb": f"{sub['memoryConsumedBytes']//1024} KB",
    }

# Sort by submission time (latest first)
sorted_subs = sorted(submissions.items(), key=lambda x: x[1]['submitted_time'], reverse=True)

# Build README
readme = "# 🏆 Codeforces Submissions\n\n"
readme += "| # | Platform | Problem | Solution | Tags | Lang | Submitted | Time | Memory |\n"
readme += "|---|----------|---------|----------|------|------|-----------|------|--------|\n"

for i, (pid, data) in enumerate(sorted_subs, 1):
    problem_link = f'<a href="https://codeforces.com/contest/{data["contest_id"]}/problem/{data["index"]}" target="_blank"> {data["index"]} - {data["name"]} </a>'
    sub_link = f'<a href="solutions/codeforces/{data["name"]}{get_extension(data["language"])}" target="_blank">Solutions</a>'
    platform = "Codeforces"

    submitted_time = datetime.datetime.utcfromtimestamp(data['submitted_time']) + datetime.timedelta(hours=6)
    submitted_time_str = submitted_time.strftime("%b/%d/%Y %H:%MUTC+6")

    readme += f"| {i} | {platform} | {problem_link} | {sub_link} | {data['tags']} | {data['language']} | {submitted_time_str} | {data['time_ms']} | {data['memory_kb']} |\n"




# Save to README.md
with open("README.md", "w", encoding="utf-8") as f:
    f.write(readme)

print("✅ README.md generated with beautified table!")
