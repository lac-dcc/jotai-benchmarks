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
typedef  int DWORD ;

/* Variables and functions */
 int BWRITERSPDM_MSAMPCENTROID ; 
 int BWRITERSPDM_PARTIALPRECISION ; 
 int BWRITERSPDM_SATURATE ; 
 int D3DSPDM_MSAMPCENTROID ; 
 int D3DSPDM_PARTIALPRECISION ; 
 int D3DSPDM_SATURATE ; 

__attribute__((used)) static DWORD d3d9_dstmod(DWORD bwriter_mod)
{
    DWORD ret = 0;

    if (bwriter_mod & BWRITERSPDM_SATURATE)         ret |= D3DSPDM_SATURATE;
    if (bwriter_mod & BWRITERSPDM_PARTIALPRECISION) ret |= D3DSPDM_PARTIALPRECISION;
    if (bwriter_mod & BWRITERSPDM_MSAMPCENTROID)    ret |= D3DSPDM_MSAMPCENTROID;

    return ret;
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
          int bwriter_mod = 100;
          int benchRet = d3d9_dstmod(bwriter_mod);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int bwriter_mod = 255;
          int benchRet = d3d9_dstmod(bwriter_mod);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bwriter_mod = 10;
          int benchRet = d3d9_dstmod(bwriter_mod);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
