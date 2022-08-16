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
typedef  int uint32_t ;
struct atom_data_revision {int major; int minor; } ;
struct atom_common_table_header {scalar_t__ content_revision; scalar_t__ format_revision; } ;

/* Variables and functions */

__attribute__((used)) static void get_atom_data_table_revision(
	struct atom_common_table_header *atom_data_tbl,
	struct atom_data_revision *tbl_revision)
{
	if (!tbl_revision)
		return;

	/* initialize the revision to 0 which is invalid revision */
	tbl_revision->major = 0;
	tbl_revision->minor = 0;

	if (!atom_data_tbl)
		return;

	tbl_revision->major =
			(uint32_t) atom_data_tbl->format_revision & 0x3f;
	tbl_revision->minor =
			(uint32_t) atom_data_tbl->content_revision & 0x3f;
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
          int _len_atom_data_tbl0 = 1;
          struct atom_common_table_header * atom_data_tbl = (struct atom_common_table_header *) malloc(_len_atom_data_tbl0*sizeof(struct atom_common_table_header));
          for(int _i0 = 0; _i0 < _len_atom_data_tbl0; _i0++) {
            atom_data_tbl[_i0].content_revision = ((-2 * (next_i()%2)) + 1) * next_i();
        atom_data_tbl[_i0].format_revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tbl_revision0 = 1;
          struct atom_data_revision * tbl_revision = (struct atom_data_revision *) malloc(_len_tbl_revision0*sizeof(struct atom_data_revision));
          for(int _i0 = 0; _i0 < _len_tbl_revision0; _i0++) {
            tbl_revision[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
        tbl_revision[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_atom_data_table_revision(atom_data_tbl,tbl_revision);
          free(atom_data_tbl);
          free(tbl_revision);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
