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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  tv_nsec; int /*<<< orphan*/  tv_sec; } ;
struct TYPE_10__ {TYPE_1__ time; int /*<<< orphan*/  tick; } ;
struct TYPE_8__ {int client; } ;
struct TYPE_7__ {int client; } ;
struct TYPE_9__ {int flags; TYPE_5__ time; TYPE_3__ dest; TYPE_2__ source; } ;
struct snd_seq_event_cell {TYPE_4__ event; } ;

/* Variables and functions */
 int SNDRV_SEQ_TIME_STAMP_MASK ; 
#define  SNDRV_SEQ_TIME_STAMP_REAL 129 
#define  SNDRV_SEQ_TIME_STAMP_TICK 128 

__attribute__((used)) static inline int prioq_match(struct snd_seq_event_cell *cell,
			      int client, int timestamp)
{
	if (cell->event.source.client == client ||
	    cell->event.dest.client == client)
		return 1;
	if (!timestamp)
		return 0;
	switch (cell->event.flags & SNDRV_SEQ_TIME_STAMP_MASK) {
	case SNDRV_SEQ_TIME_STAMP_TICK:
		if (cell->event.time.tick)
			return 1;
		break;
	case SNDRV_SEQ_TIME_STAMP_REAL:
		if (cell->event.time.time.tv_sec ||
		    cell->event.time.time.tv_nsec)
			return 1;
		break;
	}
	return 0;
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
          int client = 100;
          int timestamp = 100;
          int _len_cell0 = 1;
          struct snd_seq_event_cell * cell = (struct snd_seq_event_cell *) malloc(_len_cell0*sizeof(struct snd_seq_event_cell));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
            cell[_i0].event.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].event.time.time.tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].event.time.time.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].event.time.tick = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].event.dest.client = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].event.source.client = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = prioq_match(cell,client,timestamp);
          printf("%d\n", benchRet); 
          free(cell);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
