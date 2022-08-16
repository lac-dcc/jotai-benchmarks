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
struct target_type {int dummy; } ;
struct mapped_device {struct target_type* immutable_target_type; } ;

/* Variables and functions */

struct target_type *dm_get_immutable_target_type(struct mapped_device *md)
{
	return md->immutable_target_type;
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
          int _len_md0 = 1;
          struct mapped_device * md = (struct mapped_device *) malloc(_len_md0*sizeof(struct mapped_device));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
              int _len_md__i0__immutable_target_type0 = 1;
          md[_i0].immutable_target_type = (struct target_type *) malloc(_len_md__i0__immutable_target_type0*sizeof(struct target_type));
          for(int _j0 = 0; _j0 < _len_md__i0__immutable_target_type0; _j0++) {
            md[_i0].immutable_target_type->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct target_type * benchRet = dm_get_immutable_target_type(md);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].immutable_target_type);
          }
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
