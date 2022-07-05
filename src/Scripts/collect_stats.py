#!/usr/bin/python

import sys, os, fnmatch, subprocess

def execute_process(args):
    try:
        out = subprocess.check_output(args.split(" "), stderr=subprocess.STDOUT)
        return out.decode('utf8')
    except:
        return ""

def collect_stats(word, stat):
    v = [0] * len(stat)
    for l in word.split("\n"):
        for i in range(len(stat)):
            if stat[i]+":" in l:
                v[i] = int(l.replace(stat[i]+":","").replace(" ", "").replace(",",""))
    return v

def sum_elements(v, pos):
    total = 0
    for i in range(len(v)):
        total += v[i][pos]
    return total

if __name__ == "__main__":

    if len(sys.argv) <= 3:
        print("ERROR: Number of parameters")
        print("Example to use: python3 collect_stats.py <directory> <number_of_inputs> <stats_1> <stats_2> ... <stats_N>")
        exit(0)

    dir = sys.argv[1]
    n_inputs = int(sys.argv[2])
    
    print("name, ", end="")
    states = []
    for i in range(3, len(sys.argv)):
        n_state = sys.argv[i]
        states.append(n_state)
        print("%s" % (n_state), end="")
        if (i != len(sys.argv)-1):
            print(", ", end="")
    print()
    
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
        r = []
        for i in range(n_inputs):
            arg = "sh gen_stats.sh " + b + " " + func + " -O0 " + str(i)
            res = execute_process(arg)
            #print(res)
            r.append(collect_stats(res, states))
            #print(r)
        print(name+", ", end="")
        for i in range(len(states)):
            print(str(sum_elements(r, i)), end="")
            if i != len(states)-1:
                print(", ", end="")
        print()
        break
    
