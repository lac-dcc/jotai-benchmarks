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

/* Type definitions */
struct bpf_program {int idx; } ;
struct bpf_object {size_t nr_programs; struct bpf_program* programs; } ;

/* Variables and functions */

__attribute__((used)) static struct bpf_program *
bpf_object__find_prog_by_idx(struct bpf_object *obj, int idx)
{
	struct bpf_program *prog;
	size_t i;

	for (i = 0; i < obj->nr_programs; i++) {
		prog = &obj->programs[i];
		if (prog->idx == idx)
			return prog;
	}
	return NULL;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_obj0 = 1;
          struct bpf_object * obj = (struct bpf_object *) malloc(_len_obj0*sizeof(struct bpf_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              obj[_i0].nr_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_obj__i0__programs0 = 1;
          obj[_i0].programs = (struct bpf_program *) malloc(_len_obj__i0__programs0*sizeof(struct bpf_program));
          for(int _j0 = 0; _j0 < _len_obj__i0__programs0; _j0++) {
              obj[_i0].programs->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct bpf_program * benchRet = bpf_object__find_prog_by_idx(obj,idx);
          printf("%d\n", (*benchRet).idx);
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].programs);
          }
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
