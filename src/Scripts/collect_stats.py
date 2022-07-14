#!/usr/bin/python

import sys, os, fnmatch, subprocess, json

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
    Preprocessing json input
    input: string with json file
    output: json output
'''
def preprocessing_json(in_data):
    s = ""
    for l in in_data.readlines():
        if "[" in l or "]" in l:
            continue
        if ":" in l and "," in l:
            #l.split(":")
            l = l.strip().replace(",","").split(": ")
            s += "\"" + l[0] + "\": \"" + l[1] + "\",\n" 
        elif ":" in l:
            l = l.strip().split(": ")
            s += "\"" + l[0] + "\": " 
            if l[1] == '{':
                s += l[1] + "\n"
            else: 
                s += "\"" + l[1] + "\"\n"
        else:
            s += l.strip() + "\n"
    return json.loads(s)

'''
    Read input data
'''
def read_input(in_data):

    if len(in_data) < 5:
        print("ERROR: Number of parameters")
        print("Example to use: python3 collect_stats.py <directory> <json_file> <number_of_inputs> <opt> <stats_1> <stats_2> ... <stats_N>")
        exit(0)
    directory = in_data[1]
    json_file = in_data[2]
    n_inputs = int(in_data[3])
    opt = in_data[4]
    return directory, n_inputs, opt, json_file

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
def print_header():
    print("name, blocks, phantoms, dyn inst, static inst")

'''
    process the output from code executed by terminal
'''
def collect_stats(data):
    v = [0] * len(4)
    v[0] = data["blocks"]
    v[1] = data["phantoms"]
    v[2] = data["static"]["instructions"]
    v[3] = data["dynamic"]["instructions"]
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
    for i in range(len(r)):
        print(str(sum_elements(r, i)), end="")
        if i != len(states)-1:
            print(", ", end="")
    print()

'''
    Main function
'''
if __name__ == "__main__":

    directory, n_inputs, states, opt, json_file = read_input(sys.argv)

    bench = collect_benchmark_from_directory(directory)
    
    print_header()

    for b in bench:
        name = b.split("/")[-1]
        func = b.split(".c_")[-1].split("_Final.c")[0]
        r = []
        for i in range(n_inputs):
            arg = "sh gen_stats.sh " + b + " " + func + " " + opt +" " + str(i)
            res = execute_process(arg)
            json_file = preprocessing_json("file.json")
            r.append(collect_stats(json_file))
        print_solution(name, states, r)
        break
