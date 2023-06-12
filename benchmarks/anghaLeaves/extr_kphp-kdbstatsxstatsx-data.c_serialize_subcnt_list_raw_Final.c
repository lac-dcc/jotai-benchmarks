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
struct counter {int valid_until; unsigned long long mask_subcnt; int /*<<< orphan*/ * subcnt; } ;

/* Variables and functions */

__attribute__((used)) static int *serialize_subcnt_list_raw (int *ptr, struct counter *C) {
  /* 
     don't output broken stats (dirty hack)
     php: mktime (12, 0, 0, 2, 2, 2011) == 1296637200
          Feb 02 2011, 12:00
  */
  if (C->valid_until < 1296637200) {
    *(ptr++)  = 0;
    return ptr;
  }
  if (!C->subcnt) {
    *(ptr++) = 0;
    return ptr;
  }
  *(ptr++) = 64;
  unsigned long long u = 1;
  int i, j;
  for (i = 0, j = 0; i < 64; i++, u <<= 1) 
    if (u & C->mask_subcnt) {
      *(ptr++) = C->subcnt[j++];
    } else {
      *(ptr++) = 0;
    }
  return ptr;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_ptr0 = 65025;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_C0 = 65025;
          struct counter * C = (struct counter *) malloc(_len_C0*sizeof(struct counter));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
              C[_i0].valid_until = ((-2 * (next_i()%2)) + 1) * next_i();
          C[_i0].mask_subcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_C__i0__subcnt0 = 1;
          C[_i0].subcnt = (int *) malloc(_len_C__i0__subcnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_C__i0__subcnt0; _j0++) {
            C[_i0].subcnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int * benchRet = serialize_subcnt_list_raw(ptr,C);
          printf("%d\n", (*benchRet)); 
          free(ptr);
          for(int _aux = 0; _aux < _len_C0; _aux++) {
          free(C[_aux].subcnt);
          }
          free(C);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_ptr0 = 100;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_C0 = 100;
          struct counter * C = (struct counter *) malloc(_len_C0*sizeof(struct counter));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
              C[_i0].valid_until = ((-2 * (next_i()%2)) + 1) * next_i();
          C[_i0].mask_subcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_C__i0__subcnt0 = 1;
          C[_i0].subcnt = (int *) malloc(_len_C__i0__subcnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_C__i0__subcnt0; _j0++) {
            C[_i0].subcnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int * benchRet = serialize_subcnt_list_raw(ptr,C);
          printf("%d\n", (*benchRet)); 
          free(ptr);
          for(int _aux = 0; _aux < _len_C0; _aux++) {
          free(C[_aux].subcnt);
          }
          free(C);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
