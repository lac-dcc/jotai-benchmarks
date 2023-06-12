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
       0            empty\n\
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
typedef  size_t u32 ;
struct cnic_local {size_t max_cid_space; TYPE_1__* ctx_tbl; } ;
struct TYPE_2__ {size_t cid; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int cnic_get_l5_cid(struct cnic_local *cp, u32 cid, u32 *l5_cid)
{
	u32 i;

	if (!cp->ctx_tbl)
		return -EINVAL;

	for (i = 0; i < cp->max_cid_space; i++) {
		if (cp->ctx_tbl[i].cid == cid) {
			*l5_cid = i;
			return 0;
		}
	}
	return -EINVAL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          unsigned long cid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cp0 = 1;
          struct cnic_local * cp = (struct cnic_local *) malloc(_len_cp0*sizeof(struct cnic_local));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              cp[_i0].max_cid_space = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cp__i0__ctx_tbl0 = 1;
          cp[_i0].ctx_tbl = (struct TYPE_2__ *) malloc(_len_cp__i0__ctx_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cp__i0__ctx_tbl0; _j0++) {
              cp[_i0].ctx_tbl->cid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_l5_cid0 = 1;
          unsigned long * l5_cid = (unsigned long *) malloc(_len_l5_cid0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_l5_cid0; _i0++) {
            l5_cid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cnic_get_l5_cid(cp,cid,l5_cid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].ctx_tbl);
          }
          free(cp);
          free(l5_cid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
