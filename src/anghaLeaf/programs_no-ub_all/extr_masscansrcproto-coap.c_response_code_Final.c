// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */

/* Variables and functions */

__attribute__((used)) static const char *
response_code(unsigned code)
{
#define CODE(x,y) (((x)<<5) | (y))
    switch (code) {
        case CODE(2,0): return "Okay";
        case CODE(2,1): return "Created";
        case CODE(2,2): return "Deleted";
        case CODE(2,3): return "Valid";
        case CODE(2,4): return "Changed";
        case CODE(2,5): return "Content";
        
        case CODE(4,0): return "Bad Request";
        case CODE(4,1): return "Unauthorized";
        case CODE(4,2): return "Bad Option";
        case CODE(4,3): return "Forbidden";
        case CODE(4,4): return "Not Found";
        case CODE(4,5): return "Method Not Allowed";
        case CODE(4,6): return "Not Acceptable";
        case CODE(4,12): return "Precondition Failed";
        case CODE(4,13): return "Request Too Large";
        case CODE(4,15): return "Unsupported Content-Format";
            
        case CODE(5,0): return "Internal Server Error";
        case CODE(5,1): return "Not Implemented";
        case CODE(5,2): return "Bad Gateway";
        case CODE(5,3): return "Service Unavailable";
        case CODE(5,4): return "Gateway Timeout";
        case CODE(5,5): return "Proxying Not Supported";
    }
    
    switch (code>>5) {
        case 2: return "Okay";
        case 4: return "Error";
        default: return "PARSE_ERR";
    }
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          unsigned int code = 255;
          const char * benchRet = response_code(code);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
