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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int nnodes; int /*<<< orphan*/ * nodes; } ;
typedef  TYPE_1__ FONSatlas ;

/* Variables and functions */

__attribute__((used)) static void fons__atlasRemoveNode(FONSatlas* atlas, int idx)
{
	int i;
	if (atlas->nnodes == 0) return;
	for (i = idx; i < atlas->nnodes-1; i++)
		atlas->nodes[i] = atlas->nodes[i+1];
	atlas->nnodes--;
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int idx = 100;
        
          int _len_atlas0 = 1;
          struct TYPE_3__ * atlas = (struct TYPE_3__ *) malloc(_len_atlas0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_atlas0; _i0++) {
              atlas[_i0].nnodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atlas__i0__nodes0 = 1;
          atlas[_i0].nodes = (int *) malloc(_len_atlas__i0__nodes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_atlas__i0__nodes0; _j0++) {
            atlas[_i0].nodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          fons__atlasRemoveNode(atlas,idx);
          for(int _aux = 0; _aux < _len_atlas0; _aux++) {
          free(atlas[_aux].nodes);
          }
          free(atlas);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int idx = 255;
        
          int _len_atlas0 = 65025;
          struct TYPE_3__ * atlas = (struct TYPE_3__ *) malloc(_len_atlas0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_atlas0; _i0++) {
              atlas[_i0].nnodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atlas__i0__nodes0 = 1;
          atlas[_i0].nodes = (int *) malloc(_len_atlas__i0__nodes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_atlas__i0__nodes0; _j0++) {
            atlas[_i0].nodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          fons__atlasRemoveNode(atlas,idx);
          for(int _aux = 0; _aux < _len_atlas0; _aux++) {
          free(atlas[_aux].nodes);
          }
          free(atlas);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int idx = 10;
        
          int _len_atlas0 = 100;
          struct TYPE_3__ * atlas = (struct TYPE_3__ *) malloc(_len_atlas0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_atlas0; _i0++) {
              atlas[_i0].nnodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atlas__i0__nodes0 = 1;
          atlas[_i0].nodes = (int *) malloc(_len_atlas__i0__nodes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_atlas__i0__nodes0; _j0++) {
            atlas[_i0].nodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          fons__atlasRemoveNode(atlas,idx);
          for(int _aux = 0; _aux < _len_atlas0; _aux++) {
          free(atlas[_aux].nodes);
          }
          free(atlas);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_atlas0 = 1;
          struct TYPE_3__ * atlas = (struct TYPE_3__ *) malloc(_len_atlas0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_atlas0; _i0++) {
              atlas[_i0].nnodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_atlas__i0__nodes0 = 1;
          atlas[_i0].nodes = (int *) malloc(_len_atlas__i0__nodes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_atlas__i0__nodes0; _j0++) {
            atlas[_i0].nodes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          fons__atlasRemoveNode(atlas,idx);
          for(int _aux = 0; _aux < _len_atlas0; _aux++) {
          free(atlas[_aux].nodes);
          }
          free(atlas);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
