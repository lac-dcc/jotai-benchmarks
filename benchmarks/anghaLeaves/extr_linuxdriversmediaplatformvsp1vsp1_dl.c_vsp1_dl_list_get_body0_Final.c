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
struct vsp1_dl_list {struct vsp1_dl_body* body0; } ;
struct vsp1_dl_body {int dummy; } ;

/* Variables and functions */

struct vsp1_dl_body *vsp1_dl_list_get_body0(struct vsp1_dl_list *dl)
{
	return dl->body0;
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
          int _len_dl0 = 1;
          struct vsp1_dl_list * dl = (struct vsp1_dl_list *) malloc(_len_dl0*sizeof(struct vsp1_dl_list));
          for(int _i0 = 0; _i0 < _len_dl0; _i0++) {
              int _len_dl__i0__body00 = 1;
          dl[_i0].body0 = (struct vsp1_dl_body *) malloc(_len_dl__i0__body00*sizeof(struct vsp1_dl_body));
          for(int _j0 = 0; _j0 < _len_dl__i0__body00; _j0++) {
            dl[_i0].body0->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct vsp1_dl_body * benchRet = vsp1_dl_list_get_body0(dl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dl0; _aux++) {
          free(dl[_aux].body0);
          }
          free(dl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
