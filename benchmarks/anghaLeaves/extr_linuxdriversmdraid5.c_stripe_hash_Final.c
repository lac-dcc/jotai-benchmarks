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
struct r5conf {struct hlist_head* stripe_hashtbl; } ;
struct hlist_head {int dummy; } ;
typedef  int sector_t ;

/* Variables and functions */
 int HASH_MASK ; 
 int STRIPE_SHIFT ; 

__attribute__((used)) static inline struct hlist_head *stripe_hash(struct r5conf *conf, sector_t sect)
{
	int hash = (sect >> STRIPE_SHIFT) & HASH_MASK;
	return &conf->stripe_hashtbl[hash];
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
          int sect = 100;
          int _len_conf0 = 1;
          struct r5conf * conf = (struct r5conf *) malloc(_len_conf0*sizeof(struct r5conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
              int _len_conf__i0__stripe_hashtbl0 = 1;
          conf[_i0].stripe_hashtbl = (struct hlist_head *) malloc(_len_conf__i0__stripe_hashtbl0*sizeof(struct hlist_head));
          for(int _j0 = 0; _j0 < _len_conf__i0__stripe_hashtbl0; _j0++) {
            conf[_i0].stripe_hashtbl->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hlist_head * benchRet = stripe_hash(conf,sect);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].stripe_hashtbl);
          }
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
