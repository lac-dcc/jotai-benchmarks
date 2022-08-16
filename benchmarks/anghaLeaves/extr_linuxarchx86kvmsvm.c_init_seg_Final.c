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
struct vmcb_seg {int attrib; int limit; scalar_t__ base; scalar_t__ selector; } ;

/* Variables and functions */
 int SVM_SELECTOR_P_MASK ; 
 int SVM_SELECTOR_S_MASK ; 
 int SVM_SELECTOR_WRITE_MASK ; 

__attribute__((used)) static void init_seg(struct vmcb_seg *seg)
{
	seg->selector = 0;
	seg->attrib = SVM_SELECTOR_P_MASK | SVM_SELECTOR_S_MASK |
		      SVM_SELECTOR_WRITE_MASK; /* Read/Write Data Segment */
	seg->limit = 0xffff;
	seg->base = 0;
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
          int _len_seg0 = 1;
          struct vmcb_seg * seg = (struct vmcb_seg *) malloc(_len_seg0*sizeof(struct vmcb_seg));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
            seg[_i0].attrib = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].selector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_seg(seg);
          free(seg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
