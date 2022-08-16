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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_3__ {int sensor_num; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct cros_ec_sensors_core_state {scalar_t__ type; TYPE_2__ param; } ;

/* Variables and functions */
 int CROS_EC_SENSOR_MAX_AXIS ; 
 unsigned int EC_MEMMAP_ACC_DATA ; 
 unsigned int EC_MEMMAP_GYRO_DATA ; 
 scalar_t__ MOTIONSENSE_TYPE_ACCEL ; 

__attribute__((used)) static unsigned int cros_ec_sensors_idx_to_reg(
					struct cros_ec_sensors_core_state *st,
					unsigned int idx)
{
	/*
	 * When using LPC interface, only space for 2 Accel and one Gyro.
	 * First halfword of MOTIONSENSE_TYPE_ACCEL is used by angle.
	 */
	if (st->type == MOTIONSENSE_TYPE_ACCEL)
		return EC_MEMMAP_ACC_DATA + sizeof(u16) *
			(1 + idx + st->param.info.sensor_num *
			 CROS_EC_SENSOR_MAX_AXIS);

	return EC_MEMMAP_GYRO_DATA + sizeof(u16) * idx;
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
          unsigned int idx = 100;
          int _len_st0 = 1;
          struct cros_ec_sensors_core_state * st = (struct cros_ec_sensors_core_state *) malloc(_len_st0*sizeof(struct cros_ec_sensors_core_state));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].param.info.sensor_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = cros_ec_sensors_idx_to_reg(st,idx);
          printf("%u\n", benchRet); 
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
