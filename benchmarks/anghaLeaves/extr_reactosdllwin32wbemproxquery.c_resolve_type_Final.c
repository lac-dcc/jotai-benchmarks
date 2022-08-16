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
typedef  int UINT ;

/* Variables and functions */
#define  CIM_BOOLEAN 137 
 int CIM_ILLEGAL ; 
#define  CIM_SINT16 136 
#define  CIM_SINT32 135 
#define  CIM_SINT64 134 
#define  CIM_SINT8 133 
#define  CIM_STRING 132 
#define  CIM_UINT16 131 
#define  CIM_UINT32 130 
#define  CIM_UINT64 129 
#define  CIM_UINT8 128 

__attribute__((used)) static UINT resolve_type( UINT left, UINT right )
{
    switch (left)
    {
    case CIM_SINT8:
    case CIM_SINT16:
    case CIM_SINT32:
    case CIM_SINT64:
    case CIM_UINT8:
    case CIM_UINT16:
    case CIM_UINT32:
    case CIM_UINT64:
        switch (right)
        {
            case CIM_SINT8:
            case CIM_SINT16:
            case CIM_SINT32:
            case CIM_SINT64:
            case CIM_UINT8:
            case CIM_UINT16:
            case CIM_UINT32:
            case CIM_UINT64:
                return CIM_UINT64;
            default: break;
        }
        break;

    case CIM_STRING:
        if (right == CIM_STRING) return CIM_STRING;
        break;

    case CIM_BOOLEAN:
        if (right == CIM_BOOLEAN) return CIM_BOOLEAN;
        break;

    default:
        break;
    }
    return CIM_ILLEGAL;
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
          int left = 100;
          int right = 100;
          int benchRet = resolve_type(left,right);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int left = 255;
          int right = 255;
          int benchRet = resolve_type(left,right);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int left = 10;
          int right = 10;
          int benchRet = resolve_type(left,right);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
