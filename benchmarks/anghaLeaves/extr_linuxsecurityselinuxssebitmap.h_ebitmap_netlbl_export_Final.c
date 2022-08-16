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
struct netlbl_lsm_catmap {int dummy; } ;
struct ebitmap {int dummy; } ;

/* Variables and functions */
 int ENOMEM ; 

__attribute__((used)) static inline int ebitmap_netlbl_export(struct ebitmap *ebmap,
					struct netlbl_lsm_catmap **catmap)
{
	return -ENOMEM;
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
          int _len_ebmap0 = 1;
          struct ebitmap * ebmap = (struct ebitmap *) malloc(_len_ebmap0*sizeof(struct ebitmap));
          for(int _i0 = 0; _i0 < _len_ebmap0; _i0++) {
            ebmap[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catmap0 = 1;
          struct netlbl_lsm_catmap ** catmap = (struct netlbl_lsm_catmap **) malloc(_len_catmap0*sizeof(struct netlbl_lsm_catmap *));
          for(int _i0 = 0; _i0 < _len_catmap0; _i0++) {
            int _len_catmap1 = 1;
            catmap[_i0] = (struct netlbl_lsm_catmap *) malloc(_len_catmap1*sizeof(struct netlbl_lsm_catmap));
            for(int _i1 = 0; _i1 < _len_catmap1; _i1++) {
              catmap[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = ebitmap_netlbl_export(ebmap,catmap);
          printf("%d\n", benchRet); 
          free(ebmap);
          for(int i1 = 0; i1 < _len_catmap0; i1++) {
            int _len_catmap1 = 1;
              free(catmap[i1]);
          }
          free(catmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
