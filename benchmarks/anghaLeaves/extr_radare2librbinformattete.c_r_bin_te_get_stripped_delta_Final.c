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
typedef  long long ut64 ;
struct r_bin_te_obj_t {TYPE_1__* header; } ;
struct TYPE_2__ {long long StrippedSize; } ;
typedef  int /*<<< orphan*/  TE_image_file_header ;

/* Variables and functions */

ut64 r_bin_te_get_stripped_delta(struct r_bin_te_obj_t *bin) {
	if (bin && bin->header) {
		return bin->header->StrippedSize - sizeof (TE_image_file_header);
	}
	return 0LL;
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
          int _len_bin0 = 1;
          struct r_bin_te_obj_t * bin = (struct r_bin_te_obj_t *) malloc(_len_bin0*sizeof(struct r_bin_te_obj_t));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              int _len_bin__i0__header0 = 1;
          bin[_i0].header = (struct TYPE_2__ *) malloc(_len_bin__i0__header0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bin__i0__header0; _j0++) {
            bin[_i0].header->StrippedSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = r_bin_te_get_stripped_delta(bin);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].header);
          }
          free(bin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
