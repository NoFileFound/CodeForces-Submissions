import os
import re

def get_md_range(num):
    if num < 10:
        return "1-10.md"
    else:
        start = (num // 100) * 100
        return f"{start}-{start + 99}.md"

def read_rows(file):
    with open(file, "r") as f:
        lines = f.readlines()

    header = []
    rows = []
    sep = False
    for line in lines:
        header.append(line)
        if line.strip().startswith("|------------"):
            sep = True
            break

    if sep:
        rows = lines[len(header):]

    return header, rows

def problem_key(row):
    match = re.search(r"\[(\d+)([A-Z])\]", row)
    return int(match.group(1)), match.group(2)

for file in sorted(os.listdir("problems")):
    match = re.match(r"(\d+)([A-Z])\s*-\s*(.+)\.", file)
    number = int(match.group(1))
    letter = match.group(2)
    name = match.group(3).strip()

    print(f"CURRENT PROBLEM: {number}{letter} — {name}")
    diff = input("Difficulty: ").strip()
    tags = input("Tags: ").strip()
    row = f"| [{number}{letter}]({f"https://codeforces.com/problemset/problem/{number}/{letter}"}) | **{name}** | {diff} | {tags} |\n"

    md_file = get_md_range(number)
    if not os.path.exists(md_file):
        with open(md_file, "w") as f:
            f.write("| ID | **Problem Name** | Difficulty | **Tags** |\n")
            f.write("|------------|------------------|------------|----------|\n")

    header, rows = read_rows(md_file)
    rows.append(row)
    rows.sort(key = problem_key)
    with open(md_file, "w") as f:
        f.writelines(header)
        f.writelines(rows)