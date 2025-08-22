import requests
from bs4 import BeautifulSoup

# Submission URL
url = "https://codeforces.com/contest/2000/submission/314044646"

# Your login cookies (replace with valid ones)
cookies = {
    "JSESSIONID": "883AD83FC7F1651ACC7D4F405750279E",
    "39ce7": "CFmaZxqN",
    "X-User": "1b61210f644a71fc6193e90e8ca9a151bc31a7ca4cd462e9eb61c7d25999e9ccf98d36966526e036"
}

# Fetch submission page
res = requests.get(url, cookies=cookies)


print(res)
soup = BeautifulSoup(res.text, "html.parser")

# Extract code
code_block = soup.find("pre", id="program-source-text")
if code_block:
    code = code_block.get_text()
    print("✅ Submission Code:\n")
    print(code)
    with open("submission_314044646.cpp", "w", encoding="utf-8") as f:
        f.write(code)
else:
    print("❌ Could not fetch code. Check if cookies are valid.")
