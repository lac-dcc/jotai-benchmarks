#!/usr/bin/python

import sys, os, fnmatch, subprocess

def execute_process(args):
    try:
        out = subprocess.check_output(args.split(" "), stderr=subprocess.STDOUT)
        return out.decode('utf8')
    except:
        return ""

def collect_stats():
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

if __name__ == "__main__":

    if len(sys.argv) <= 2:
        print("ERROR: Number of parameters")
        print("Example to use: python3 collect_stats.py <directory> <stats_1> <stats_2> ... <stats_N>")
        exit(0)

    dir = sys.argv[1]
    states = []
    for stat in range(2, len(sys.argv)):
        states.append(sys.argv[stat])
    
    print(dir)
    print(states)

    bench = []

    for root, dir, files in os.walk(dir):
        #print(root)
        for items in fnmatch.filter(files, "*"):
            bench.append(root+"/"+items)
    
    for b in bench:
        func = b.split(".c_")[-1].split("_Final.c")[0]
        arg = "sh gen_stats.sh " + b + " " + func + " -O0"
        execute_process(arg)
        print(b, func)
        break
    
