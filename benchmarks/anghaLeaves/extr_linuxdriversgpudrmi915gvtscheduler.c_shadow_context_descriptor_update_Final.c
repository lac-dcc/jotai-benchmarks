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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct intel_context {int lrc_desc; TYPE_1__* gem_context; } ;
struct TYPE_2__ {unsigned long long desc_template; } ;

/* Variables and functions */
 int U64_MAX ; 

__attribute__((used)) static void shadow_context_descriptor_update(struct intel_context *ce)
{
	u64 desc = 0;

	desc = ce->lrc_desc;

	/* Update bits 0-11 of the context descriptor which includes flags
	 * like GEN8_CTX_* cached in desc_template
	 */
	desc &= U64_MAX << 12;
	desc |= ce->gem_context->desc_template & ((1ULL << 12) - 1);

	ce->lrc_desc = desc;
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
          int _len_ce0 = 1;
          struct intel_context * ce = (struct intel_context *) malloc(_len_ce0*sizeof(struct intel_context));
          for(int _i0 = 0; _i0 < _len_ce0; _i0++) {
            ce[_i0].lrc_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ce__i0__gem_context0 = 1;
          ce[_i0].gem_context = (struct TYPE_2__ *) malloc(_len_ce__i0__gem_context0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ce__i0__gem_context0; _j0++) {
            ce[_i0].gem_context->desc_template = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          shadow_context_descriptor_update(ce);
          for(int _aux = 0; _aux < _len_ce0; _aux++) {
          free(ce[_aux].gem_context);
          }
          free(ce);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
