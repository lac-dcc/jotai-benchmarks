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
struct read_block {int len; int ptr; void* buffer; } ;

/* Variables and functions */

__attribute__((used)) static void *
rb_read(struct read_block *rb, int sz) {
	if (rb->len < sz) {
		return NULL;
	}

	int ptr = rb->ptr;
	rb->ptr += sz;
	rb->len -= sz;
	return rb->buffer + ptr;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int sz = 100;
        
          int _len_rb0 = 1;
          struct read_block * rb = (struct read_block *) malloc(_len_rb0*sizeof(struct read_block));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rb_read(rb,sz);
          free(rb);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int sz = 255;
        
          int _len_rb0 = 65025;
          struct read_block * rb = (struct read_block *) malloc(_len_rb0*sizeof(struct read_block));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rb_read(rb,sz);
          free(rb);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int sz = 10;
        
          int _len_rb0 = 100;
          struct read_block * rb = (struct read_block *) malloc(_len_rb0*sizeof(struct read_block));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rb_read(rb,sz);
          free(rb);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rb0 = 1;
          struct read_block * rb = (struct read_block *) malloc(_len_rb0*sizeof(struct read_block));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
              rb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          rb[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rb_read(rb,sz);
          free(rb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
