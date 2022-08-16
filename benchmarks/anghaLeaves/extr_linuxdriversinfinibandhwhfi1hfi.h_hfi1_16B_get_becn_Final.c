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
typedef  int /*<<< orphan*/  u8 ;
struct hfi1_16b_header {int* lrh; } ;

/* Variables and functions */
 int OPA_16B_BECN_MASK ; 
 int OPA_16B_BECN_SHIFT ; 

__attribute__((used)) static inline u8 hfi1_16B_get_becn(struct hfi1_16b_header *hdr)
{
	return (u8)((hdr->lrh[0] & OPA_16B_BECN_MASK) >> OPA_16B_BECN_SHIFT);
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
          int _len_hdr0 = 1;
          struct hfi1_16b_header * hdr = (struct hfi1_16b_header *) malloc(_len_hdr0*sizeof(struct hfi1_16b_header));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
              int _len_hdr__i0__lrh0 = 1;
          hdr[_i0].lrh = (int *) malloc(_len_hdr__i0__lrh0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hdr__i0__lrh0; _j0++) {
            hdr[_i0].lrh[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hfi1_16B_get_becn(hdr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdr0; _aux++) {
          free(hdr[_aux].lrh);
          }
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
