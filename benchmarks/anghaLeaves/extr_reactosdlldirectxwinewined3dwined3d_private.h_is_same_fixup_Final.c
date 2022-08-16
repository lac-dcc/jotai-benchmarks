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
struct color_fixup_desc {scalar_t__ x_sign_fixup; scalar_t__ x_source; scalar_t__ y_sign_fixup; scalar_t__ y_source; scalar_t__ z_sign_fixup; scalar_t__ z_source; scalar_t__ w_sign_fixup; scalar_t__ w_source; } ;
typedef  int BOOL ;

/* Variables and functions */

__attribute__((used)) static inline BOOL is_same_fixup(struct color_fixup_desc f1, struct color_fixup_desc f2)
{
    return f1.x_sign_fixup == f2.x_sign_fixup && f1.x_source == f2.x_source
            && f1.y_sign_fixup == f2.y_sign_fixup && f1.y_source == f2.y_source
            && f1.z_sign_fixup == f2.z_sign_fixup && f1.z_source == f2.z_source
            && f1.w_sign_fixup == f2.w_sign_fixup && f1.w_source == f2.w_source;
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
          struct color_fixup_desc f1;
        f1.x_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.x_source = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.y_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.y_source = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.z_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.z_source = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.w_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f1.w_source = ((-2 * (next_i()%2)) + 1) * next_i();
          struct color_fixup_desc f2;
        f2.x_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.x_source = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.y_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.y_source = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.z_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.z_source = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.w_sign_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        f2.w_source = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = is_same_fixup(f1,f2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
