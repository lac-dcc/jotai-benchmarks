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

/* Variables and functions */

__attribute__((used)) static char *emit_digits(char *dst, int n, size_t cnt)
{
    char *p = dst + cnt;

    /* emit digits from back */
    do {
        *--p = '0' + n % 10;
        n /= 10;
    } while (p != dst);

    return dst + cnt;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 4857
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 3321
          // ------------------------------- 
          // static_instructions_O2 : 53
          // dynamic_instructions_O2 : 3959
          // ------------------------------- 
          // static_instructions_O3 : 53
          // dynamic_instructions_O3 : 3959
          // ------------------------------- 
          // static_instructions_Ofast : 53
          // dynamic_instructions_Ofast : 3959
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 3320
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1539
          // ------------------------------- 

          int n = 255;
        
          unsigned long cnt = 255;
        
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = emit_digits(dst,n,cnt);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 202
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 136
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 165
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 165
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 165
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 135
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          int n = 10;
        
          unsigned long cnt = 10;
        
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = emit_digits(dst,n,cnt);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
