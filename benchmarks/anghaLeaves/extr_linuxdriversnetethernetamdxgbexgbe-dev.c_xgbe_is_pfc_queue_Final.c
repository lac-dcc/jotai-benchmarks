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
struct xgbe_prv_data {unsigned int* prio2q_map; TYPE_2__* pfc; TYPE_1__* ets; } ;
struct TYPE_4__ {int pfc_en; } ;
struct TYPE_3__ {unsigned int* prio_tc; } ;

/* Variables and functions */
 unsigned int IEEE_8021QAZ_MAX_TCS ; 

__attribute__((used)) static bool xgbe_is_pfc_queue(struct xgbe_prv_data *pdata,
			      unsigned int queue)
{
	unsigned int prio, tc;

	for (prio = 0; prio < IEEE_8021QAZ_MAX_TCS; prio++) {
		/* Does this queue handle the priority? */
		if (pdata->prio2q_map[prio] != queue)
			continue;

		/* Get the Traffic Class for this priority */
		tc = pdata->ets->prio_tc[prio];

		/* Check if PFC is enabled for this traffic class */
		if (pdata->pfc->pfc_en & (1 << tc))
			return true;
	}

	return false;
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
          unsigned int queue = 100;
          int _len_pdata0 = 1;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__prio2q_map0 = 1;
          pdata[_i0].prio2q_map = (unsigned int *) malloc(_len_pdata__i0__prio2q_map0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__prio2q_map0; _j0++) {
            pdata[_i0].prio2q_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__pfc0 = 1;
          pdata[_i0].pfc = (struct TYPE_4__ *) malloc(_len_pdata__i0__pfc0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__pfc0; _j0++) {
            pdata[_i0].pfc->pfc_en = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdata__i0__ets0 = 1;
          pdata[_i0].ets = (struct TYPE_3__ *) malloc(_len_pdata__i0__ets0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__ets0; _j0++) {
              int _len_pdata__i0__ets_prio_tc0 = 1;
          pdata[_i0].ets->prio_tc = (unsigned int *) malloc(_len_pdata__i0__ets_prio_tc0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pdata__i0__ets_prio_tc0; _j0++) {
            pdata[_i0].ets->prio_tc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = xgbe_is_pfc_queue(pdata,queue);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].prio2q_map);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].pfc);
          }
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].ets);
          }
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
