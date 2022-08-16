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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  errstr; int /*<<< orphan*/  err; } ;
typedef  TYPE_1__ redisContext ;
struct TYPE_5__ {int /*<<< orphan*/  errstr; int /*<<< orphan*/  err; TYPE_1__ c; } ;
typedef  TYPE_2__ redisAsyncContext ;

/* Variables and functions */

__attribute__((used)) static void __redisAsyncCopyError(redisAsyncContext *ac) {
    if (!ac)
        return;

    redisContext *c = &(ac->c);
    ac->err = c->err;
    ac->errstr = c->errstr;
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
          int _len_ac0 = 1;
          struct TYPE_5__ * ac = (struct TYPE_5__ *) malloc(_len_ac0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
            ac[_i0].errstr = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].c.errstr = ((-2 * (next_i()%2)) + 1) * next_i();
        ac[_i0].c.err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __redisAsyncCopyError(ac);
          free(ac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
