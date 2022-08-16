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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {scalar_t__ tick; TYPE_1__ time; } ;
struct snd_seq_event {int flags; TYPE_2__ time; } ;

/* Variables and functions */
 int SNDRV_SEQ_TIME_STAMP_MASK ; 
 int SNDRV_SEQ_TIME_STAMP_TICK ; 

__attribute__((used)) static inline int compare_timestamp_rel(struct snd_seq_event *a,
					struct snd_seq_event *b)
{
	if ((a->flags & SNDRV_SEQ_TIME_STAMP_MASK) == SNDRV_SEQ_TIME_STAMP_TICK) {
		/* compare ticks */
		if (a->time.tick > b->time.tick)
			return 1;
		else if (a->time.tick == b->time.tick)
			return 0;
		else
			return -1;
	} else {
		/* compare real time */
		if (a->time.time.tv_sec > b->time.time.tv_sec)
			return 1;
		else if (a->time.time.tv_sec == b->time.time.tv_sec) {
			if (a->time.time.tv_nsec > b->time.time.tv_nsec)
				return 1;
			else if (a->time.time.tv_nsec == b->time.time.tv_nsec)
				return 0;
			else
				return -1;
		} else
			return -1;
	}
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
          int _len_a0 = 1;
          struct snd_seq_event * a = (struct snd_seq_event *) malloc(_len_a0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].time.tick = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].time.time.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].time.time.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct snd_seq_event * b = (struct snd_seq_event *) malloc(_len_b0*sizeof(struct snd_seq_event));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].time.tick = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].time.time.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].time.time.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_timestamp_rel(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
