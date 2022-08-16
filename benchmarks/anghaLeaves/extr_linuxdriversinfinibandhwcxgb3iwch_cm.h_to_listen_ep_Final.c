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
struct iwch_listen_ep {int dummy; } ;
struct iw_cm_id {struct iwch_listen_ep* provider_data; } ;

/* Variables and functions */

__attribute__((used)) static inline struct iwch_listen_ep *to_listen_ep(struct iw_cm_id *cm_id)
{
	return cm_id->provider_data;
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
          int _len_cm_id0 = 1;
          struct iw_cm_id * cm_id = (struct iw_cm_id *) malloc(_len_cm_id0*sizeof(struct iw_cm_id));
          for(int _i0 = 0; _i0 < _len_cm_id0; _i0++) {
              int _len_cm_id__i0__provider_data0 = 1;
          cm_id[_i0].provider_data = (struct iwch_listen_ep *) malloc(_len_cm_id__i0__provider_data0*sizeof(struct iwch_listen_ep));
          for(int _j0 = 0; _j0 < _len_cm_id__i0__provider_data0; _j0++) {
            cm_id[_i0].provider_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct iwch_listen_ep * benchRet = to_listen_ep(cm_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cm_id0; _aux++) {
          free(cm_id[_aux].provider_data);
          }
          free(cm_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
