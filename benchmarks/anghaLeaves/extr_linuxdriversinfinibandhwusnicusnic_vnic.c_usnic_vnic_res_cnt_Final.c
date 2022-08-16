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
struct usnic_vnic {TYPE_1__* chunks; } ;
typedef  enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {int cnt; } ;

/* Variables and functions */

int usnic_vnic_res_cnt(struct usnic_vnic *vnic,
				enum usnic_vnic_res_type type)
{
	return vnic->chunks[type].cnt;
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
          enum usnic_vnic_res_type type = 0;
          int _len_vnic0 = 1;
          struct usnic_vnic * vnic = (struct usnic_vnic *) malloc(_len_vnic0*sizeof(struct usnic_vnic));
          for(int _i0 = 0; _i0 < _len_vnic0; _i0++) {
              int _len_vnic__i0__chunks0 = 1;
          vnic[_i0].chunks = (struct TYPE_2__ *) malloc(_len_vnic__i0__chunks0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vnic__i0__chunks0; _j0++) {
            vnic[_i0].chunks->cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usnic_vnic_res_cnt(vnic,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vnic0; _aux++) {
          free(vnic[_aux].chunks);
          }
          free(vnic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
