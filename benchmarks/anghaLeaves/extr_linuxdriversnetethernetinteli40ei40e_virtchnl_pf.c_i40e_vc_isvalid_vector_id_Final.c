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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
struct i40e_vf {struct i40e_pf* pf; } ;
struct TYPE_3__ {scalar_t__ num_msix_vectors_vf; } ;
struct TYPE_4__ {TYPE_1__ func_caps; } ;
struct i40e_pf {TYPE_2__ hw; } ;

/* Variables and functions */

__attribute__((used)) static inline bool i40e_vc_isvalid_vector_id(struct i40e_vf *vf, u8 vector_id)
{
	struct i40e_pf *pf = vf->pf;

	return vector_id < pf->hw.func_caps.num_msix_vectors_vf;
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
          long vector_id = 100;
        
          int _len_vf0 = 1;
          struct i40e_vf * vf = (struct i40e_vf *) malloc(_len_vf0*sizeof(struct i40e_vf));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
              int _len_vf__i0__pf0 = 1;
          vf[_i0].pf = (struct i40e_pf *) malloc(_len_vf__i0__pf0*sizeof(struct i40e_pf));
          for(int _j0 = 0; _j0 < _len_vf__i0__pf0; _j0++) {
              vf[_i0].pf->hw.func_caps.num_msix_vectors_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          }
        
          int benchRet = i40e_vc_isvalid_vector_id(vf,vector_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vf0; _aux++) {
          free(vf[_aux].pf);
          }
          free(vf);
        
        break;
    }
    // big-arr
    case 1:
    {
          long vector_id = 255;
        
          int _len_vf0 = 65025;
          struct i40e_vf * vf = (struct i40e_vf *) malloc(_len_vf0*sizeof(struct i40e_vf));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
              int _len_vf__i0__pf0 = 1;
          vf[_i0].pf = (struct i40e_pf *) malloc(_len_vf__i0__pf0*sizeof(struct i40e_pf));
          for(int _j0 = 0; _j0 < _len_vf__i0__pf0; _j0++) {
              vf[_i0].pf->hw.func_caps.num_msix_vectors_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          }
        
          int benchRet = i40e_vc_isvalid_vector_id(vf,vector_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vf0; _aux++) {
          free(vf[_aux].pf);
          }
          free(vf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long vector_id = 10;
        
          int _len_vf0 = 100;
          struct i40e_vf * vf = (struct i40e_vf *) malloc(_len_vf0*sizeof(struct i40e_vf));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
              int _len_vf__i0__pf0 = 1;
          vf[_i0].pf = (struct i40e_pf *) malloc(_len_vf__i0__pf0*sizeof(struct i40e_pf));
          for(int _j0 = 0; _j0 < _len_vf__i0__pf0; _j0++) {
              vf[_i0].pf->hw.func_caps.num_msix_vectors_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          }
        
          int benchRet = i40e_vc_isvalid_vector_id(vf,vector_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vf0; _aux++) {
          free(vf[_aux].pf);
          }
          free(vf);
        
        break;
    }
    // empty
    case 3:
    {
          long vector_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vf0 = 1;
          struct i40e_vf * vf = (struct i40e_vf *) malloc(_len_vf0*sizeof(struct i40e_vf));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
              int _len_vf__i0__pf0 = 1;
          vf[_i0].pf = (struct i40e_pf *) malloc(_len_vf__i0__pf0*sizeof(struct i40e_pf));
          for(int _j0 = 0; _j0 < _len_vf__i0__pf0; _j0++) {
              vf[_i0].pf->hw.func_caps.num_msix_vectors_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          }
        
          int benchRet = i40e_vc_isvalid_vector_id(vf,vector_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vf0; _aux++) {
          free(vf[_aux].pf);
          }
          free(vf);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
