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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct memac_cfg {int reset_on_init; int promiscuous_mode_enable; int pause_ignore; int /*<<< orphan*/  pause_quanta; int /*<<< orphan*/  max_frame_length; int /*<<< orphan*/  tx_ipg_length; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEFAULT_FRAME_LENGTH ; 
 int /*<<< orphan*/  DEFAULT_PAUSE_QUANTA ; 
 int /*<<< orphan*/  DEFAULT_TX_IPG_LENGTH ; 

__attribute__((used)) static void set_dflts(struct memac_cfg *cfg)
{
	cfg->reset_on_init = false;
	cfg->promiscuous_mode_enable = false;
	cfg->pause_ignore = false;
	cfg->tx_ipg_length = DEFAULT_TX_IPG_LENGTH;
	cfg->max_frame_length = DEFAULT_FRAME_LENGTH;
	cfg->pause_quanta = DEFAULT_PAUSE_QUANTA;
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
          int _len_cfg0 = 1;
          struct memac_cfg * cfg = (struct memac_cfg *) malloc(_len_cfg0*sizeof(struct memac_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].reset_on_init = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].promiscuous_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pause_ignore = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pause_quanta = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].max_frame_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].tx_ipg_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dflts(cfg);
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cfg0 = 65025;
          struct memac_cfg * cfg = (struct memac_cfg *) malloc(_len_cfg0*sizeof(struct memac_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].reset_on_init = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].promiscuous_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pause_ignore = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pause_quanta = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].max_frame_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].tx_ipg_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dflts(cfg);
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cfg0 = 100;
          struct memac_cfg * cfg = (struct memac_cfg *) malloc(_len_cfg0*sizeof(struct memac_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].reset_on_init = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].promiscuous_mode_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pause_ignore = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].pause_quanta = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].max_frame_length = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].tx_ipg_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dflts(cfg);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
