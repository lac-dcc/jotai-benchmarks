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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {long opt_len; long static_len; scalar_t__ matches; scalar_t__ last_lit; TYPE_3__* dyn_ltree; TYPE_2__* bl_tree; TYPE_1__* dyn_dtree; } ;
typedef  TYPE_4__ deflate_state ;
struct TYPE_8__ {int Freq; } ;
struct TYPE_7__ {scalar_t__ Freq; } ;
struct TYPE_6__ {scalar_t__ Freq; } ;

/* Variables and functions */
 int BL_CODES ; 
 int D_CODES ; 
 size_t END_BLOCK ; 
 int L_CODES ; 

__attribute__((used)) static void init_block(
	deflate_state *s
)
{
    int n; /* iterates over tree elements */

    /* Initialize the trees. */
    for (n = 0; n < L_CODES;  n++) s->dyn_ltree[n].Freq = 0;
    for (n = 0; n < D_CODES;  n++) s->dyn_dtree[n].Freq = 0;
    for (n = 0; n < BL_CODES; n++) s->bl_tree[n].Freq = 0;

    s->dyn_ltree[END_BLOCK].Freq = 1;
    s->opt_len = s->static_len = 0L;
    s->last_lit = s->matches = 0;
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
          int _len_s0 = 1;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].opt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].static_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].matches = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].last_lit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dyn_ltree0 = 1;
          s[_i0].dyn_ltree = (struct TYPE_8__ *) malloc(_len_s__i0__dyn_ltree0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_ltree0; _j0++) {
            s[_i0].dyn_ltree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__bl_tree0 = 1;
          s[_i0].bl_tree = (struct TYPE_7__ *) malloc(_len_s__i0__bl_tree0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__bl_tree0; _j0++) {
            s[_i0].bl_tree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__dyn_dtree0 = 1;
          s[_i0].dyn_dtree = (struct TYPE_6__ *) malloc(_len_s__i0__dyn_dtree0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_dtree0; _j0++) {
            s[_i0].dyn_dtree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_block(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_ltree);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bl_tree);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_dtree);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].opt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].static_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].matches = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].last_lit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dyn_ltree0 = 1;
          s[_i0].dyn_ltree = (struct TYPE_8__ *) malloc(_len_s__i0__dyn_ltree0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_ltree0; _j0++) {
            s[_i0].dyn_ltree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__bl_tree0 = 1;
          s[_i0].bl_tree = (struct TYPE_7__ *) malloc(_len_s__i0__bl_tree0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__bl_tree0; _j0++) {
            s[_i0].bl_tree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__dyn_dtree0 = 1;
          s[_i0].dyn_dtree = (struct TYPE_6__ *) malloc(_len_s__i0__dyn_dtree0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_dtree0; _j0++) {
            s[_i0].dyn_dtree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_block(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_ltree);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bl_tree);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_dtree);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].opt_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].static_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].matches = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].last_lit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dyn_ltree0 = 1;
          s[_i0].dyn_ltree = (struct TYPE_8__ *) malloc(_len_s__i0__dyn_ltree0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_ltree0; _j0++) {
            s[_i0].dyn_ltree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__bl_tree0 = 1;
          s[_i0].bl_tree = (struct TYPE_7__ *) malloc(_len_s__i0__bl_tree0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__bl_tree0; _j0++) {
            s[_i0].bl_tree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__dyn_dtree0 = 1;
          s[_i0].dyn_dtree = (struct TYPE_6__ *) malloc(_len_s__i0__dyn_dtree0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__dyn_dtree0; _j0++) {
            s[_i0].dyn_dtree->Freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_block(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_ltree);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bl_tree);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dyn_dtree);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
