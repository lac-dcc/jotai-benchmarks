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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct gpmc_timings {int cs_on; int cs_rd_off; int cs_wr_off; int adv_on; int adv_rd_off; int adv_wr_off; int we_on; int we_off; int oe_on; int oe_off; int page_burst_access; int access; int rd_cycle; int wr_cycle; int bus_turnaround; int cycle2cycle_delay; int wait_monitoring; int clk_activation; int wr_access; int wr_data_mux_bus; } ;

/* Variables and functions */

__attribute__((used)) static void gpmc_convert_ps_to_ns(struct gpmc_timings *t)
{
	t->cs_on /= 1000;
	t->cs_rd_off /= 1000;
	t->cs_wr_off /= 1000;
	t->adv_on /= 1000;
	t->adv_rd_off /= 1000;
	t->adv_wr_off /= 1000;
	t->we_on /= 1000;
	t->we_off /= 1000;
	t->oe_on /= 1000;
	t->oe_off /= 1000;
	t->page_burst_access /= 1000;
	t->access /= 1000;
	t->rd_cycle /= 1000;
	t->wr_cycle /= 1000;
	t->bus_turnaround /= 1000;
	t->cycle2cycle_delay /= 1000;
	t->wait_monitoring /= 1000;
	t->clk_activation /= 1000;
	t->wr_access /= 1000;
	t->wr_data_mux_bus /= 1000;
}

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
          int _len_t0 = 65025;
          struct gpmc_timings * t = (struct gpmc_timings *) malloc(_len_t0*sizeof(struct gpmc_timings));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].cs_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cs_rd_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cs_wr_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_rd_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_wr_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].we_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].we_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].oe_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].oe_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].page_burst_access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].rd_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].bus_turnaround = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cycle2cycle_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wait_monitoring = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].clk_activation = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_data_mux_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gpmc_convert_ps_to_ns(t);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_t0 = 100;
          struct gpmc_timings * t = (struct gpmc_timings *) malloc(_len_t0*sizeof(struct gpmc_timings));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].cs_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cs_rd_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cs_wr_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_rd_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_wr_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].we_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].we_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].oe_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].oe_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].page_burst_access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].rd_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].bus_turnaround = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cycle2cycle_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wait_monitoring = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].clk_activation = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_data_mux_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gpmc_convert_ps_to_ns(t);
          free(t);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_t0 = 1;
          struct gpmc_timings * t = (struct gpmc_timings *) malloc(_len_t0*sizeof(struct gpmc_timings));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              t[_i0].cs_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cs_rd_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cs_wr_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_rd_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].adv_wr_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].we_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].we_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].oe_on = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].oe_off = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].page_burst_access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].rd_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].bus_turnaround = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].cycle2cycle_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wait_monitoring = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].clk_activation = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_access = ((-2 * (next_i()%2)) + 1) * next_i();
          t[_i0].wr_data_mux_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gpmc_convert_ps_to_ns(t);
          free(t);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
