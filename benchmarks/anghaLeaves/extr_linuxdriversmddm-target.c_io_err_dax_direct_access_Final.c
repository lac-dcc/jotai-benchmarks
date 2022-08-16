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
struct dm_target {int dummy; } ;
typedef  int /*<<< orphan*/  pgoff_t ;
typedef  int /*<<< orphan*/  pfn_t ;

/* Variables and functions */
 long EIO ; 

__attribute__((used)) static long io_err_dax_direct_access(struct dm_target *ti, pgoff_t pgoff,
		long nr_pages, void **kaddr, pfn_t *pfn)
{
	return -EIO;
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
          int pgoff = 100;
          long nr_pages = 100;
          int _len_ti0 = 1;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
            ti[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kaddr0 = 1;
          void ** kaddr = (void **) malloc(_len_kaddr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_kaddr0; _i0++) {
          }
          int _len_pfn0 = 1;
          int * pfn = (int *) malloc(_len_pfn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pfn0; _i0++) {
            pfn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = io_err_dax_direct_access(ti,pgoff,nr_pages,kaddr,pfn);
          printf("%ld\n", benchRet); 
          free(ti);
          for(int i1 = 0; i1 < _len_kaddr0; i1++) {
            int _len_kaddr1 = 1;
              }
          free(kaddr);
          free(pfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
