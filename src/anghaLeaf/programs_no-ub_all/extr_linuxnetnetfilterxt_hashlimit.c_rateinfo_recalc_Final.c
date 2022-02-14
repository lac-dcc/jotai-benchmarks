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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned long u64 ;
typedef  int u32 ;
struct TYPE_2__ {unsigned long prev; unsigned long interval; int prev_window; unsigned long current_rate; unsigned long rate; unsigned long credit; unsigned long credit_cap; } ;
struct dsthash_ent {TYPE_1__ rateinfo; } ;

/* Variables and functions */
 unsigned long CREDITS_PER_JIFFY ; 
 unsigned long CREDITS_PER_JIFFY_BYTES ; 
 unsigned long CREDITS_PER_JIFFY_v1 ; 
 unsigned long HZ ; 
 int XT_HASHLIMIT_BYTES ; 
 int XT_HASHLIMIT_RATE_MATCH ; 

__attribute__((used)) static void rateinfo_recalc(struct dsthash_ent *dh, unsigned long now,
			    u32 mode, int revision)
{
	unsigned long delta = now - dh->rateinfo.prev;
	u64 cap, cpj;

	if (delta == 0)
		return;

	if (revision >= 3 && mode & XT_HASHLIMIT_RATE_MATCH) {
		u64 interval = dh->rateinfo.interval * HZ;

		if (delta < interval)
			return;

		dh->rateinfo.prev = now;
		dh->rateinfo.prev_window =
			((dh->rateinfo.current_rate * interval) >
			 (delta * dh->rateinfo.rate));
		dh->rateinfo.current_rate = 0;

		return;
	}

	dh->rateinfo.prev = now;

	if (mode & XT_HASHLIMIT_BYTES) {
		u64 tmp = dh->rateinfo.credit;
		dh->rateinfo.credit += CREDITS_PER_JIFFY_BYTES * delta;
		cap = CREDITS_PER_JIFFY_BYTES * HZ;
		if (tmp >= dh->rateinfo.credit) {/* overflow */
			dh->rateinfo.credit = cap;
			return;
		}
	} else {
		cpj = (revision == 1) ?
			CREDITS_PER_JIFFY_v1 : CREDITS_PER_JIFFY;
		dh->rateinfo.credit += delta * cpj;
		cap = dh->rateinfo.credit_cap;
	}
	if (dh->rateinfo.credit > cap)
		dh->rateinfo.credit = cap;
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

    // big-arr
    case 0:
    {
          unsigned long now = 255;
          int mode = 255;
          int revision = 255;
          int _len_dh0 = 1;
          struct dsthash_ent * dh = (struct dsthash_ent *) malloc(_len_dh0*sizeof(struct dsthash_ent));
          for(int _i0 = 0; _i0 < _len_dh0; _i0++) {
            dh->rateinfo.prev = ((-2 * (next_i()%2)) + 1) * next_i();
        dh->rateinfo.interval = ((-2 * (next_i()%2)) + 1) * next_i();
        dh->rateinfo.prev_window = ((-2 * (next_i()%2)) + 1) * next_i();
        dh->rateinfo.current_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        dh->rateinfo.rate = ((-2 * (next_i()%2)) + 1) * next_i();
        dh->rateinfo.credit = ((-2 * (next_i()%2)) + 1) * next_i();
        dh->rateinfo.credit_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rateinfo_recalc(dh,now,mode,revision);
          free(dh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
