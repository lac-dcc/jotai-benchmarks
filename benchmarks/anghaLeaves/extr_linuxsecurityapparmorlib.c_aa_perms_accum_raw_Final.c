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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

void aa_perms_accum_raw(struct aa_perms *accum, struct aa_perms *addend)
{
	accum->deny |= addend->deny;
	accum->allow &= addend->allow & ~addend->deny;
	accum->audit |= addend->audit & addend->allow;
	accum->quiet &= addend->quiet & ~addend->allow;
	accum->kill |= addend->kill & ~addend->allow;
	accum->stop |= addend->stop & ~addend->allow;
	accum->complain |= addend->complain & ~addend->allow & ~addend->deny;
	accum->cond |= addend->cond & ~addend->allow & ~addend->deny;
	accum->hide &= addend->hide & ~addend->allow;
	accum->prompt |= addend->prompt & ~addend->allow & ~addend->deny;
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
          aa_perms_accum_raw(accum,addend);
          free(accum);
          free(addend);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_accum0 = 65025;
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
          int _len_addend0 = 65025;
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
          aa_perms_accum_raw(accum,addend);
          free(accum);
          free(addend);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_accum0 = 100;
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
          int _len_addend0 = 100;
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
          aa_perms_accum_raw(accum,addend);
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
