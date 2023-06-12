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
struct aq_ring_s {unsigned int size; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int aq_ring_next_dx(struct aq_ring_s *self,
					   unsigned int dx)
{
	return (++dx >= self->size) ? 0U : dx;
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
          unsigned int dx = 100;
        
          int _len_self0 = 1;
          struct aq_ring_s * self = (struct aq_ring_s *) malloc(_len_self0*sizeof(struct aq_ring_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = aq_ring_next_dx(self,dx);
          printf("%u\n", benchRet); 
          free(self);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int dx = 255;
        
          int _len_self0 = 65025;
          struct aq_ring_s * self = (struct aq_ring_s *) malloc(_len_self0*sizeof(struct aq_ring_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = aq_ring_next_dx(self,dx);
          printf("%u\n", benchRet); 
          free(self);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int dx = 10;
        
          int _len_self0 = 100;
          struct aq_ring_s * self = (struct aq_ring_s *) malloc(_len_self0*sizeof(struct aq_ring_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = aq_ring_next_dx(self,dx);
          printf("%u\n", benchRet); 
          free(self);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int dx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_self0 = 1;
          struct aq_ring_s * self = (struct aq_ring_s *) malloc(_len_self0*sizeof(struct aq_ring_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              self[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = aq_ring_next_dx(self,dx);
          printf("%u\n", benchRet); 
          free(self);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
