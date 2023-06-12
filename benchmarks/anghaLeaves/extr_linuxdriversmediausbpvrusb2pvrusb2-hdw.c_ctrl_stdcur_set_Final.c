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

/* Type definitions */
typedef  int v4l2_std_id ;
struct pvr2_hdw {int std_mask_cur; int std_dirty; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;

/* Variables and functions */

__attribute__((used)) static int ctrl_stdcur_set(struct pvr2_ctrl *cptr,int m,int v)
{
	struct pvr2_hdw *hdw = cptr->hdw;
	v4l2_std_id ns;
	ns = hdw->std_mask_cur;
	ns = (ns & ~m) | (v & m);
	if (ns == hdw->std_mask_cur) return 0;
	hdw->std_mask_cur = ns;
	hdw->std_dirty = !0;
	return 0;
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int m = 100;
        
          int v = 100;
        
          int _len_cptr0 = 1;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__hdw0 = 1;
          cptr[_i0].hdw = (struct pvr2_hdw *) malloc(_len_cptr__i0__hdw0*sizeof(struct pvr2_hdw));
          for(int _j0 = 0; _j0 < _len_cptr__i0__hdw0; _j0++) {
              cptr[_i0].hdw->std_mask_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          cptr[_i0].hdw->std_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ctrl_stdcur_set(cptr,m,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].hdw);
          }
          free(cptr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int m = 255;
        
          int v = 255;
        
          int _len_cptr0 = 65025;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__hdw0 = 1;
          cptr[_i0].hdw = (struct pvr2_hdw *) malloc(_len_cptr__i0__hdw0*sizeof(struct pvr2_hdw));
          for(int _j0 = 0; _j0 < _len_cptr__i0__hdw0; _j0++) {
              cptr[_i0].hdw->std_mask_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          cptr[_i0].hdw->std_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ctrl_stdcur_set(cptr,m,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].hdw);
          }
          free(cptr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int m = 10;
        
          int v = 10;
        
          int _len_cptr0 = 100;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__hdw0 = 1;
          cptr[_i0].hdw = (struct pvr2_hdw *) malloc(_len_cptr__i0__hdw0*sizeof(struct pvr2_hdw));
          for(int _j0 = 0; _j0 < _len_cptr__i0__hdw0; _j0++) {
              cptr[_i0].hdw->std_mask_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          cptr[_i0].hdw->std_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ctrl_stdcur_set(cptr,m,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].hdw);
          }
          free(cptr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int m = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int v = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cptr0 = 1;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__hdw0 = 1;
          cptr[_i0].hdw = (struct pvr2_hdw *) malloc(_len_cptr__i0__hdw0*sizeof(struct pvr2_hdw));
          for(int _j0 = 0; _j0 < _len_cptr__i0__hdw0; _j0++) {
              cptr[_i0].hdw->std_mask_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          cptr[_i0].hdw->std_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ctrl_stdcur_set(cptr,m,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cptr0; _aux++) {
          free(cptr[_aux].hdw);
          }
          free(cptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
