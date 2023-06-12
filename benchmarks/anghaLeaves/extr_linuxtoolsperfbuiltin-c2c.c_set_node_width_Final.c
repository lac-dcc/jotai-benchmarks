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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct c2c_hist_entry {int /*<<< orphan*/ * hists; } ;
struct c2c_dimension {int width; } ;
struct TYPE_2__ {int /*<<< orphan*/  hists; } ;

/* Variables and functions */
 TYPE_1__ c2c ; 
 struct c2c_dimension dim_dcacheline_node ; 
 struct c2c_dimension dim_offset_node ; 

__attribute__((used)) static void set_node_width(struct c2c_hist_entry *c2c_he, int len)
{
	struct c2c_dimension *dim;

	dim = &c2c.hists == c2c_he->hists ?
	      &dim_dcacheline_node : &dim_offset_node;

	if (len > dim->width)
		dim->width = len;
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = 100;
        
          int _len_c2c_he0 = 1;
          struct c2c_hist_entry * c2c_he = (struct c2c_hist_entry *) malloc(_len_c2c_he0*sizeof(struct c2c_hist_entry));
          for(int _i0 = 0; _i0 < _len_c2c_he0; _i0++) {
              int _len_c2c_he__i0__hists0 = 1;
          c2c_he[_i0].hists = (int *) malloc(_len_c2c_he__i0__hists0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c2c_he__i0__hists0; _j0++) {
            c2c_he[_i0].hists[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          set_node_width(c2c_he,len);
          for(int _aux = 0; _aux < _len_c2c_he0; _aux++) {
          free(c2c_he[_aux].hists);
          }
          free(c2c_he);
        
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = 255;
        
          int _len_c2c_he0 = 65025;
          struct c2c_hist_entry * c2c_he = (struct c2c_hist_entry *) malloc(_len_c2c_he0*sizeof(struct c2c_hist_entry));
          for(int _i0 = 0; _i0 < _len_c2c_he0; _i0++) {
              int _len_c2c_he__i0__hists0 = 1;
          c2c_he[_i0].hists = (int *) malloc(_len_c2c_he__i0__hists0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c2c_he__i0__hists0; _j0++) {
            c2c_he[_i0].hists[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          set_node_width(c2c_he,len);
          for(int _aux = 0; _aux < _len_c2c_he0; _aux++) {
          free(c2c_he[_aux].hists);
          }
          free(c2c_he);
        
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int len = 10;
        
          int _len_c2c_he0 = 100;
          struct c2c_hist_entry * c2c_he = (struct c2c_hist_entry *) malloc(_len_c2c_he0*sizeof(struct c2c_hist_entry));
          for(int _i0 = 0; _i0 < _len_c2c_he0; _i0++) {
              int _len_c2c_he__i0__hists0 = 1;
          c2c_he[_i0].hists = (int *) malloc(_len_c2c_he__i0__hists0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c2c_he__i0__hists0; _j0++) {
            c2c_he[_i0].hists[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          set_node_width(c2c_he,len);
          for(int _aux = 0; _aux < _len_c2c_he0; _aux++) {
          free(c2c_he[_aux].hists);
          }
          free(c2c_he);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_c2c_he0 = 1;
          struct c2c_hist_entry * c2c_he = (struct c2c_hist_entry *) malloc(_len_c2c_he0*sizeof(struct c2c_hist_entry));
          for(int _i0 = 0; _i0 < _len_c2c_he0; _i0++) {
              int _len_c2c_he__i0__hists0 = 1;
          c2c_he[_i0].hists = (int *) malloc(_len_c2c_he__i0__hists0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c2c_he__i0__hists0; _j0++) {
            c2c_he[_i0].hists[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          set_node_width(c2c_he,len);
          for(int _aux = 0; _aux < _len_c2c_he0; _aux++) {
          free(c2c_he[_aux].hists);
          }
          free(c2c_he);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
