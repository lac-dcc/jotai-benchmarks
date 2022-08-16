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
       1            big-arr-10x\n\
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
typedef  scalar_t__ vm_size_t ;
typedef  scalar_t__ vm_map_address_t ;
typedef  scalar_t__ pmap_paddr_t ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ pa; scalar_t__ va; } ;

/* Variables and functions */
 scalar_t__ PAGE_MASK ; 
 scalar_t__ PAGE_SIZE ; 
 size_t PTOV_TABLE_SIZE ; 
 scalar_t__ gPhysBase ; 
 scalar_t__ gVirtBase ; 
 TYPE_1__* ptov_table ; 

vm_map_address_t
phystokv_range(pmap_paddr_t pa, vm_size_t *max_len)
{
	vm_size_t len;
	for (size_t i = 0; (i < PTOV_TABLE_SIZE) && (ptov_table[i].len != 0); i++) {
		if ((pa >= ptov_table[i].pa) && (pa < (ptov_table[i].pa + ptov_table[i].len))) {
			len = ptov_table[i].len - (pa - ptov_table[i].pa);
			if (*max_len > len)
				*max_len = len;
			return (pa - ptov_table[i].pa + ptov_table[i].va);
		}
	}
	len = PAGE_SIZE - (pa & PAGE_MASK);
	if (*max_len > len)
		*max_len = len;
	return (pa - gPhysBase + gVirtBase);
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
          long pa = 100;
          int _len_max_len0 = 1;
          long * max_len = (long *) malloc(_len_max_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_max_len0; _i0++) {
            max_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = phystokv_range(pa,max_len);
          printf("%ld\n", benchRet); 
          free(max_len);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long pa = 10;
          int _len_max_len0 = 100;
          long * max_len = (long *) malloc(_len_max_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_max_len0; _i0++) {
            max_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = phystokv_range(pa,max_len);
          printf("%ld\n", benchRet); 
          free(max_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
