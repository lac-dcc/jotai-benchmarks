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
typedef  int u32 ;
struct mu3h_sch_ep_info {int esit; int num_budget_microframes; } ;
struct mu3h_sch_bw_info {int* bus_bw; } ;

/* Variables and functions */
 int XHCI_MTK_MAX_ESIT ; 

__attribute__((used)) static u32 get_max_bw(struct mu3h_sch_bw_info *sch_bw,
	struct mu3h_sch_ep_info *sch_ep, u32 offset)
{
	u32 num_esit;
	u32 max_bw = 0;
	int i;
	int j;

	num_esit = XHCI_MTK_MAX_ESIT / sch_ep->esit;
	for (i = 0; i < num_esit; i++) {
		u32 base = offset + i * sch_ep->esit;

		for (j = 0; j < sch_ep->num_budget_microframes; j++) {
			if (sch_bw->bus_bw[base + j] > max_bw)
				max_bw = sch_bw->bus_bw[base + j];
		}
	}
	return max_bw;
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
          int offset = 100;
        
          int _len_sch_bw0 = 1;
          struct mu3h_sch_bw_info * sch_bw = (struct mu3h_sch_bw_info *) malloc(_len_sch_bw0*sizeof(struct mu3h_sch_bw_info));
          for(int _i0 = 0; _i0 < _len_sch_bw0; _i0++) {
              int _len_sch_bw__i0__bus_bw0 = 1;
          sch_bw[_i0].bus_bw = (int *) malloc(_len_sch_bw__i0__bus_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sch_bw__i0__bus_bw0; _j0++) {
            sch_bw[_i0].bus_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_sch_ep0 = 1;
          struct mu3h_sch_ep_info * sch_ep = (struct mu3h_sch_ep_info *) malloc(_len_sch_ep0*sizeof(struct mu3h_sch_ep_info));
          for(int _i0 = 0; _i0 < _len_sch_ep0; _i0++) {
              sch_ep[_i0].esit = ((-2 * (next_i()%2)) + 1) * next_i();
          sch_ep[_i0].num_budget_microframes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_max_bw(sch_bw,sch_ep,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sch_bw0; _aux++) {
          free(sch_bw[_aux].bus_bw);
          }
          free(sch_bw);
          free(sch_ep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
        
          int _len_sch_bw0 = 65025;
          struct mu3h_sch_bw_info * sch_bw = (struct mu3h_sch_bw_info *) malloc(_len_sch_bw0*sizeof(struct mu3h_sch_bw_info));
          for(int _i0 = 0; _i0 < _len_sch_bw0; _i0++) {
              int _len_sch_bw__i0__bus_bw0 = 1;
          sch_bw[_i0].bus_bw = (int *) malloc(_len_sch_bw__i0__bus_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sch_bw__i0__bus_bw0; _j0++) {
            sch_bw[_i0].bus_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_sch_ep0 = 65025;
          struct mu3h_sch_ep_info * sch_ep = (struct mu3h_sch_ep_info *) malloc(_len_sch_ep0*sizeof(struct mu3h_sch_ep_info));
          for(int _i0 = 0; _i0 < _len_sch_ep0; _i0++) {
              sch_ep[_i0].esit = ((-2 * (next_i()%2)) + 1) * next_i();
          sch_ep[_i0].num_budget_microframes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_max_bw(sch_bw,sch_ep,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sch_bw0; _aux++) {
          free(sch_bw[_aux].bus_bw);
          }
          free(sch_bw);
          free(sch_ep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
        
          int _len_sch_bw0 = 100;
          struct mu3h_sch_bw_info * sch_bw = (struct mu3h_sch_bw_info *) malloc(_len_sch_bw0*sizeof(struct mu3h_sch_bw_info));
          for(int _i0 = 0; _i0 < _len_sch_bw0; _i0++) {
              int _len_sch_bw__i0__bus_bw0 = 1;
          sch_bw[_i0].bus_bw = (int *) malloc(_len_sch_bw__i0__bus_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sch_bw__i0__bus_bw0; _j0++) {
            sch_bw[_i0].bus_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_sch_ep0 = 100;
          struct mu3h_sch_ep_info * sch_ep = (struct mu3h_sch_ep_info *) malloc(_len_sch_ep0*sizeof(struct mu3h_sch_ep_info));
          for(int _i0 = 0; _i0 < _len_sch_ep0; _i0++) {
              sch_ep[_i0].esit = ((-2 * (next_i()%2)) + 1) * next_i();
          sch_ep[_i0].num_budget_microframes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_max_bw(sch_bw,sch_ep,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sch_bw0; _aux++) {
          free(sch_bw[_aux].bus_bw);
          }
          free(sch_bw);
          free(sch_ep);
        
        break;
    }
    // empty
    case 3:
    {
          int offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sch_bw0 = 1;
          struct mu3h_sch_bw_info * sch_bw = (struct mu3h_sch_bw_info *) malloc(_len_sch_bw0*sizeof(struct mu3h_sch_bw_info));
          for(int _i0 = 0; _i0 < _len_sch_bw0; _i0++) {
              int _len_sch_bw__i0__bus_bw0 = 1;
          sch_bw[_i0].bus_bw = (int *) malloc(_len_sch_bw__i0__bus_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sch_bw__i0__bus_bw0; _j0++) {
            sch_bw[_i0].bus_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_sch_ep0 = 1;
          struct mu3h_sch_ep_info * sch_ep = (struct mu3h_sch_ep_info *) malloc(_len_sch_ep0*sizeof(struct mu3h_sch_ep_info));
          for(int _i0 = 0; _i0 < _len_sch_ep0; _i0++) {
              sch_ep[_i0].esit = ((-2 * (next_i()%2)) + 1) * next_i();
          sch_ep[_i0].num_budget_microframes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = get_max_bw(sch_bw,sch_ep,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sch_bw0; _aux++) {
          free(sch_bw[_aux].bus_bw);
          }
          free(sch_bw);
          free(sch_ep);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
