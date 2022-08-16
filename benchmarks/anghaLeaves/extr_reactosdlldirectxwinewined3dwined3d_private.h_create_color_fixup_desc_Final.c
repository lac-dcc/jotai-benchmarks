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
struct color_fixup_desc {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
typedef  enum fixup_channel_source { ____Placeholder_fixup_channel_source } fixup_channel_source ;

/* Variables and functions */

__attribute__((used)) static inline struct color_fixup_desc create_color_fixup_desc(
        int sign0, enum fixup_channel_source src0, int sign1, enum fixup_channel_source src1,
        int sign2, enum fixup_channel_source src2, int sign3, enum fixup_channel_source src3)
{
    struct color_fixup_desc fixup =
    {
        sign0, src0,
        sign1, src1,
        sign2, src2,
        sign3, src3,
    };
    return fixup;
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
          int sign0 = 100;
          enum fixup_channel_source src0 = 0;
          int sign1 = 100;
          enum fixup_channel_source src1 = 0;
          int sign2 = 100;
          enum fixup_channel_source src2 = 0;
          int sign3 = 100;
          enum fixup_channel_source src3 = 0;
          struct color_fixup_desc benchRet = create_color_fixup_desc(sign0,src0,sign1,src1,sign2,src2,sign3,src3);
          printf("%d\n", benchRet.member_0);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_2);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_4);
          printf("%d\n", benchRet.member_5);
          printf("%d\n", benchRet.member_6);
          printf("%d\n", benchRet.member_7);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sign0 = 255;
          enum fixup_channel_source src0 = 0;
          int sign1 = 255;
          enum fixup_channel_source src1 = 0;
          int sign2 = 255;
          enum fixup_channel_source src2 = 0;
          int sign3 = 255;
          enum fixup_channel_source src3 = 0;
          struct color_fixup_desc benchRet = create_color_fixup_desc(sign0,src0,sign1,src1,sign2,src2,sign3,src3);
          printf("%d\n", benchRet.member_0);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_2);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_4);
          printf("%d\n", benchRet.member_5);
          printf("%d\n", benchRet.member_6);
          printf("%d\n", benchRet.member_7);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sign0 = 10;
          enum fixup_channel_source src0 = 0;
          int sign1 = 10;
          enum fixup_channel_source src1 = 0;
          int sign2 = 10;
          enum fixup_channel_source src2 = 0;
          int sign3 = 10;
          enum fixup_channel_source src3 = 0;
          struct color_fixup_desc benchRet = create_color_fixup_desc(sign0,src0,sign1,src1,sign2,src2,sign3,src3);
          printf("%d\n", benchRet.member_0);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_2);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_4);
          printf("%d\n", benchRet.member_5);
          printf("%d\n", benchRet.member_6);
          printf("%d\n", benchRet.member_7);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
