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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct enic {unsigned int rq_count; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int enic_cq_wq(struct enic *enic, unsigned int wq)
{
	return enic->rq_count + wq;
}

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
          unsigned int wq = 100;
        
          int _len_enic0 = 1;
          struct enic * enic = (struct enic *) malloc(_len_enic0*sizeof(struct enic));
          for(int _i0 = 0; _i0 < _len_enic0; _i0++) {
              enic[_i0].rq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = enic_cq_wq(enic,wq);
          printf("%u\n", benchRet); 
          free(enic);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int wq = 255;
        
          int _len_enic0 = 65025;
          struct enic * enic = (struct enic *) malloc(_len_enic0*sizeof(struct enic));
          for(int _i0 = 0; _i0 < _len_enic0; _i0++) {
              enic[_i0].rq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = enic_cq_wq(enic,wq);
          printf("%u\n", benchRet); 
          free(enic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int wq = 10;
        
          int _len_enic0 = 100;
          struct enic * enic = (struct enic *) malloc(_len_enic0*sizeof(struct enic));
          for(int _i0 = 0; _i0 < _len_enic0; _i0++) {
              enic[_i0].rq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = enic_cq_wq(enic,wq);
          printf("%u\n", benchRet); 
          free(enic);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int wq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_enic0 = 1;
          struct enic * enic = (struct enic *) malloc(_len_enic0*sizeof(struct enic));
          for(int _i0 = 0; _i0 < _len_enic0; _i0++) {
              enic[_i0].rq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = enic_cq_wq(enic,wq);
          printf("%u\n", benchRet); 
          free(enic);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
