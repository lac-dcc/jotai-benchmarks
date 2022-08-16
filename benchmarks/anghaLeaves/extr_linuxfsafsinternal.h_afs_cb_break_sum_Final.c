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
struct afs_vnode {unsigned int cb_break; TYPE_2__* volume; } ;
struct afs_cb_interest {TYPE_1__* server; } ;
struct TYPE_4__ {unsigned int cb_v_break; } ;
struct TYPE_3__ {unsigned int cb_s_break; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int afs_cb_break_sum(struct afs_vnode *vnode,
					    struct afs_cb_interest *cbi)
{
	return vnode->cb_break + cbi->server->cb_s_break + vnode->volume->cb_v_break;
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
          int _len_vnode0 = 1;
          struct afs_vnode * vnode = (struct afs_vnode *) malloc(_len_vnode0*sizeof(struct afs_vnode));
          for(int _i0 = 0; _i0 < _len_vnode0; _i0++) {
            vnode[_i0].cb_break = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vnode__i0__volume0 = 1;
          vnode[_i0].volume = (struct TYPE_4__ *) malloc(_len_vnode__i0__volume0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vnode__i0__volume0; _j0++) {
            vnode[_i0].volume->cb_v_break = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cbi0 = 1;
          struct afs_cb_interest * cbi = (struct afs_cb_interest *) malloc(_len_cbi0*sizeof(struct afs_cb_interest));
          for(int _i0 = 0; _i0 < _len_cbi0; _i0++) {
              int _len_cbi__i0__server0 = 1;
          cbi[_i0].server = (struct TYPE_3__ *) malloc(_len_cbi__i0__server0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_cbi__i0__server0; _j0++) {
            cbi[_i0].server->cb_s_break = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = afs_cb_break_sum(vnode,cbi);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_vnode0; _aux++) {
          free(vnode[_aux].volume);
          }
          free(vnode);
          for(int _aux = 0; _aux < _len_cbi0; _aux++) {
          free(cbi[_aux].server);
          }
          free(cbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
