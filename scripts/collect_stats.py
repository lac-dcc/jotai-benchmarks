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
    try:
        return json.loads(s)
    except:
        return ""

'''
    Read input data
'''
def read_input(in_data):

    if len(in_data) < 5:
        print("ERROR: Number of parameters")
        print("Example to use: python3 collect_stats.py <directory> <number_of_inputs> <opt> <json_file>")
        exit(0)
    directory = in_data[1]
    n_inputs = int(in_data[2])
    opt = in_data[3]
    return directory, n_inputs, opt

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
    print("N, name, blocks, phantoms, dyn inst, static inst")

'''
    process the output from code executed by terminal
'''
def collect_stats(data):
    v = [0] * 4
    try:
        v[0] = int(data["blocks"])
        v[1] = int(data["phantoms"])
        v[2] = int(data["static"]["instructions"])
        v[3] = int(data["dynamic"]["instructions"])
    except:
        pass
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
def print_solution(count, name,  r):
    print("%d, %s, " % (count, name), end="")
    for i in range(len(r[0])):
        print(str(sum_elements(r, i)), end="")
        if i != len(r[0])-1:
            print(", ", end="")
    print()

'''
    Main function
'''
if __name__ == "__main__":

    directory, n_inputs, opt = read_input(sys.argv)

    bench = collect_benchmark_from_directory(directory)
    
    print_header()
    for j, b in enumerate(bench):
        if j >= 1:
            break
        name = b.split("/")[-1]
        func = b.split(".c_")[-1].split(".h_")[-1].split("_Final.c")[0]
        r = []
        for i in range(n_inputs):
            arg = "sh gen_stats.sh " + b + " " + func + " " + opt +" " + str(i)
            print(arg)
            res = execute_process(arg)
            print(res)
            json_file = preprocessing_json(open(sys.argv[4], "r"))
            r.append(collect_stats(json_file))
        #print(r)
        print_solution(j, name, r)
