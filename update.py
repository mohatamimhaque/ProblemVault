import os
import requests
import datetime
from bs4 import BeautifulSoup
from dotenv import load_dotenv

# Load environment variables
load_dotenv()

out_dir = "solutions/codeforces"
os.makedirs(out_dir, exist_ok=True)

def save_file(path, code):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as f:
        f.write(code)

rows = []
count = 1

def fetch_codeforces():
    global count
    handle = os.getenv("CF_HANDLE")
    if not handle:
        print("CF_HANDLE not set in .env")
        return

    # Fetch all submissions (large count)
    r = requests.get(f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=100000")
    data = r.json()

    seen_problems = set()  # To avoid duplicate problems
    for sub in data.get("result", []):
        pid = (sub["problem"]["contestId"], sub["problem"]["index"])
        if sub["verdict"] != "OK" or pid in seen_problems:
            continue

        seen_problems.add(pid)
        title = sub["problem"]["name"]
        lang = sub["programmingLanguage"]
        sid = sub["id"]
        url = f"https://codeforces.com/contest/{pid[0]}/submission/{sid}"

        # Fetch source code if CF_COOKIE is set
        cookie = os.getenv("CF_COOKIE")
        code = None
        if cookie:
            headers = {"Cookie": cookie}
            sr = requests.get(url, headers=headers)
            soup = BeautifulSoup(sr.text, "html.parser")
            ta = soup.find("pre", id="program-source-text")
            if ta:
                code = ta.text
        if not code:
            code = f"// Source unavailable. Submission ID {sid}"

        path = f"{out_dir}/{pid[0]}_{pid[1]}_{sid}.txt"
        save_file(path, code)
        rows.append([count, "Codeforces", title, path, lang, "", str(datetime.datetime.fromtimestamp(sub["creationTimeSeconds"]))])
        count += 1

# Run fetch
fetch_codeforces()

# Generate README.md
with open("README.md","w",encoding="utf-8") as f:
    f.write("# Codeforces Submissions\n\n")
    f.write("| # | Platform | Title | Solution | Lang | Tags | Submitted |\n")
    f.write("|---:|---|---|---|---|---|---|\n")
    for r in rows:
        f.write(f"| {r[0]} | {r[1]} | {r[2]} | [{os.path.basename(r[3])}]({r[3]}) | {r[4]} | {r[5]} | {r[6]} |\n")

print(f"Fetched {len(rows)} unique Codeforces problems successfully!")
