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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_2__ {int start_col; int safe_mas_per_col; int unsafe_mas_per_col; scalar_t__ interval; } ;
struct uwb_rsv_col_info {TYPE_1__ csi; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; struct uwb_rsv_col_info* ci; } ;

/* Variables and functions */
 int UWB_MAS_PER_ZONE ; 
 int UWB_NUM_ZONES ; 
 unsigned char UWB_RSV_MAS_SAFE ; 
 unsigned char UWB_RSV_MAS_UNSAFE ; 

__attribute__((used)) static void uwb_rsv_fill_column_alloc(struct uwb_rsv_alloc_info *ai)
{
	int col, mas, safe_mas, unsafe_mas;
	unsigned char *bm = ai->bm;
	struct uwb_rsv_col_info *ci = ai->ci;
	unsigned char c;

	for (col = ci->csi.start_col; col < UWB_NUM_ZONES; col += ci->csi.interval) {
    
		safe_mas   = ci->csi.safe_mas_per_col;
		unsafe_mas = ci->csi.unsafe_mas_per_col;
    
		for (mas = 0; mas < UWB_MAS_PER_ZONE; mas++ ) {
			if (bm[col * UWB_MAS_PER_ZONE + mas] == 0) {
	
				if (safe_mas > 0) {
					safe_mas--;
					c = UWB_RSV_MAS_SAFE;
				} else if (unsafe_mas > 0) {
					unsafe_mas--;
					c = UWB_RSV_MAS_UNSAFE;
				} else {
					break;
				}
				bm[col * UWB_MAS_PER_ZONE + mas] = c;
			}
		}
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 416987117
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 125096140
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 104246787
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 104246786
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 208493559
          // ------------------------------- 

          int _len_ai0 = 65025;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              int _len_ai__i0__bm0 = 1;
          ai[_i0].bm = (unsigned char *) malloc(_len_ai__i0__bm0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ai__i0__bm0; _j0++) {
            ai[_i0].bm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ai__i0__ci0 = 1;
          ai[_i0].ci = (struct uwb_rsv_col_info *) malloc(_len_ai__i0__ci0*sizeof(struct uwb_rsv_col_info));
          for(int _j0 = 0; _j0 < _len_ai__i0__ci0; _j0++) {
              ai[_i0].ci->csi.start_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.safe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.unsafe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          uwb_rsv_fill_column_alloc(ai);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].bm);
          }
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].ci);
          }
          free(ai);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 416987117
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 125096140
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 104246787
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 104246786
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 208493559
          // ------------------------------- 

          int _len_ai0 = 100;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              int _len_ai__i0__bm0 = 1;
          ai[_i0].bm = (unsigned char *) malloc(_len_ai__i0__bm0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ai__i0__bm0; _j0++) {
            ai[_i0].bm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ai__i0__ci0 = 1;
          ai[_i0].ci = (struct uwb_rsv_col_info *) malloc(_len_ai__i0__ci0*sizeof(struct uwb_rsv_col_info));
          for(int _j0 = 0; _j0 < _len_ai__i0__ci0; _j0++) {
              ai[_i0].ci->csi.start_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.safe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.unsafe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          uwb_rsv_fill_column_alloc(ai);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].bm);
          }
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].ci);
          }
          free(ai);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 416987117
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 125096140
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 104246787
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 104246786
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 208493559
          // ------------------------------- 

          int _len_ai0 = 1;
          struct uwb_rsv_alloc_info * ai = (struct uwb_rsv_alloc_info *) malloc(_len_ai0*sizeof(struct uwb_rsv_alloc_info));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              int _len_ai__i0__bm0 = 1;
          ai[_i0].bm = (unsigned char *) malloc(_len_ai__i0__bm0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_ai__i0__bm0; _j0++) {
            ai[_i0].bm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ai__i0__ci0 = 1;
          ai[_i0].ci = (struct uwb_rsv_col_info *) malloc(_len_ai__i0__ci0*sizeof(struct uwb_rsv_col_info));
          for(int _j0 = 0; _j0 < _len_ai__i0__ci0; _j0++) {
              ai[_i0].ci->csi.start_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.safe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.unsafe_mas_per_col = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].ci->csi.interval = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          uwb_rsv_fill_column_alloc(ai);
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].bm);
          }
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].ci);
          }
          free(ai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
