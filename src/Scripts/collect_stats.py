#!/usr/bin/python

import sys, os, fnmatch, subprocess

def execute_process(args):
    try:
        out = subprocess.check_output(args.split(" "), stderr=subprocess.STDOUT)
        return out.decode('utf8')
    except:
        return ""

def collect_stats(n, str):
    blocks = -1
    phantom = -1

    for l in str.split("\n"):
        if "blocks:" in l:
            blocks = int(l.replace("blocks:","").replace(" ", "").replace(",",""))
        elif "phantoms:" in l:
            phantom = int(l.replace("phantoms:","").replace(" ", "").replace(",",""))
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
    
    #print(dir)
    #print(states)

    bench = []

    for root, dir, files in os.walk(dir):
        #print(root)
        for items in fnmatch.filter(files, "*"):
            bench.append(root+"/"+items)
    
    for b in bench:
        name = b.split("/")[-1]
        func = b.split(".c_")[-1].split("_Final.c")[0]
        arg = "sh gen_stats.sh " + b + " " + func + " -O0"
        res = execute_process(arg)
        #print(res)
        collect_stats(name, res)
        #break
    
