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
struct mlxsw_sp_neigh_entry {unsigned char* ha; } ;

/* Variables and functions */

unsigned char *
mlxsw_sp_neigh_entry_ha(struct mlxsw_sp_neigh_entry *neigh_entry)
{
	return neigh_entry->ha;
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
          int _len_neigh_entry0 = 1;
          struct mlxsw_sp_neigh_entry * neigh_entry = (struct mlxsw_sp_neigh_entry *) malloc(_len_neigh_entry0*sizeof(struct mlxsw_sp_neigh_entry));
          for(int _i0 = 0; _i0 < _len_neigh_entry0; _i0++) {
              int _len_neigh_entry__i0__ha0 = 1;
          neigh_entry[_i0].ha = (unsigned char *) malloc(_len_neigh_entry__i0__ha0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_neigh_entry__i0__ha0; _j0++) {
            neigh_entry[_i0].ha[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = mlxsw_sp_neigh_entry_ha(neigh_entry);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_neigh_entry0; _aux++) {
          free(neigh_entry[_aux].ha);
          }
          free(neigh_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
