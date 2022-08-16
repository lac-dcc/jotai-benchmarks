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
typedef  int /*<<< orphan*/  uint64_t ;
struct dsa_switch {struct dsa_loop_priv* priv; } ;
struct dsa_loop_priv {TYPE_2__* ports; } ;
struct TYPE_4__ {TYPE_1__* mib; } ;
struct TYPE_3__ {int /*<<< orphan*/  val; } ;

/* Variables and functions */
 unsigned int __DSA_LOOP_CNT_MAX ; 

__attribute__((used)) static void dsa_loop_get_ethtool_stats(struct dsa_switch *ds, int port,
				       uint64_t *data)
{
	struct dsa_loop_priv *ps = ds->priv;
	unsigned int i;

	for (i = 0; i < __DSA_LOOP_CNT_MAX; i++)
		data[i] = ps->ports[port].mib[i].val;
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
          int _len_ds0 = 1;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              int _len_ds__i0__priv0 = 1;
          ds[_i0].priv = (struct dsa_loop_priv *) malloc(_len_ds__i0__priv0*sizeof(struct dsa_loop_priv));
          for(int _j0 = 0; _j0 < _len_ds__i0__priv0; _j0++) {
              int _len_ds__i0__priv_ports0 = 1;
          ds[_i0].priv->ports = (struct TYPE_4__ *) malloc(_len_ds__i0__priv_ports0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ds__i0__priv_ports0; _j0++) {
              int _len_ds__i0__priv_ports_mib0 = 1;
          ds[_i0].priv->ports->mib = (struct TYPE_3__ *) malloc(_len_ds__i0__priv_ports_mib0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ds__i0__priv_ports_mib0; _j0++) {
            ds[_i0].priv->ports->mib->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsa_loop_get_ethtool_stats(ds,port,data);
          for(int _aux = 0; _aux < _len_ds0; _aux++) {
          free(ds[_aux].priv);
          }
          free(ds);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
