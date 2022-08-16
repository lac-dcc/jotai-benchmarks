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
       1            big-arr-10x\n\
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
struct i40e_aq_desc {scalar_t__ opcode; } ;

/* Variables and functions */
 scalar_t__ i40e_aqc_opc_nvm_erase ; 
 scalar_t__ i40e_aqc_opc_nvm_update ; 

__attribute__((used)) static inline bool i40e_is_nvm_update_op(struct i40e_aq_desc *desc)
{
	return (desc->opcode == i40e_aqc_opc_nvm_erase) ||
	       (desc->opcode == i40e_aqc_opc_nvm_update);
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
          int _len_desc0 = 1;
          struct i40e_aq_desc * desc = (struct i40e_aq_desc *) malloc(_len_desc0*sizeof(struct i40e_aq_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i40e_is_nvm_update_op(desc);
          printf("%d\n", benchRet); 
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_desc0 = 100;
          struct i40e_aq_desc * desc = (struct i40e_aq_desc *) malloc(_len_desc0*sizeof(struct i40e_aq_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i40e_is_nvm_update_op(desc);
          printf("%d\n", benchRet); 
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
