with open("src/Keys.h", "r") as f:
    data = f.read().split("\n")

keydown_lines = ["\tswitch (event.key.keysym.sym) {"]
keyup_lines = ["\tswitch (event.key.keysym.sym) {"]
for line in data:
    if not line: continue
    code = line.split(" ")[2]
    comparison = "SDL" + code + ":"
    keydown_lines.append(comparison)
    keyup_lines.append(comparison)
    keydown_lines.append(f"\t\tkey[{code}] = {{true, true}};\n\t\tbreak;")
    keyup_lines.append(f"\t\tkey[{code}] = {{false, true}};\n\t\tbreak;")
keydown_lines.append("}")
keyup_lines.append("}")
with open("src/KeyReader.h", "w") as f:
    f.write("\n".join(keydown_lines))
    f.write("\n".join(keyup_lines))