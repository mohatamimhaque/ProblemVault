import requests
import datetime

handle = "nocturnalLogic"  # Codeforces handle
url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=200000"  

res = requests.get(url).json()

def format_time(epoch):
    dt = datetime.datetime.utcfromtimestamp(epoch) + datetime.timedelta(hours=6)
    return dt.strftime("%b/%d/%Y %H:%MUTC+6")

def get_extension(language: str) -> str:
    language = language.lower()
    if "c++" in language:
        return ".cpp"
    if "c#" in language:
        return ".cs"
    if "java" in language:
        return ".java"
    if "py" in language or "python 2" in language:
        return ".py"
    if "pascal" in language:
        return ".pas"
    if "kotlin" in language:
        return ".kt"
    if "ruby" in language:
        return ".rb"
    if "go" in language:
        return ".go"
    return ".txt"  # fallback





submissions = {}

dup = set()

# Build dictionary
for sub in res["result"]:
    if(sub['verdict'] != 'OK'):
        continue
    pid = sub["id"]
    contest_id = sub.get("contestId", 0)
    submissions[pid] = {
        "contest_id": contest_id,
        "index": sub["problem"]["index"],
        "name": sub["problem"]["name"].replace("'", "").replace('"', ""),
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



dup = set()

for i, (pid, data) in enumerate(sorted_subs, 1):
    if((data['contest_id'],data["index"]) in dup):
        continue

    dup.add((data['contest_id'],data["index"]))
    problem_link = f'<a href="https://codeforces.com/contest/{data["contest_id"]}/problem/{data["index"]}" target="_blank"> {data['contest_id']}{data["index"]} - {data["name"]} </a>'
    sub_link = f'<a href="solutions/codeforces/{data['contest_id']}{data['index']}_{data["name"].replace(" ", "_")}{get_extension(data["language"])}" target="_blank">Solutions</a>'
    platform = "Codeforces"

    submitted_time = datetime.datetime.utcfromtimestamp(data['submitted_time']) + datetime.timedelta(hours=6)
    submitted_time_str = submitted_time.strftime("%b/%d/%Y %H:%MUTC+6")

    readme += f"| {i} | {platform} | {problem_link} | {sub_link} | {data['tags']} | {data['language']} | {submitted_time_str} | {data['time_ms']} | {data['memory_kb']} |\n"




# Save to README.md
with open("README.md", "w", encoding="utf-8") as f:
    f.write(readme)

print("✅ README.md generated with beautified table!")
