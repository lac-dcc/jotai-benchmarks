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
struct net_device {TYPE_1__* wireless_data; } ;
struct iw_spy_data {int dummy; } ;
struct TYPE_2__ {struct iw_spy_data* spy_data; } ;

/* Variables and functions */

__attribute__((used)) static inline struct iw_spy_data *get_spydata(struct net_device *dev)
{
	/* This is the new way */
	if (dev->wireless_data)
		return dev->wireless_data->spy_data;
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__wireless_data0 = 1;
          dev[_i0].wireless_data = (struct TYPE_2__ *) malloc(_len_dev__i0__wireless_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__wireless_data0; _j0++) {
              int _len_dev__i0__wireless_data_spy_data0 = 1;
          dev[_i0].wireless_data->spy_data = (struct iw_spy_data *) malloc(_len_dev__i0__wireless_data_spy_data0*sizeof(struct iw_spy_data));
          for(int _j0 = 0; _j0 < _len_dev__i0__wireless_data_spy_data0; _j0++) {
            dev[_i0].wireless_data->spy_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct iw_spy_data * benchRet = get_spydata(dev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].wireless_data);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
