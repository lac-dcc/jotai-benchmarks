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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int numtc; int /*<<< orphan*/  ena_tc; } ;
struct ice_vsi {TYPE_1__ tc_cfg; } ;

/* Variables and functions */
 int /*<<< orphan*/  ICE_DFLT_TRAFFIC_CLASS ; 

__attribute__((used)) static inline void ice_vsi_set_tc_cfg(struct ice_vsi *vsi)
{
	vsi->tc_cfg.ena_tc =  ICE_DFLT_TRAFFIC_CLASS;
	vsi->tc_cfg.numtc = 1;
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
          int _len_vsi0 = 1;
          struct ice_vsi * vsi = (struct ice_vsi *) malloc(_len_vsi0*sizeof(struct ice_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
            vsi[_i0].tc_cfg.numtc = ((-2 * (next_i()%2)) + 1) * next_i();
        vsi[_i0].tc_cfg.ena_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ice_vsi_set_tc_cfg(vsi);
          free(vsi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vsi0 = 65025;
          struct ice_vsi * vsi = (struct ice_vsi *) malloc(_len_vsi0*sizeof(struct ice_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
            vsi[_i0].tc_cfg.numtc = ((-2 * (next_i()%2)) + 1) * next_i();
        vsi[_i0].tc_cfg.ena_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ice_vsi_set_tc_cfg(vsi);
          free(vsi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vsi0 = 100;
          struct ice_vsi * vsi = (struct ice_vsi *) malloc(_len_vsi0*sizeof(struct ice_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
            vsi[_i0].tc_cfg.numtc = ((-2 * (next_i()%2)) + 1) * next_i();
        vsi[_i0].tc_cfg.ena_tc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ice_vsi_set_tc_cfg(vsi);
          free(vsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
