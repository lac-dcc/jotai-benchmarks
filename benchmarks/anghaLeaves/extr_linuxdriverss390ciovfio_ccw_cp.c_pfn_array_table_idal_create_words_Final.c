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
struct pfn_array_table {int pat_nr; struct pfn_array* pat_pa; } ;
struct pfn_array {int pa_nr; unsigned long* pa_pfn; int pa_iova; } ;

/* Variables and functions */
 unsigned long PAGE_SHIFT ; 
 int PAGE_SIZE ; 

__attribute__((used)) static inline void pfn_array_table_idal_create_words(
	struct pfn_array_table *pat,
	unsigned long *idaws)
{
	struct pfn_array *pa;
	int i, j, k;

	/*
	 * Idal words (execept the first one) rely on the memory being 4k
	 * aligned. If a user virtual address is 4K aligned, then it's
	 * corresponding kernel physical address will also be 4K aligned. Thus
	 * there will be no problem here to simply use the phys to create an
	 * idaw.
	 */
	k = 0;
	for (i = 0; i < pat->pat_nr; i++) {
		pa = pat->pat_pa + i;
		for (j = 0; j < pa->pa_nr; j++) {
			idaws[k] = pa->pa_pfn[j] << PAGE_SHIFT;
			if (k == 0)
				idaws[k] += pa->pa_iova & (PAGE_SIZE - 1);
			k++;
		}
	}
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
          int _len_pat0 = 1;
          struct pfn_array_table * pat = (struct pfn_array_table *) malloc(_len_pat0*sizeof(struct pfn_array_table));
          for(int _i0 = 0; _i0 < _len_pat0; _i0++) {
            pat[_i0].pat_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pat__i0__pat_pa0 = 1;
          pat[_i0].pat_pa = (struct pfn_array *) malloc(_len_pat__i0__pat_pa0*sizeof(struct pfn_array));
          for(int _j0 = 0; _j0 < _len_pat__i0__pat_pa0; _j0++) {
            pat[_i0].pat_pa->pa_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pat__i0__pat_pa_pa_pfn0 = 1;
          pat[_i0].pat_pa->pa_pfn = (unsigned long *) malloc(_len_pat__i0__pat_pa_pa_pfn0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pat__i0__pat_pa_pa_pfn0; _j0++) {
            pat[_i0].pat_pa->pa_pfn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pat[_i0].pat_pa->pa_iova = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_idaws0 = 1;
          unsigned long * idaws = (unsigned long *) malloc(_len_idaws0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_idaws0; _i0++) {
            idaws[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pfn_array_table_idal_create_words(pat,idaws);
          for(int _aux = 0; _aux < _len_pat0; _aux++) {
          free(pat[_aux].pat_pa);
          }
          free(pat);
          free(idaws);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
