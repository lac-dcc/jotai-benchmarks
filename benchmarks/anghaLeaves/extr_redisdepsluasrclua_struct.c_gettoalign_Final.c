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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t align; } ;
typedef  TYPE_1__ Header ;

/* Variables and functions */

__attribute__((used)) static int gettoalign (size_t len, Header *h, int opt, size_t size) {
  if (size == 0 || opt == 'c') return 0;
  if (size > (size_t)h->align)
    size = h->align;  /* respect max. alignment */
  return (size - (len & (size - 1))) & (size - 1);
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned long len = 100;
        
          int opt = 100;
        
          unsigned long size = 100;
        
          int _len_h0 = 1;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              h[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gettoalign(len,h,opt,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned long len = 255;
        
          int opt = 255;
        
          unsigned long size = 255;
        
          int _len_h0 = 65025;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              h[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gettoalign(len,h,opt,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned long len = 10;
        
          int opt = 10;
        
          unsigned long size = 10;
        
          int _len_h0 = 100;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              h[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gettoalign(len,h,opt,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int opt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_h0 = 1;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              h[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = gettoalign(len,h,opt,size);
          printf("%d\n", benchRet); 
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
