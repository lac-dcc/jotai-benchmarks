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

/* Type definitions */

/* Variables and functions */
 int CONT_PMDS ; 
#define  CONT_PMD_SIZE 130 
 int CONT_PTES ; 
#define  CONT_PTE_SIZE 129 
 size_t PAGE_SIZE ; 
#define  PMD_SIZE 128 

__attribute__((used)) static inline int num_contig_ptes(unsigned long size, size_t *pgsize)
{
	int contig_ptes = 0;

	*pgsize = size;

	switch (size) {
#ifdef CONFIG_ARM64_4K_PAGES
	case PUD_SIZE:
#endif
	case PMD_SIZE:
		contig_ptes = 1;
		break;
	case CONT_PMD_SIZE:
		*pgsize = PMD_SIZE;
		contig_ptes = CONT_PMDS;
		break;
	case CONT_PTE_SIZE:
		*pgsize = PAGE_SIZE;
		contig_ptes = CONT_PTES;
		break;
	}

	return contig_ptes;
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
          unsigned long size = 100;
          int _len_pgsize0 = 1;
          unsigned long * pgsize = (unsigned long *) malloc(_len_pgsize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pgsize0; _i0++) {
            pgsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = num_contig_ptes(size,pgsize);
          printf("%d\n", benchRet); 
          free(pgsize);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long size = 10;
          int _len_pgsize0 = 100;
          unsigned long * pgsize = (unsigned long *) malloc(_len_pgsize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pgsize0; _i0++) {
            pgsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = num_contig_ptes(size,pgsize);
          printf("%d\n", benchRet); 
          free(pgsize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
