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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int /*<<< orphan*/  cea708_cc_type_t ;
struct TYPE_3__ {int member_0; int member_1; int /*<<< orphan*/  member_3; int /*<<< orphan*/  member_2; } ;
typedef  TYPE_1__ cc_data_t ;

/* Variables and functions */

cc_data_t cea708_encode_cc_data(int cc_valid, cea708_cc_type_t type, uint16_t cc_data)
{
    cc_data_t data = { 0x1F, cc_valid, type, cc_data };
    return data;
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
          int cc_valid = 100;
          int type = 100;
          int cc_data = 100;
          struct TYPE_3__ benchRet = cea708_encode_cc_data(cc_valid,type,cc_data);
          printf("%d\n", benchRet.member_0);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cc_valid = 255;
          int type = 255;
          int cc_data = 255;
          struct TYPE_3__ benchRet = cea708_encode_cc_data(cc_valid,type,cc_data);
          printf("%d\n", benchRet.member_0);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cc_valid = 10;
          int type = 10;
          int cc_data = 10;
          struct TYPE_3__ benchRet = cea708_encode_cc_data(cc_valid,type,cc_data);
          printf("%d\n", benchRet.member_0);
          printf("%d\n", benchRet.member_1);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
