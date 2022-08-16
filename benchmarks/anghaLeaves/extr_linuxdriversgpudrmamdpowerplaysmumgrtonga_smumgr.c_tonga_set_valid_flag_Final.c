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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct tonga_mc_reg_table {int last; int num_entries; int validflag; TYPE_1__* mc_reg_table_entry; } ;
struct TYPE_2__ {scalar_t__* mc_data; } ;

/* Variables and functions */

__attribute__((used)) static int tonga_set_valid_flag(struct tonga_mc_reg_table *table)
{
	uint8_t i, j;

	for (i = 0; i < table->last; i++) {
		for (j = 1; j < table->num_entries; j++) {
			if (table->mc_reg_table_entry[j-1].mc_data[i] !=
				table->mc_reg_table_entry[j].mc_data[i]) {
				table->validflag |= (1<<i);
				break;
			}
		}
	}

	return 0;
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
          int _len_table0 = 1;
          struct tonga_mc_reg_table * table = (struct tonga_mc_reg_table *) malloc(_len_table0*sizeof(struct tonga_mc_reg_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].validflag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__mc_reg_table_entry0 = 1;
          table[_i0].mc_reg_table_entry = (struct TYPE_2__ *) malloc(_len_table__i0__mc_reg_table_entry0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry0; _j0++) {
              int _len_table__i0__mc_reg_table_entry_mc_data0 = 1;
          table[_i0].mc_reg_table_entry->mc_data = (long *) malloc(_len_table__i0__mc_reg_table_entry_mc_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_table__i0__mc_reg_table_entry_mc_data0; _j0++) {
            table[_i0].mc_reg_table_entry->mc_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tonga_set_valid_flag(table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].mc_reg_table_entry);
          }
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
