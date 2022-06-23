'''
	Cleaning code
	This code inserts math.h in header and removes declaration functions in a 
	benchmark.
'''

import sys

fun_math = ["cos", "sin", "tan", "acos", "asin", "atan", "atan2", "cosh", 
	    "sinh", "tanh", "acosh", "asinh", "atanh", "exp", "frexp", "ldexp", 
	    "log", "log10", "modf", "exp2", "expm1", "ilogb", "log2", "logb", 
	    "scalbn", "scalbln", "pow", "sqrt", "cbrt", "hypot", "erf", "erfc", 
	    "tgamma", "lgamma", "ceil", "floor", "fmod", "trunc", "round", 
	    "llround", "rint", "lrint", "llrint", "nearbyint", "remainder", 
	    "remquo", "copysign", "nan", "nextafter", "nexttoward", "fdim", 
	    "fmax", "fmin", "fabs", "abs", "fma", "fpclassify", "isfinite", 
	    "isinf", "isnan", "isnormal", "signbit", "isgreater", 
	    "isgreaterequal", "isless", "islessequal", "islessgreater", 
	    "isunordered"]

'''
	This function format C file from AnghaBench
'''
def format_file(in_file):
    s = "#include <math.h>\n"
    accept = False
    f = open(in_file, "r")
    for l in f.readlines():
        if accept:
            v = l.strip().split(" ")
            if v[0] == '':
                s += "\n"
                accept = False
            elif v[1] in fun_math:
            	# this ignore declaration functions, removing from the file
                continue 
            else:
                s += l
        elif "/* Variables and functions */" in l:
            s += l
            accept = True
        else:
            s += l
    f.close()
    #s += "\n\nint main() {}" # testing code to compile 
    return s

'''
	Recostruction C file
'''
def construct_file_c(s, out_file):
    f = open(out_file, "w")
    f.write(s)
    f.close()

'''
	Main function
'''
if __name__ == "__main__":
    
    if len(sys.argv) <= 2:
        print("ERROR: Number of parameters")
        print("Example to use: python3 clean_bench.py <input> <output>")
        exit(0)
    
    in_file = sys.argv[1]
    out_file = sys.argv[2]

    s = format_file(in_file)

    construct_file_c(s, out_file)
