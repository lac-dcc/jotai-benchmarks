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
typedef  scalar_t__ ulong ;
typedef  scalar_t__ u64 ;
struct gasket_page_table {int num_coherent_pages; TYPE_1__* coherent_pages; } ;
struct TYPE_2__ {scalar_t__ user_virt; } ;

/* Variables and functions */
 int PAGE_SIZE ; 

__attribute__((used)) static int is_coherent(struct gasket_page_table *pg_tbl, ulong host_addr)
{
	u64 min, max;

	/* whether the host address is within user virt range */
	if (!pg_tbl->coherent_pages)
		return 0;

	min = (u64)pg_tbl->coherent_pages[0].user_virt;
	max = min + PAGE_SIZE * pg_tbl->num_coherent_pages;

	return min <= host_addr && host_addr < max;
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
          long host_addr = 100;
          int _len_pg_tbl0 = 1;
          struct gasket_page_table * pg_tbl = (struct gasket_page_table *) malloc(_len_pg_tbl0*sizeof(struct gasket_page_table));
          for(int _i0 = 0; _i0 < _len_pg_tbl0; _i0++) {
            pg_tbl[_i0].num_coherent_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pg_tbl__i0__coherent_pages0 = 1;
          pg_tbl[_i0].coherent_pages = (struct TYPE_2__ *) malloc(_len_pg_tbl__i0__coherent_pages0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pg_tbl__i0__coherent_pages0; _j0++) {
            pg_tbl[_i0].coherent_pages->user_virt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_coherent(pg_tbl,host_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pg_tbl0; _aux++) {
          free(pg_tbl[_aux].coherent_pages);
          }
          free(pg_tbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
