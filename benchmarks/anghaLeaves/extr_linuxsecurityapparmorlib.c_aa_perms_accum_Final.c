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
struct aa_perms {int deny; int allow; int audit; int quiet; int kill; int stop; int complain; int cond; int hide; int prompt; } ;

/* Variables and functions */

void aa_perms_accum(struct aa_perms *accum, struct aa_perms *addend)
{
	accum->deny |= addend->deny;
	accum->allow &= addend->allow & ~accum->deny;
	accum->audit |= addend->audit & accum->allow;
	accum->quiet &= addend->quiet & ~accum->allow;
	accum->kill |= addend->kill & ~accum->allow;
	accum->stop |= addend->stop & ~accum->allow;
	accum->complain |= addend->complain & ~accum->allow & ~accum->deny;
	accum->cond |= addend->cond & ~accum->allow & ~accum->deny;
	accum->hide &= addend->hide & ~accum->allow;
	accum->prompt |= addend->prompt & ~accum->allow & ~accum->deny;
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
          int _len_accum0 = 1;
          struct aa_perms * accum = (struct aa_perms *) malloc(_len_accum0*sizeof(struct aa_perms));
          for(int _i0 = 0; _i0 < _len_accum0; _i0++) {
            accum[_i0].deny = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].allow = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].audit = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].quiet = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].kill = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].stop = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].complain = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].cond = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].hide = ((-2 * (next_i()%2)) + 1) * next_i();
        accum[_i0].prompt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addend0 = 1;
          struct aa_perms * addend = (struct aa_perms *) malloc(_len_addend0*sizeof(struct aa_perms));
          for(int _i0 = 0; _i0 < _len_addend0; _i0++) {
            addend[_i0].deny = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].allow = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].audit = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].quiet = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].kill = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].stop = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].complain = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].cond = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].hide = ((-2 * (next_i()%2)) + 1) * next_i();
        addend[_i0].prompt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aa_perms_accum(accum,addend);
          free(accum);
          free(addend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
