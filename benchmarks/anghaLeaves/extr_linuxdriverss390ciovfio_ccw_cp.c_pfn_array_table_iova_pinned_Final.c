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
struct pfn_array {int pa_nr; unsigned long* pa_iova_pfn; } ;

/* Variables and functions */
 unsigned long PAGE_SHIFT ; 

__attribute__((used)) static bool pfn_array_table_iova_pinned(struct pfn_array_table *pat,
					unsigned long iova)
{
	struct pfn_array *pa = pat->pat_pa;
	unsigned long iova_pfn = iova >> PAGE_SHIFT;
	int i, j;

	for (i = 0; i < pat->pat_nr; i++, pa++)
		for (j = 0; j < pa->pa_nr; j++)
			if (pa->pa_iova_pfn[j] == iova_pfn)
				return true;

	return false;
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
          unsigned long iova = 100;
          int _len_pat0 = 1;
          struct pfn_array_table * pat = (struct pfn_array_table *) malloc(_len_pat0*sizeof(struct pfn_array_table));
          for(int _i0 = 0; _i0 < _len_pat0; _i0++) {
            pat[_i0].pat_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pat__i0__pat_pa0 = 1;
          pat[_i0].pat_pa = (struct pfn_array *) malloc(_len_pat__i0__pat_pa0*sizeof(struct pfn_array));
          for(int _j0 = 0; _j0 < _len_pat__i0__pat_pa0; _j0++) {
            pat[_i0].pat_pa->pa_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pat__i0__pat_pa_pa_iova_pfn0 = 1;
          pat[_i0].pat_pa->pa_iova_pfn = (unsigned long *) malloc(_len_pat__i0__pat_pa_pa_iova_pfn0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pat__i0__pat_pa_pa_iova_pfn0; _j0++) {
            pat[_i0].pat_pa->pa_iova_pfn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pfn_array_table_iova_pinned(pat,iova);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pat0; _aux++) {
          free(pat[_aux].pat_pa);
          }
          free(pat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
