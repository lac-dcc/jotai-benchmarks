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
struct sadb_comb {int sadb_comb_soft_allocations; int sadb_comb_hard_allocations; int sadb_comb_hard_addtime; int sadb_comb_soft_addtime; int sadb_comb_soft_usetime; int sadb_comb_hard_usetime; scalar_t__ sadb_comb_hard_bytes; scalar_t__ sadb_comb_soft_bytes; } ;

/* Variables and functions */

__attribute__((used)) static void
key_getcomb_setlifetime(
						struct sadb_comb *comb)
{
	
	comb->sadb_comb_soft_allocations = 1;
	comb->sadb_comb_hard_allocations = 1;
	comb->sadb_comb_soft_bytes = 0;
	comb->sadb_comb_hard_bytes = 0;
	comb->sadb_comb_hard_addtime = 86400;	/* 1 day */
	comb->sadb_comb_soft_addtime = comb->sadb_comb_soft_addtime * 80 / 100;
	comb->sadb_comb_soft_usetime = 28800;	/* 8 hours */
	comb->sadb_comb_hard_usetime = comb->sadb_comb_hard_usetime * 80 / 100;
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
          int _len_comb0 = 1;
          struct sadb_comb * comb = (struct sadb_comb *) malloc(_len_comb0*sizeof(struct sadb_comb));
          for(int _i0 = 0; _i0 < _len_comb0; _i0++) {
            comb[_i0].sadb_comb_soft_allocations = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_hard_allocations = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_hard_addtime = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_soft_addtime = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_soft_usetime = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_hard_usetime = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_hard_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        comb[_i0].sadb_comb_soft_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          key_getcomb_setlifetime(comb);
          free(comb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
