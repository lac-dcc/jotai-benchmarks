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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
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
 int FILE_OPADD ; 
 int FILE_OPAND ; 
 int FILE_OPDIVIDE ; 
 int FILE_OPMINUS ; 
 int FILE_OPMODULO ; 
 int FILE_OPMULTIPLY ; 
 int FILE_OPOR ; 
 int FILE_OPXOR ; 

__attribute__((used)) static int get_op(char c) {
	switch (c) {
	case '&': return FILE_OPAND;
	case '|': return FILE_OPOR;
	case '^': return FILE_OPXOR;
	case '+': return FILE_OPADD;
	case '-': return FILE_OPMINUS;
	case '*': return FILE_OPMULTIPLY;
	case '/': return FILE_OPDIVIDE;
	case '%': return FILE_OPMODULO;
	default:  return -1;
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

    // int-bounds
    case 0:
    {
          char c = 100;
          int benchRet = get_op(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          char c = 255;
          int benchRet = get_op(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char c = 10;
          int benchRet = get_op(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
