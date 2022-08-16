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
typedef  int ulong ;
typedef  int uint ;
struct TYPE_2__ {int total_entries; } ;
struct gasket_page_table {int extended_flag; TYPE_1__ config; } ;

/* Variables and functions */
 int GASKET_EXTENDED_LVL0_SHIFT ; 
 int GASKET_EXTENDED_LVL1_SHIFT ; 
 int GASKET_PAGES_PER_SUBTABLE ; 
 int GASKET_SIMPLE_PAGE_SHIFT ; 

__attribute__((used)) static ulong gasket_components_to_dev_address(struct gasket_page_table *pg_tbl,
					      int is_simple, uint page_index,
					      uint offset)
{
	ulong lvl0_index, lvl1_index;

	if (is_simple) {
		/* Return simple addresses directly. */
		lvl0_index = page_index & (pg_tbl->config.total_entries - 1);
		return (lvl0_index << GASKET_SIMPLE_PAGE_SHIFT) | offset;
	}

	/*
	 * This could be compressed into fewer statements, but
	 * A) the compiler should optimize it
	 * B) this is not slow
	 * C) this is an uncommon operation
	 * D) this is actually readable this way.
	 */
	lvl0_index = page_index / GASKET_PAGES_PER_SUBTABLE;
	lvl1_index = page_index & (GASKET_PAGES_PER_SUBTABLE - 1);
	return (pg_tbl)->extended_flag |
	       (lvl0_index << GASKET_EXTENDED_LVL0_SHIFT) |
	       (lvl1_index << GASKET_EXTENDED_LVL1_SHIFT) | offset;
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
          int is_simple = 100;
          int page_index = 100;
          int offset = 100;
          int _len_pg_tbl0 = 1;
          struct gasket_page_table * pg_tbl = (struct gasket_page_table *) malloc(_len_pg_tbl0*sizeof(struct gasket_page_table));
          for(int _i0 = 0; _i0 < _len_pg_tbl0; _i0++) {
            pg_tbl[_i0].extended_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pg_tbl[_i0].config.total_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gasket_components_to_dev_address(pg_tbl,is_simple,page_index,offset);
          printf("%d\n", benchRet); 
          free(pg_tbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
