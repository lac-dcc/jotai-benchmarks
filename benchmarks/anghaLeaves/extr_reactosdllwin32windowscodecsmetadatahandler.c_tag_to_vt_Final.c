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
typedef  int SHORT ;

/* Variables and functions */
#define  VT_BLOB 140 
#define  VT_EMPTY 139 
#define  VT_I1 138 
#define  VT_I2 137 
#define  VT_I4 136 
#define  VT_I8 135 
#define  VT_LPSTR 134 
#define  VT_R4 133 
#define  VT_R8 132 
#define  VT_UI1 131 
#define  VT_UI2 130 
#define  VT_UI4 129 
#define  VT_UI8 128 

__attribute__((used)) static int tag_to_vt(SHORT tag)
{
    static const int tag2vt[] =
    {
        VT_EMPTY, /* 0 */
        VT_UI1,   /* IFD_BYTE 1 */
        VT_LPSTR, /* IFD_ASCII 2 */
        VT_UI2,   /* IFD_SHORT 3 */
        VT_UI4,   /* IFD_LONG 4 */
        VT_UI8,   /* IFD_RATIONAL 5 */
        VT_I1,    /* IFD_SBYTE 6 */
        VT_BLOB,  /* IFD_UNDEFINED 7 */
        VT_I2,    /* IFD_SSHORT 8 */
        VT_I4,    /* IFD_SLONG 9 */
        VT_I8,    /* IFD_SRATIONAL 10 */
        VT_R4,    /* IFD_FLOAT 11 */
        VT_R8,    /* IFD_DOUBLE 12 */
        VT_BLOB,  /* IFD_IFD 13 */
    };
    return (tag > 0 && tag <= 13) ? tag2vt[tag] : VT_BLOB;
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
          int tag = 100;
          int benchRet = tag_to_vt(tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int benchRet = tag_to_vt(tag);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int benchRet = tag_to_vt(tag);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
