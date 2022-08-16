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
struct pvr2_hdw {int freqProgSlot; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;

/* Variables and functions */
 int FREQTABLE_SIZE ; 

__attribute__((used)) static int ctrl_channelprog_set(struct pvr2_ctrl *cptr,int m,int v)
{
	struct pvr2_hdw *hdw = cptr->hdw;
	if ((v >= 0) && (v <= FREQTABLE_SIZE)) {
		hdw->freqProgSlot = v;
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
          int m = 100;
          int v = 100;
          int _len_cptr0 = 1;
          struct pvr2_ctrl * cptr = (struct pvr2_ctrl *) malloc(_len_cptr0*sizeof(struct pvr2_ctrl));
          for(int _i0 = 0; _i0 < _len_cptr0; _i0++) {
              int _len_cptr__i0__hdw0 = 1;
          cptr[_i0].hdw = (struct pvr2_hdw *) malloc(_len_cptr__i0__hdw0*sizeof(struct pvr2_hdw));
          for(int _j0 = 0; _j0 < _len_cptr__i0__hdw0; _j0++) {
            cptr[_i0].hdw->freqProgSlot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ctrl_channelprog_set(cptr,m,v);
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
