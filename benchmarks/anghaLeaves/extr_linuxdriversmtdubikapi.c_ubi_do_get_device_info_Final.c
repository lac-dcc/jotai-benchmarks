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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ubi_device_info {int /*<<< orphan*/  cdev; int /*<<< orphan*/  ro_mode; int /*<<< orphan*/  max_write_size; int /*<<< orphan*/  min_io_size; int /*<<< orphan*/  leb_start; int /*<<< orphan*/  leb_size; int /*<<< orphan*/  ubi_num; } ;
struct TYPE_2__ {int /*<<< orphan*/  dev; } ;
struct ubi_device {TYPE_1__ cdev; int /*<<< orphan*/  ro_mode; int /*<<< orphan*/  max_write_size; int /*<<< orphan*/  min_io_size; int /*<<< orphan*/  leb_start; int /*<<< orphan*/  leb_size; int /*<<< orphan*/  ubi_num; } ;

/* Variables and functions */

void ubi_do_get_device_info(struct ubi_device *ubi, struct ubi_device_info *di)
{
	di->ubi_num = ubi->ubi_num;
	di->leb_size = ubi->leb_size;
	di->leb_start = ubi->leb_start;
	di->min_io_size = ubi->min_io_size;
	di->max_write_size = ubi->max_write_size;
	di->ro_mode = ubi->ro_mode;
	di->cdev = ubi->cdev.dev;
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
            ubi[_i0].cdev.dev = ((-2 * (next_i()%2)) + 1) * next_i();
        ubi[_i0].ro_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ubi[_i0].max_write_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ubi[_i0].min_io_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ubi[_i0].leb_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ubi[_i0].leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ubi[_i0].ubi_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di0 = 1;
          struct ubi_device_info * di = (struct ubi_device_info *) malloc(_len_di0*sizeof(struct ubi_device_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].cdev = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ro_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].max_write_size = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].min_io_size = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].leb_start = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].ubi_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ubi_do_get_device_info(ubi,di);
          free(ubi);
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
