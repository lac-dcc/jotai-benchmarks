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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* htab_t ;
typedef  int /*<<< orphan*/  htab_hash ;
typedef  int /*<<< orphan*/  htab_free_with_arg ;
typedef  int /*<<< orphan*/  htab_eq ;
typedef  int /*<<< orphan*/  htab_del ;
typedef  int /*<<< orphan*/  htab_alloc_with_arg ;
struct TYPE_3__ {int /*<<< orphan*/  free_with_arg_f; int /*<<< orphan*/  alloc_with_arg_f; int /*<<< orphan*/  alloc_arg; int /*<<< orphan*/  del_f; int /*<<< orphan*/  eq_f; int /*<<< orphan*/  hash_f; } ;
typedef  int /*<<< orphan*/  PTR ;

/* Variables and functions */

void
htab_set_functions_ex (htab_t htab, htab_hash hash_f, htab_eq eq_f,
                       htab_del del_f, PTR alloc_arg,
                       htab_alloc_with_arg alloc_f, htab_free_with_arg free_f)
{
  htab->hash_f = hash_f;
  htab->eq_f = eq_f;
  htab->del_f = del_f;
  htab->alloc_arg = alloc_arg;
  htab->alloc_with_arg_f = alloc_f;
  htab->free_with_arg_f = free_f;
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
          int hash_f = 100;
          int eq_f = 100;
          int del_f = 100;
          int alloc_arg = 100;
          int alloc_f = 100;
          int free_f = 100;
          int _len_htab0 = 1;
          struct TYPE_3__ * htab = (struct TYPE_3__ *) malloc(_len_htab0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_htab0; _i0++) {
            htab[_i0].free_with_arg_f = ((-2 * (next_i()%2)) + 1) * next_i();
        htab[_i0].alloc_with_arg_f = ((-2 * (next_i()%2)) + 1) * next_i();
        htab[_i0].alloc_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        htab[_i0].del_f = ((-2 * (next_i()%2)) + 1) * next_i();
        htab[_i0].eq_f = ((-2 * (next_i()%2)) + 1) * next_i();
        htab[_i0].hash_f = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          htab_set_functions_ex(htab,hash_f,eq_f,del_f,alloc_arg,alloc_f,free_f);
          free(htab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
