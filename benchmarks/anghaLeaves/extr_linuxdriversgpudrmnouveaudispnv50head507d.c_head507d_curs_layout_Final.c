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
struct TYPE_3__ {int w; } ;
struct nv50_wndw_atom {TYPE_1__ image; } ;
struct TYPE_4__ {int layout; } ;
struct nv50_head_atom {TYPE_2__ curs; } ;
struct nv50_head {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

int
head507d_curs_layout(struct nv50_head *head, struct nv50_wndw_atom *asyw,
		     struct nv50_head_atom *asyh)
{
	switch (asyw->image.w) {
	case 32: asyh->curs.layout = 0; break;
	case 64: asyh->curs.layout = 1; break;
	default:
		return -EINVAL;
	}
	return 0;
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
          int _len_head0 = 1;
          struct nv50_head * head = (struct nv50_head *) malloc(_len_head0*sizeof(struct nv50_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyw0 = 1;
          struct nv50_wndw_atom * asyw = (struct nv50_wndw_atom *) malloc(_len_asyw0*sizeof(struct nv50_wndw_atom));
          for(int _i0 = 0; _i0 < _len_asyw0; _i0++) {
            asyw[_i0].image.w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 1;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].curs.layout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = head507d_curs_layout(head,asyw,asyh);
          printf("%d\n", benchRet); 
          free(head);
          free(asyw);
          free(asyh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
