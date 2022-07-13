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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct color_fixup_desc {unsigned int member_0; unsigned int member_2; unsigned int member_4; unsigned int member_6; int /*<<< orphan*/  member_7; int /*<<< orphan*/  member_5; int /*<<< orphan*/  member_3; int /*<<< orphan*/  member_1; } ;
typedef  enum complex_fixup { ____Placeholder_complex_fixup } complex_fixup ;

/* Variables and functions */
 int /*<<< orphan*/  CHANNEL_SOURCE_COMPLEX0 ; 
 int /*<<< orphan*/  CHANNEL_SOURCE_COMPLEX1 ; 

__attribute__((used)) static inline struct color_fixup_desc create_complex_fixup_desc(enum complex_fixup complex_fixup)
{
    struct color_fixup_desc fixup =
    {
        0u, complex_fixup & (1u << 0) ? CHANNEL_SOURCE_COMPLEX1 : CHANNEL_SOURCE_COMPLEX0,
        0u, complex_fixup & (1u << 1) ? CHANNEL_SOURCE_COMPLEX1 : CHANNEL_SOURCE_COMPLEX0,
        0u, complex_fixup & (1u << 2) ? CHANNEL_SOURCE_COMPLEX1 : CHANNEL_SOURCE_COMPLEX0,
        0u, complex_fixup & (1u << 3) ? CHANNEL_SOURCE_COMPLEX1 : CHANNEL_SOURCE_COMPLEX0,
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
          enum complex_fixup complex_fixup = 0;
          struct color_fixup_desc benchRet = create_complex_fixup_desc(complex_fixup);
          printf("%u\n", benchRet.member_0);
          printf("%u\n", benchRet.member_2);
          printf("%u\n", benchRet.member_4);
          printf("%u\n", benchRet.member_6);
          printf("%d\n", benchRet.member_7);
          printf("%d\n", benchRet.member_5);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_1);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum complex_fixup complex_fixup = 0;
          struct color_fixup_desc benchRet = create_complex_fixup_desc(complex_fixup);
          printf("%u\n", benchRet.member_0);
          printf("%u\n", benchRet.member_2);
          printf("%u\n", benchRet.member_4);
          printf("%u\n", benchRet.member_6);
          printf("%d\n", benchRet.member_7);
          printf("%d\n", benchRet.member_5);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum complex_fixup complex_fixup = 0;
          struct color_fixup_desc benchRet = create_complex_fixup_desc(complex_fixup);
          printf("%u\n", benchRet.member_0);
          printf("%u\n", benchRet.member_2);
          printf("%u\n", benchRet.member_4);
          printf("%u\n", benchRet.member_6);
          printf("%d\n", benchRet.member_7);
          printf("%d\n", benchRet.member_5);
          printf("%d\n", benchRet.member_3);
          printf("%d\n", benchRet.member_1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
