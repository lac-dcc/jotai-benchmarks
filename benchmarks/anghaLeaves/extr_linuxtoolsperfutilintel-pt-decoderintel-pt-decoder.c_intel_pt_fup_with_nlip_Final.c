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
typedef  scalar_t__ uint64_t ;
struct intel_pt_insn {scalar_t__ branch; scalar_t__ length; } ;
struct intel_pt_decoder {int flags; scalar_t__ ip; } ;

/* Variables and functions */
 scalar_t__ INTEL_PT_BR_INDIRECT ; 
 int INTEL_PT_FUP_WITH_NLIP ; 

__attribute__((used)) static inline bool intel_pt_fup_with_nlip(struct intel_pt_decoder *decoder,
					  struct intel_pt_insn *intel_pt_insn,
					  uint64_t ip, int err)
{
	return decoder->flags & INTEL_PT_FUP_WITH_NLIP && !err &&
	       intel_pt_insn->branch == INTEL_PT_BR_INDIRECT &&
	       ip == decoder->ip + intel_pt_insn->length;
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
          long ip = 100;
          int err = 100;
          int _len_decoder0 = 1;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intel_pt_insn0 = 1;
          struct intel_pt_insn * intel_pt_insn = (struct intel_pt_insn *) malloc(_len_intel_pt_insn0*sizeof(struct intel_pt_insn));
          for(int _i0 = 0; _i0 < _len_intel_pt_insn0; _i0++) {
            intel_pt_insn[_i0].branch = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_pt_insn[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_fup_with_nlip(decoder,intel_pt_insn,ip,err);
          printf("%d\n", benchRet); 
          free(decoder);
          free(intel_pt_insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
