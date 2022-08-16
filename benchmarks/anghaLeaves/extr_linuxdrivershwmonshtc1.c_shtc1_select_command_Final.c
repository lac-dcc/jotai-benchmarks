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
struct TYPE_2__ {scalar_t__ blocking_io; scalar_t__ high_precision; } ;
struct shtc1_data {int /*<<< orphan*/  nonblocking_wait_time; TYPE_1__ setup; int /*<<< orphan*/  command; } ;

/* Variables and functions */
 int /*<<< orphan*/  SHTC1_NONBLOCKING_WAIT_TIME_HPM ; 
 int /*<<< orphan*/  SHTC1_NONBLOCKING_WAIT_TIME_LPM ; 
 int /*<<< orphan*/  shtc1_cmd_measure_blocking_hpm ; 
 int /*<<< orphan*/  shtc1_cmd_measure_blocking_lpm ; 
 int /*<<< orphan*/  shtc1_cmd_measure_nonblocking_hpm ; 
 int /*<<< orphan*/  shtc1_cmd_measure_nonblocking_lpm ; 

__attribute__((used)) static void shtc1_select_command(struct shtc1_data *data)
{
	if (data->setup.high_precision) {
		data->command = data->setup.blocking_io ?
				shtc1_cmd_measure_blocking_hpm :
				shtc1_cmd_measure_nonblocking_hpm;
		data->nonblocking_wait_time = SHTC1_NONBLOCKING_WAIT_TIME_HPM;

	} else {
		data->command = data->setup.blocking_io ?
				shtc1_cmd_measure_blocking_lpm :
				shtc1_cmd_measure_nonblocking_lpm;
		data->nonblocking_wait_time = SHTC1_NONBLOCKING_WAIT_TIME_LPM;
	}
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
          int _len_data0 = 1;
          struct shtc1_data * data = (struct shtc1_data *) malloc(_len_data0*sizeof(struct shtc1_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].nonblocking_wait_time = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].setup.blocking_io = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].setup.high_precision = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shtc1_select_command(data);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
