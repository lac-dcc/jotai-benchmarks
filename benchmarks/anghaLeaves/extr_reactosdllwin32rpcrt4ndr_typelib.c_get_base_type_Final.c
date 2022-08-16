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
typedef  int VARTYPE ;

/* Variables and functions */
 unsigned char FC_DOUBLE ; 
 unsigned char FC_FLOAT ; 
 unsigned char FC_HYPER ; 
 unsigned char FC_LONG ; 
 unsigned char FC_SHORT ; 
 unsigned char FC_SMALL ; 
 unsigned char FC_ULONG ; 
 unsigned char FC_USHORT ; 
 unsigned char FC_USMALL ; 
#define  VT_BOOL 143 
#define  VT_DATE 142 
#define  VT_ERROR 141 
#define  VT_HRESULT 140 
#define  VT_I1 139 
#define  VT_I2 138 
#define  VT_I4 137 
#define  VT_I8 136 
#define  VT_INT 135 
#define  VT_R4 134 
#define  VT_R8 133 
#define  VT_UI1 132 
#define  VT_UI2 131 
#define  VT_UI4 130 
#define  VT_UI8 129 
#define  VT_UINT 128 

__attribute__((used)) static unsigned char get_base_type(VARTYPE vt)
{
    switch (vt)
    {
    case VT_I1:     return FC_SMALL;
    case VT_BOOL:
    case VT_I2:     return FC_SHORT;
    case VT_INT:
    case VT_ERROR:
    case VT_HRESULT:
    case VT_I4:     return FC_LONG;
    case VT_I8:
    case VT_UI8:    return FC_HYPER;
    case VT_UI1:    return FC_USMALL;
    case VT_UI2:    return FC_USHORT;
    case VT_UINT:
    case VT_UI4:    return FC_ULONG;
    case VT_R4:     return FC_FLOAT;
    case VT_DATE:
    case VT_R8:     return FC_DOUBLE;
    default:        return 0;
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
          int vt = 100;
          unsigned char benchRet = get_base_type(vt);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vt = 255;
          unsigned char benchRet = get_base_type(vt);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vt = 10;
          unsigned char benchRet = get_base_type(vt);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
