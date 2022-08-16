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
struct TYPE_2__ {scalar_t__ i2c_id; } ;
struct radeon_i2c_chan {TYPE_1__ rec; } ;
struct radeon_i2c_bus_rec {scalar_t__ i2c_id; } ;
struct radeon_device {struct radeon_i2c_chan** i2c_bus; } ;

/* Variables and functions */
 int RADEON_MAX_I2C_BUS ; 

struct radeon_i2c_chan *radeon_i2c_lookup(struct radeon_device *rdev,
					  struct radeon_i2c_bus_rec *i2c_bus)
{
	int i;

	for (i = 0; i < RADEON_MAX_I2C_BUS; i++) {
		if (rdev->i2c_bus[i] &&
		    (rdev->i2c_bus[i]->rec.i2c_id == i2c_bus->i2c_id)) {
			return rdev->i2c_bus[i];
		}
	}
	return NULL;
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__i2c_bus0 = 1;
          rdev[_i0].i2c_bus = (struct radeon_i2c_chan **) malloc(_len_rdev__i0__i2c_bus0*sizeof(struct radeon_i2c_chan *));
          for(int _j0 = 0; _j0 < _len_rdev__i0__i2c_bus0; _j0++) {
            int _len_rdev__i0__i2c_bus1 = 1;
            rdev[_i0].i2c_bus[_j0] = (struct radeon_i2c_chan *) malloc(_len_rdev__i0__i2c_bus1*sizeof(struct radeon_i2c_chan));
            for(int _j1 = 0; _j1 < _len_rdev__i0__i2c_bus1; _j1++) {
              rdev[_i0].i2c_bus[_j0]->rec.i2c_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_i2c_bus0 = 1;
          struct radeon_i2c_bus_rec * i2c_bus = (struct radeon_i2c_bus_rec *) malloc(_len_i2c_bus0*sizeof(struct radeon_i2c_bus_rec));
          for(int _i0 = 0; _i0 < _len_i2c_bus0; _i0++) {
            i2c_bus[_i0].i2c_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct radeon_i2c_chan * benchRet = radeon_i2c_lookup(rdev,i2c_bus);
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(*(rdev[_aux].i2c_bus));
        free(rdev[_aux].i2c_bus);
          }
          free(rdev);
          free(i2c_bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
