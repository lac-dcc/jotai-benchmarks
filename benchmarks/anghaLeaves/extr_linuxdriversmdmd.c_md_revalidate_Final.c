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
struct mddev {scalar_t__ changed; } ;
struct gendisk {struct mddev* private_data; } ;

/* Variables and functions */

__attribute__((used)) static int md_revalidate(struct gendisk *disk)
{
	struct mddev *mddev = disk->private_data;

	mddev->changed = 0;
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

    // int-bounds
    case 0:
    {
          int _len_disk0 = 1;
          struct gendisk * disk = (struct gendisk *) malloc(_len_disk0*sizeof(struct gendisk));
          for(int _i0 = 0; _i0 < _len_disk0; _i0++) {
              int _len_disk__i0__private_data0 = 1;
          disk[_i0].private_data = (struct mddev *) malloc(_len_disk__i0__private_data0*sizeof(struct mddev));
          for(int _j0 = 0; _j0 < _len_disk__i0__private_data0; _j0++) {
            disk[_i0].private_data->changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = md_revalidate(disk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_disk0; _aux++) {
          free(disk[_aux].private_data);
          }
          free(disk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
