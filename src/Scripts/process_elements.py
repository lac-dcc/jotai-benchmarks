import json, sys

n = sys.argv[1].split("/")[-1]
f1 = open(sys.argv[2], "r")

blocks = 0
phantom = 0

with open(sys.argv[2], 'r', encoding='utf-8') as f:
    f = f.read().replace("\'", "\"")
    data = f.split(",\n")
    for l in data:
        if "blocks:" in l:
            blocks = int(l.replace("blocks:","").replace(" ", ""))
        elif "phantoms:" in l:
            phantom = int(l.replace("phantoms:","").replace(" ", ""))

print("%s,%d,%d" %(n, blocks, phantom))
