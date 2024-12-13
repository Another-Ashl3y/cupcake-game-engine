with open("src/Keys.h", "r") as f:
    data = f.read()

output = []
i = 0
for line in data.splitlines():
    n = line.count("0")
    x = 0
    
    for char in line:
        if char == "0":
            n-=1
        if n > 0:
            x += 1
            continue
        break

    q = line[:x] + str(i) + ";"
    output.append(q)

    i+=1
    
new_data = "\n".join(output)

with open("src/Keys.h", "w") as f:
    f.write(new_data)