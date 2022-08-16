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
struct iio_dev {int dummy; } ;
struct bmc150_accel_data {TYPE_1__* interrupts; } ;
struct TYPE_2__ {int /*<<< orphan*/ * info; } ;

/* Variables and functions */
 int BMC150_ACCEL_INTERRUPTS ; 
 int /*<<< orphan*/ * bmc150_accel_interrupts ; 

__attribute__((used)) static void bmc150_accel_interrupts_setup(struct iio_dev *indio_dev,
					  struct bmc150_accel_data *data)
{
	int i;

	for (i = 0; i < BMC150_ACCEL_INTERRUPTS; i++)
		data->interrupts[i].info = &bmc150_accel_interrupts[i];
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
          int _len_indio_dev0 = 1;
          struct iio_dev * indio_dev = (struct iio_dev *) malloc(_len_indio_dev0*sizeof(struct iio_dev));
          for(int _i0 = 0; _i0 < _len_indio_dev0; _i0++) {
            indio_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct bmc150_accel_data * data = (struct bmc150_accel_data *) malloc(_len_data0*sizeof(struct bmc150_accel_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__interrupts0 = 1;
          data[_i0].interrupts = (struct TYPE_2__ *) malloc(_len_data__i0__interrupts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__interrupts0; _j0++) {
              int _len_data__i0__interrupts_info0 = 1;
          data[_i0].interrupts->info = (int *) malloc(_len_data__i0__interrupts_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__interrupts_info0; _j0++) {
            data[_i0].interrupts->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bmc150_accel_interrupts_setup(indio_dev,data);
          free(indio_dev);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].interrupts);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
