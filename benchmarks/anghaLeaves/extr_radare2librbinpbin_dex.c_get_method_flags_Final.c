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
typedef  int ut64 ;

/* Variables and functions */
 int R_BIN_METH_ABSTRACT ; 
 int R_BIN_METH_BRIDGE ; 
 int R_BIN_METH_CONSTRUCTOR ; 
 int R_BIN_METH_DECLARED_SYNCHRONIZED ; 
 int R_BIN_METH_FINAL ; 
 int R_BIN_METH_MIRANDA ; 
 int R_BIN_METH_NATIVE ; 
 int R_BIN_METH_PRIVATE ; 
 int R_BIN_METH_PROTECTED ; 
 int R_BIN_METH_PUBLIC ; 
 int R_BIN_METH_STATIC ; 
 int R_BIN_METH_STRICT ; 
 int R_BIN_METH_SYNCHRONIZED ; 
 int R_BIN_METH_SYNTHETIC ; 
 int R_BIN_METH_VARARGS ; 
 int R_DEX_METH_ABSTRACT ; 
 int R_DEX_METH_BRIDGE ; 
 int R_DEX_METH_CONSTRUCTOR ; 
 int R_DEX_METH_DECLARED_SYNCHRONIZED ; 
 int R_DEX_METH_FINAL ; 
 int R_DEX_METH_MIRANDA ; 
 int R_DEX_METH_NATIVE ; 
 int R_DEX_METH_PRIVATE ; 
 int R_DEX_METH_PROTECTED ; 
 int R_DEX_METH_PUBLIC ; 
 int R_DEX_METH_STATIC ; 
 int R_DEX_METH_STRICT ; 
 int R_DEX_METH_SYNCHRONIZED ; 
 int R_DEX_METH_SYNTHETIC ; 
 int R_DEX_METH_VARARGS ; 

__attribute__((used)) static ut64 get_method_flags(ut64 MA) {
	ut64 flags = 0;
	if (MA & R_DEX_METH_PUBLIC) {
		flags |= R_BIN_METH_PUBLIC;
	}
	if (MA & R_DEX_METH_PRIVATE) {
		flags |= R_BIN_METH_PRIVATE;
	}
	if (MA & R_DEX_METH_PROTECTED) {
		flags |= R_BIN_METH_PROTECTED;
	}
	if (MA & R_DEX_METH_STATIC) {
		flags |= R_BIN_METH_STATIC;
	}
	if (MA & R_DEX_METH_FINAL) {
		flags |= R_BIN_METH_FINAL;
	}
	if (MA & R_DEX_METH_SYNCHRONIZED) {
		flags |= R_BIN_METH_SYNCHRONIZED;
	}
	if (MA & R_DEX_METH_BRIDGE) {
		flags |= R_BIN_METH_BRIDGE;
	}
	if (MA & R_DEX_METH_VARARGS) {
		flags |= R_BIN_METH_VARARGS;
	}
	if (MA & R_DEX_METH_NATIVE) {
		flags |= R_BIN_METH_NATIVE;
	}
	if (MA & R_DEX_METH_ABSTRACT) {
		flags |= R_BIN_METH_ABSTRACT;
	}
	if (MA & R_DEX_METH_STRICT) {
		flags |= R_BIN_METH_STRICT;
	}
	if (MA & R_DEX_METH_SYNTHETIC) {
		flags |= R_BIN_METH_SYNTHETIC;
	}
	if (MA & R_DEX_METH_MIRANDA) {
		flags |= R_BIN_METH_MIRANDA;
	}
	if (MA & R_DEX_METH_CONSTRUCTOR) {
		flags |= R_BIN_METH_CONSTRUCTOR;
	}
	if (MA & R_DEX_METH_DECLARED_SYNCHRONIZED) {
		flags |= R_BIN_METH_DECLARED_SYNCHRONIZED;
	}
	return flags;
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
          int MA = 100;
          int benchRet = get_method_flags(MA);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int MA = 255;
          int benchRet = get_method_flags(MA);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int MA = 10;
          int benchRet = get_method_flags(MA);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
