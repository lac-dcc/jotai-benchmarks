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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* c_slot_t ;
struct TYPE_4__ {int /*<<< orphan*/  c_packed_ptr; int /*<<< orphan*/  c_size; } ;

/* Variables and functions */

__attribute__((used)) static inline void cslot_copy(c_slot_t cdst, c_slot_t csrc) {
#if CHECKSUM_THE_DATA
		cdst->c_hash_data = csrc->c_hash_data;
#endif
#if CHECKSUM_THE_COMPRESSED_DATA
		cdst->c_hash_compressed_data = csrc->c_hash_compressed_data;
#endif
#if POPCOUNT_THE_COMPRESSED_DATA
		cdst->c_pop_cdata = csrc->c_pop_cdata;
#endif
		cdst->c_size = csrc->c_size;
		cdst->c_packed_ptr = csrc->c_packed_ptr;
#if defined(__arm__) || defined(__arm64__)
		cdst->c_codec = csrc->c_codec;
#endif
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
          int _len_cdst0 = 1;
          struct TYPE_4__ * cdst = (struct TYPE_4__ *) malloc(_len_cdst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cdst0; _i0++) {
            cdst[_i0].c_packed_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        cdst[_i0].c_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_csrc0 = 1;
          struct TYPE_4__ * csrc = (struct TYPE_4__ *) malloc(_len_csrc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_csrc0; _i0++) {
            csrc[_i0].c_packed_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        csrc[_i0].c_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cslot_copy(cdst,csrc);
          free(cdst);
          free(csrc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
