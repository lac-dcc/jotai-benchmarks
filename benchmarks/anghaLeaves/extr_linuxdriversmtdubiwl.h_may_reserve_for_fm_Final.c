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
struct ubi_wl_entry {int dummy; } ;
struct ubi_device {int dummy; } ;
struct rb_root {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct ubi_wl_entry *may_reserve_for_fm(struct ubi_device *ubi,
					       struct ubi_wl_entry *e,
					       struct rb_root *root) {
	return e;
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
          int _len_ubi0 = 1;
          struct ubi_device * ubi = (struct ubi_device *) malloc(_len_ubi0*sizeof(struct ubi_device));
          for(int _i0 = 0; _i0 < _len_ubi0; _i0++) {
            ubi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 1;
          struct ubi_wl_entry * e = (struct ubi_wl_entry *) malloc(_len_e0*sizeof(struct ubi_wl_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_root0 = 1;
          struct rb_root * root = (struct rb_root *) malloc(_len_root0*sizeof(struct rb_root));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ubi_wl_entry * benchRet = may_reserve_for_fm(ubi,e,root);
          printf("%d\n", (*benchRet).dummy);
          free(ubi);
          free(e);
          free(root);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
