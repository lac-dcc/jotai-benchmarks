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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct intel_guc_ct_channel {int /*<<< orphan*/ * vma; } ;

/* Variables and functions */

__attribute__((used)) static bool ctch_is_open(struct intel_guc_ct_channel *ctch)
{
	return ctch->vma != NULL;
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
          int _len_ctch0 = 1;
          struct intel_guc_ct_channel * ctch = (struct intel_guc_ct_channel *) malloc(_len_ctch0*sizeof(struct intel_guc_ct_channel));
          for(int _i0 = 0; _i0 < _len_ctch0; _i0++) {
              int _len_ctch__i0__vma0 = 1;
          ctch[_i0].vma = (int *) malloc(_len_ctch__i0__vma0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctch__i0__vma0; _j0++) {
            ctch[_i0].vma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ctch_is_open(ctch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctch0; _aux++) {
          free(ctch[_aux].vma);
          }
          free(ctch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctch0 = 65025;
          struct intel_guc_ct_channel * ctch = (struct intel_guc_ct_channel *) malloc(_len_ctch0*sizeof(struct intel_guc_ct_channel));
          for(int _i0 = 0; _i0 < _len_ctch0; _i0++) {
              int _len_ctch__i0__vma0 = 1;
          ctch[_i0].vma = (int *) malloc(_len_ctch__i0__vma0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctch__i0__vma0; _j0++) {
            ctch[_i0].vma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ctch_is_open(ctch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctch0; _aux++) {
          free(ctch[_aux].vma);
          }
          free(ctch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctch0 = 100;
          struct intel_guc_ct_channel * ctch = (struct intel_guc_ct_channel *) malloc(_len_ctch0*sizeof(struct intel_guc_ct_channel));
          for(int _i0 = 0; _i0 < _len_ctch0; _i0++) {
              int _len_ctch__i0__vma0 = 1;
          ctch[_i0].vma = (int *) malloc(_len_ctch__i0__vma0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctch__i0__vma0; _j0++) {
            ctch[_i0].vma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ctch_is_open(ctch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctch0; _aux++) {
          free(ctch[_aux].vma);
          }
          free(ctch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}