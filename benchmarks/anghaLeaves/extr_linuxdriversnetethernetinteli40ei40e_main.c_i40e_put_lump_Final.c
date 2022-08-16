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
typedef  int u16 ;
struct i40e_lump_tracking {int num_entries; int* list; int search_hint; } ;

/* Variables and functions */
 int EINVAL ; 
 int I40E_PILE_VALID_BIT ; 

__attribute__((used)) static int i40e_put_lump(struct i40e_lump_tracking *pile, u16 index, u16 id)
{
	int valid_id = (id | I40E_PILE_VALID_BIT);
	int count = 0;
	int i;

	if (!pile || index >= pile->num_entries)
		return -EINVAL;

	for (i = index;
	     i < pile->num_entries && pile->list[i] == valid_id;
	     i++) {
		pile->list[i] = 0;
		count++;
	}

	if (count && index < pile->search_hint)
		pile->search_hint = index;

	return count;
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
          int index = 100;
          int id = 100;
          int _len_pile0 = 1;
          struct i40e_lump_tracking * pile = (struct i40e_lump_tracking *) malloc(_len_pile0*sizeof(struct i40e_lump_tracking));
          for(int _i0 = 0; _i0 < _len_pile0; _i0++) {
            pile[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pile__i0__list0 = 1;
          pile[_i0].list = (int *) malloc(_len_pile__i0__list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pile__i0__list0; _j0++) {
            pile[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pile[_i0].search_hint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i40e_put_lump(pile,index,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pile0; _aux++) {
          free(pile[_aux].list);
          }
          free(pile);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
