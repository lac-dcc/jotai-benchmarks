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

    default:
        usage();
        break;

    }

    return 0;
}
