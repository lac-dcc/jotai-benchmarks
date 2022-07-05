#!/usr/bin/python

import sys, os, fnmatch, subprocess

'''
    Processing data in the host terminal
'''
def execute_process(args):
    try:
        out = subprocess.check_output(args.split(" "), stderr=subprocess.STDOUT)
        return out.decode('utf8')
    except:
        return ""
'''
    Read input data
'''
def read_input(in_data):
    directory = in_data[1]
    n_inputs = int(in_data[2])
    opt = in_data[3]
    states = []
    for i in range(4, len(in_data)):
        n_state = in_data[i]
        states.append(n_state)
    return directory, n_inputs, states, opt

'''
    walks and saves the files inside of list
'''
def collect_benchmark_from_directory(directory):
    bench = []
    for root, dir, files in os.walk(directory):
        for items in fnmatch.filter(files, "*"):
            bench.append(root+"/"+items)
    return bench

'''
    print the header of CSV file
'''
def print_header(states):
    print("name, ", end="")
    for i in range(len(states)):
        print("%s" % (states[i]), end="")
        if (i != len(states)-1):
            print(", ", end="")
    print()

'''
    process the output from code executed by terminal
'''
def collect_stats(word, stat):
    v = [0] * len(stat)
    for l in word.split("\n"):
        for i in range(len(stat)):
            if stat[i]+":" in l:
                v[i] = int(l.replace(stat[i]+":","").replace(" ", "").replace(",",""))
    return v

'''
    sum of elements of one column
'''
def sum_elements(v, pos):
    total = 0
    for i in range(len(v)):
        total += v[i][pos]
    return total

'''
    print the output in CSV format
'''
def print_solution(name, states, r):
    print(name+", ", end="")
    for i in range(len(states)):
        print(str(sum_elements(r, i)), end="")
        if i != len(states)-1:
            print(", ", end="")
    print()

'''
    Main function
'''
if __name__ == "__main__":

    if len(sys.argv) <= 4:
        print("ERROR: Number of parameters")
        print("Example to use: python3 collect_stats.py <directory> <number_of_inputs> <opt> <stats_1> <stats_2> ... <stats_N>")
        exit(0)

    directory, n_inputs, states, opt = read_input(sys.argv)

    bench = collect_benchmark_from_directory(directory)
    
    print_header(states)

    for b in bench:
        name = b.split("/")[-1]
        func = b.split(".c_")[-1].split("_Final.c")[0]
        r = []
        for i in range(n_inputs):
            arg = "sh gen_stats.sh " + b + " " + func + " " + opt +" " + str(i)
            res = execute_process(arg)
            r.append(collect_stats(res, states))
        print_solution(name, states, r)
