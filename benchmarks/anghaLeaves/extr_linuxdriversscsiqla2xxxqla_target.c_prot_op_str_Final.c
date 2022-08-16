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
typedef  int u32 ;

/* Variables and functions */
#define  TARGET_PROT_DIN_INSERT 134 
#define  TARGET_PROT_DIN_PASS 133 
#define  TARGET_PROT_DIN_STRIP 132 
#define  TARGET_PROT_DOUT_INSERT 131 
#define  TARGET_PROT_DOUT_PASS 130 
#define  TARGET_PROT_DOUT_STRIP 129 
#define  TARGET_PROT_NORMAL 128 

__attribute__((used)) static const char *prot_op_str(u32 prot_op)
{
	switch (prot_op) {
	case TARGET_PROT_NORMAL:	return "NORMAL";
	case TARGET_PROT_DIN_INSERT:	return "DIN_INSERT";
	case TARGET_PROT_DOUT_INSERT:	return "DOUT_INSERT";
	case TARGET_PROT_DIN_STRIP:	return "DIN_STRIP";
	case TARGET_PROT_DOUT_STRIP:	return "DOUT_STRIP";
	case TARGET_PROT_DIN_PASS:	return "DIN_PASS";
	case TARGET_PROT_DOUT_PASS:	return "DOUT_PASS";
	default:			return "UNKNOWN";
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
          int prot_op = 100;
          const char * benchRet = prot_op_str(prot_op);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int prot_op = 255;
          const char * benchRet = prot_op_str(prot_op);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int prot_op = 10;
          const char * benchRet = prot_op_str(prot_op);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
