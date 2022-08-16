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
struct hists {int /*<<< orphan*/ * thread_filter; } ;
struct hist_entry {int filtered; int /*<<< orphan*/ * thread; } ;

/* Variables and functions */
 int HIST_FILTER__THREAD ; 

__attribute__((used)) static bool hists__filter_entry_by_thread(struct hists *hists,
					  struct hist_entry *he)
{
	if (hists->thread_filter != NULL &&
	    he->thread != hists->thread_filter) {
		he->filtered |= (1 << HIST_FILTER__THREAD);
		return true;
	}

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
          int _len_hists0 = 1;
          struct hists * hists = (struct hists *) malloc(_len_hists0*sizeof(struct hists));
          for(int _i0 = 0; _i0 < _len_hists0; _i0++) {
              int _len_hists__i0__thread_filter0 = 1;
          hists[_i0].thread_filter = (int *) malloc(_len_hists__i0__thread_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hists__i0__thread_filter0; _j0++) {
            hists[_i0].thread_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_he0 = 1;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].filtered = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_he__i0__thread0 = 1;
          he[_i0].thread = (int *) malloc(_len_he__i0__thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_he__i0__thread0; _j0++) {
            he[_i0].thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hists__filter_entry_by_thread(hists,he);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hists0; _aux++) {
          free(hists[_aux].thread_filter);
          }
          free(hists);
          for(int _aux = 0; _aux < _len_he0; _aux++) {
          free(he[_aux].thread);
          }
          free(he);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
