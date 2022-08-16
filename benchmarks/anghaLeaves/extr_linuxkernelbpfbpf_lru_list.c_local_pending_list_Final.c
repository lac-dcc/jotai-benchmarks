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
struct list_head {int dummy; } ;
struct bpf_lru_locallist {struct list_head* lists; } ;

/* Variables and functions */
 size_t LOCAL_PENDING_LIST_IDX ; 

__attribute__((used)) static struct list_head *local_pending_list(struct bpf_lru_locallist *loc_l)
{
	return &loc_l->lists[LOCAL_PENDING_LIST_IDX];
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
          int _len_loc_l0 = 1;
          struct bpf_lru_locallist * loc_l = (struct bpf_lru_locallist *) malloc(_len_loc_l0*sizeof(struct bpf_lru_locallist));
          for(int _i0 = 0; _i0 < _len_loc_l0; _i0++) {
              int _len_loc_l__i0__lists0 = 1;
          loc_l[_i0].lists = (struct list_head *) malloc(_len_loc_l__i0__lists0*sizeof(struct list_head));
          for(int _j0 = 0; _j0 < _len_loc_l__i0__lists0; _j0++) {
            loc_l[_i0].lists->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct list_head * benchRet = local_pending_list(loc_l);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_loc_l0; _aux++) {
          free(loc_l[_aux].lists);
          }
          free(loc_l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
