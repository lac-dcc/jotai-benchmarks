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
       0            big-arr\n\
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
struct eisa_root_device {int bus_nr; } ;
struct eisa_device {int slot; } ;

/* Variables and functions */

__attribute__((used)) static int is_forced_dev(int *forced_tab,
			 int forced_count,
			 struct eisa_root_device *root,
			 struct eisa_device *edev)
{
	int i, x;

	for (i = 0; i < forced_count; i++) {
		x = (root->bus_nr << 8) | edev->slot;
		if (forced_tab[i] == x)
			return 1;
	}

	return 0;
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

    // big-arr
    case 0:
    {
          int forced_count = 255;
          int _len_forced_tab0 = 65025;
          int * forced_tab = (int *) malloc(_len_forced_tab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_forced_tab0; _i0++) {
            forced_tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_root0 = 1;
          struct eisa_root_device * root = (struct eisa_root_device *) malloc(_len_root0*sizeof(struct eisa_root_device));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root->bus_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_edev0 = 1;
          struct eisa_device * edev = (struct eisa_device *) malloc(_len_edev0*sizeof(struct eisa_device));
          for(int _i0 = 0; _i0 < _len_edev0; _i0++) {
            edev->slot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_forced_dev(forced_tab,forced_count,root,edev);
          printf("%d\n", benchRet); 
          free(forced_tab);
          free(root);
          free(edev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
