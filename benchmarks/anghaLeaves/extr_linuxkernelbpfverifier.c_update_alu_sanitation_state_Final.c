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
typedef  scalar_t__ u32 ;
struct bpf_insn_aux_data {scalar_t__ alu_state; scalar_t__ alu_limit; } ;

/* Variables and functions */
 int EACCES ; 

__attribute__((used)) static int update_alu_sanitation_state(struct bpf_insn_aux_data *aux,
				       u32 alu_state, u32 alu_limit)
{
	/* If we arrived here from different branches with different
	 * state or limits to sanitize, then this won't work.
	 */
	if (aux->alu_state &&
	    (aux->alu_state != alu_state ||
	     aux->alu_limit != alu_limit))
		return -EACCES;

	/* Corresponding fixup done in fixup_bpf_calls(). */
	aux->alu_state = alu_state;
	aux->alu_limit = alu_limit;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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

          long alu_state = 100;
        
          long alu_limit = 100;
        
          int _len_aux0 = 1;
          struct bpf_insn_aux_data * aux = (struct bpf_insn_aux_data *) malloc(_len_aux0*sizeof(struct bpf_insn_aux_data));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              aux[_i0].alu_state = ((-2 * (next_i()%2)) + 1) * next_i();
          aux[_i0].alu_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = update_alu_sanitation_state(aux,alu_state,alu_limit);
          printf("%d\n", benchRet); 
          free(aux);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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

          long alu_state = 255;
        
          long alu_limit = 255;
        
          int _len_aux0 = 65025;
          struct bpf_insn_aux_data * aux = (struct bpf_insn_aux_data *) malloc(_len_aux0*sizeof(struct bpf_insn_aux_data));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              aux[_i0].alu_state = ((-2 * (next_i()%2)) + 1) * next_i();
          aux[_i0].alu_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = update_alu_sanitation_state(aux,alu_state,alu_limit);
          printf("%d\n", benchRet); 
          free(aux);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
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

          long alu_state = 10;
        
          long alu_limit = 10;
        
          int _len_aux0 = 100;
          struct bpf_insn_aux_data * aux = (struct bpf_insn_aux_data *) malloc(_len_aux0*sizeof(struct bpf_insn_aux_data));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              aux[_i0].alu_state = ((-2 * (next_i()%2)) + 1) * next_i();
          aux[_i0].alu_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = update_alu_sanitation_state(aux,alu_state,alu_limit);
          printf("%d\n", benchRet); 
          free(aux);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          long alu_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long alu_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_aux0 = 1;
          struct bpf_insn_aux_data * aux = (struct bpf_insn_aux_data *) malloc(_len_aux0*sizeof(struct bpf_insn_aux_data));
          for(int _i0 = 0; _i0 < _len_aux0; _i0++) {
              aux[_i0].alu_state = ((-2 * (next_i()%2)) + 1) * next_i();
          aux[_i0].alu_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = update_alu_sanitation_state(aux,alu_state,alu_limit);
          printf("%d\n", benchRet); 
          free(aux);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
