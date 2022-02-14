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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ rx_errors; scalar_t__ tx_errors; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct dpaa_percpu_priv {TYPE_1__ stats; scalar_t__ tx_frag_skbuffs; scalar_t__ tx_confirm; scalar_t__ in_interrupt; } ;

/* Variables and functions */
 int DPAA_BPS_NUM ; 

__attribute__((used)) static void copy_stats(struct dpaa_percpu_priv *percpu_priv, int num_cpus,
		       int crr_cpu, u64 *bp_count, u64 *data)
{
	int num_values = num_cpus + 1;
	int crr = 0, j;

	/* update current CPU's stats and also add them to the total values */
	data[crr * num_values + crr_cpu] = percpu_priv->in_interrupt;
	data[crr++ * num_values + num_cpus] += percpu_priv->in_interrupt;

	data[crr * num_values + crr_cpu] = percpu_priv->stats.rx_packets;
	data[crr++ * num_values + num_cpus] += percpu_priv->stats.rx_packets;

	data[crr * num_values + crr_cpu] = percpu_priv->stats.tx_packets;
	data[crr++ * num_values + num_cpus] += percpu_priv->stats.tx_packets;

	data[crr * num_values + crr_cpu] = percpu_priv->tx_confirm;
	data[crr++ * num_values + num_cpus] += percpu_priv->tx_confirm;

	data[crr * num_values + crr_cpu] = percpu_priv->tx_frag_skbuffs;
	data[crr++ * num_values + num_cpus] += percpu_priv->tx_frag_skbuffs;

	data[crr * num_values + crr_cpu] = percpu_priv->stats.tx_errors;
	data[crr++ * num_values + num_cpus] += percpu_priv->stats.tx_errors;

	data[crr * num_values + crr_cpu] = percpu_priv->stats.rx_errors;
	data[crr++ * num_values + num_cpus] += percpu_priv->stats.rx_errors;

	for (j = 0; j < DPAA_BPS_NUM; j++) {
		data[crr * num_values + crr_cpu] = bp_count[j];
		data[crr++ * num_values + num_cpus] += bp_count[j];
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

    // big-arr
    case 0:
    {
          int num_cpus = 255;
          int crr_cpu = 255;
          int _len_percpu_priv0 = 1;
          struct dpaa_percpu_priv * percpu_priv = (struct dpaa_percpu_priv *) malloc(_len_percpu_priv0*sizeof(struct dpaa_percpu_priv));
          for(int _i0 = 0; _i0 < _len_percpu_priv0; _i0++) {
            percpu_priv->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv->stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv->stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv->tx_frag_skbuffs = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv->tx_confirm = ((-2 * (next_i()%2)) + 1) * next_i();
        percpu_priv->in_interrupt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp_count0 = 65025;
          long * bp_count = (long *) malloc(_len_bp_count0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_bp_count0; _i0++) {
            bp_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          long * data = (long *) malloc(_len_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_stats(percpu_priv,num_cpus,crr_cpu,bp_count,data);
          free(percpu_priv);
          free(bp_count);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
