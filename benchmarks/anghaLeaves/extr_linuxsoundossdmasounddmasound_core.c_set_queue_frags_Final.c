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
struct sound_queue {int bufSize; int numBufs; int user_frags; int max_active; int user_frag_size; scalar_t__ locked; } ;

/* Variables and functions */
 int EINVAL ; 
 int MAX_FRAG_SIZE ; 
 int MIN_FRAG_SIZE ; 

__attribute__((used)) static int set_queue_frags(struct sound_queue *sq, int bufs, int size)
{
	if (sq->locked) {
#ifdef DEBUG_DMASOUND
printk("dmasound_core: tried to set_queue_frags on a locked queue\n") ;
#endif
		return -EINVAL ;
	}

	if ((size < MIN_FRAG_SIZE) || (size > MAX_FRAG_SIZE))
		return -EINVAL ;
	size = (1<<size) ; /* now in bytes */
	if (size > sq->bufSize)
		return -EINVAL ; /* this might still not work */

	if (bufs <= 0)
		return -EINVAL ;
	if (bufs > sq->numBufs) /* the user is allowed say "don't care" with 0x7fff */
		bufs = sq->numBufs ;

	/* there is, currently, no way to specify max_active separately
	   from max_count.  This could be a LL driver issue - I guess
	   if there is a requirement for these values to be different then
	  we will have to pass that info. up to this level.
	*/
	sq->user_frags =
	sq->max_active = bufs ;
	sq->user_frag_size = size ;

	return 0 ;
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
          int bufs = 100;
          int size = 100;
          int _len_sq0 = 1;
          struct sound_queue * sq = (struct sound_queue *) malloc(_len_sq0*sizeof(struct sound_queue));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].bufSize = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].numBufs = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].user_frags = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].max_active = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].user_frag_size = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].locked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_queue_frags(sq,bufs,size);
          printf("%d\n", benchRet); 
          free(sq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
