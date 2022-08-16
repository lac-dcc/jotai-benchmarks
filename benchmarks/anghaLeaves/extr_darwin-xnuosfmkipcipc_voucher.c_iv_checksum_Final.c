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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t iv_index_t ;
typedef  TYPE_1__* ipc_voucher_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_3__ {scalar_t__ iv_table_size; size_t* iv_table; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static inline iv_index_t
iv_checksum(ipc_voucher_t voucher, boolean_t *emptyp)
{
	iv_index_t c = 0;

	boolean_t empty = TRUE;
	if (0 < voucher->iv_table_size) {
		iv_index_t i = voucher->iv_table_size - 1;
	
		do {
			iv_index_t v = voucher->iv_table[i];
			c = c << 3 | c >> (32 - 3);		/* rotate */
			c = ~c;					/* invert */
			if (0 < v) {
				c += v;				/* add in */
				empty = FALSE;
			}
		} while (0 < i--);
	}
	*emptyp = empty;
	return c;
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
          int _len_voucher0 = 1;
          struct TYPE_3__ * voucher = (struct TYPE_3__ *) malloc(_len_voucher0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_voucher0; _i0++) {
            voucher[_i0].iv_table_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voucher__i0__iv_table0 = 1;
          voucher[_i0].iv_table = (unsigned long *) malloc(_len_voucher__i0__iv_table0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_voucher__i0__iv_table0; _j0++) {
            voucher[_i0].iv_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_emptyp0 = 1;
          int * emptyp = (int *) malloc(_len_emptyp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_emptyp0; _i0++) {
            emptyp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = iv_checksum(voucher,emptyp);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_voucher0; _aux++) {
          free(voucher[_aux].iv_table);
          }
          free(voucher);
          free(emptyp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
