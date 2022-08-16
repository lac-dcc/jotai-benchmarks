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
       1            big-arr-10x\n\
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
struct kbuffer {int start; } ;

/* Variables and functions */

int kbuffer_start_of_data(struct kbuffer *kbuf)
{
	return kbuf->start;
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
          int _len_kbuf0 = 1;
          struct kbuffer * kbuf = (struct kbuffer *) malloc(_len_kbuf0*sizeof(struct kbuffer));
          for(int _i0 = 0; _i0 < _len_kbuf0; _i0++) {
            kbuf[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kbuffer_start_of_data(kbuf);
          printf("%d\n", benchRet); 
          free(kbuf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_kbuf0 = 100;
          struct kbuffer * kbuf = (struct kbuffer *) malloc(_len_kbuf0*sizeof(struct kbuffer));
          for(int _i0 = 0; _i0 < _len_kbuf0; _i0++) {
            kbuf[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kbuffer_start_of_data(kbuf);
          printf("%d\n", benchRet); 
          free(kbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
