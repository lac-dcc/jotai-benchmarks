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

/* Type definitions */
typedef  scalar_t__ text_t ;
typedef  size_t len_t ;

/* Variables and functions */

__attribute__((used)) static inline bool
has_char(text_t *text, len_t sz, text_t ch) {
    for(len_t i = 0; i < sz; i++) {
        if(text[i] == ch) return true;
    }
    return false;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 3328
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 2048
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 1541
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 1541
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 1541
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 1541
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1541
          // ------------------------------- 

          unsigned long sz = 255;
        
          long ch = 255;
        
          int _len_text0 = 65025;
          long * text = (long *) malloc(_len_text0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = has_char(text,sz,ch);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 88
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 71
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 71
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 71
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 71
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 71
          // ------------------------------- 

          unsigned long sz = 10;
        
          long ch = 10;
        
          int _len_text0 = 100;
          long * text = (long *) malloc(_len_text0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = has_char(text,sz,ch);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long ch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_text0 = 1;
          long * text = (long *) malloc(_len_text0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = has_char(text,sz,ch);
          printf("%d\n", benchRet); 
          free(text);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
