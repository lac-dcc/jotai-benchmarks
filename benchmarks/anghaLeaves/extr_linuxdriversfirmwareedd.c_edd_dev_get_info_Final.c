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
struct edd_info {int dummy; } ;
struct edd_device {struct edd_info* info; } ;

/* Variables and functions */

__attribute__((used)) static inline struct edd_info *
edd_dev_get_info(struct edd_device *edev)
{
	return edev->info;
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
          int _len_edev0 = 1;
          struct edd_device * edev = (struct edd_device *) malloc(_len_edev0*sizeof(struct edd_device));
          for(int _i0 = 0; _i0 < _len_edev0; _i0++) {
              int _len_edev__i0__info0 = 1;
          edev[_i0].info = (struct edd_info *) malloc(_len_edev__i0__info0*sizeof(struct edd_info));
          for(int _j0 = 0; _j0 < _len_edev__i0__info0; _j0++) {
            edev[_i0].info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct edd_info * benchRet = edd_dev_get_info(edev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_edev0; _aux++) {
          free(edev[_aux].info);
          }
          free(edev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
