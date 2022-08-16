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
struct realtek_smi {int num_ports; int num_mib_counters; } ;
struct dsa_switch {struct realtek_smi* priv; } ;

/* Variables and functions */
 int EINVAL ; 
 int ETH_SS_STATS ; 

int rtl8366_get_sset_count(struct dsa_switch *ds, int port, int sset)
{
	struct realtek_smi *smi = ds->priv;

	/* We only support SS_STATS */
	if (sset != ETH_SS_STATS)
		return 0;
	if (port >= smi->num_ports)
		return -EINVAL;

	return smi->num_mib_counters;
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
          int port = 100;
          int sset = 100;
          int _len_ds0 = 1;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              int _len_ds__i0__priv0 = 1;
          ds[_i0].priv = (struct realtek_smi *) malloc(_len_ds__i0__priv0*sizeof(struct realtek_smi));
          for(int _j0 = 0; _j0 < _len_ds__i0__priv0; _j0++) {
            ds[_i0].priv->num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].priv->num_mib_counters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rtl8366_get_sset_count(ds,port,sset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ds0; _aux++) {
          free(ds[_aux].priv);
          }
          free(ds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
