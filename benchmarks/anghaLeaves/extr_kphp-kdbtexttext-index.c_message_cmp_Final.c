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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int local_id; } ;
typedef  TYPE_1__ message_t ;

/* Variables and functions */

__attribute__((used)) static inline int message_cmp (message_t *a, message_t *b) {
  int x = a->local_id - b->local_id;
  if (x) {
    return x;
  }
  return (a < b ? -1 : (a > b ? 1 : 0));
}

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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_a0 = 65025;
          struct TYPE_4__ * a = (struct TYPE_4__ *) malloc(_len_a0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              a[_i0].local_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_b0 = 65025;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].local_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = message_cmp(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_a0 = 100;
          struct TYPE_4__ * a = (struct TYPE_4__ *) malloc(_len_a0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              a[_i0].local_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_b0 = 100;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].local_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = message_cmp(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_a0 = 1;
          struct TYPE_4__ * a = (struct TYPE_4__ *) malloc(_len_a0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              a[_i0].local_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_b0 = 1;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].local_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = message_cmp(a,b);
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
