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
typedef  scalar_t__ u_char ;
typedef  scalar_t__ ngx_int_t ;

/* Variables and functions */

ngx_int_t
ngx_rstrncmp(u_char *s1, u_char *s2, size_t n)
{
    if (n == 0) {
        return 0;
    }

    n--;

    for ( ;; ) {
        if (s1[n] != s2[n]) {
            return s1[n] - s2[n];
        }

        if (n == 0) {
            return 0;
        }

        n--;
    }
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 3326
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1283
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 1283
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 1283
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 1283
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 1282
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1282
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_s10 = 65025;
          long * s1 = (long *) malloc(_len_s10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s20 = 65025;
          long * s2 = (long *) malloc(_len_s20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = ngx_rstrncmp(s1,s2,n);
          printf("%ld\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 141
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 58
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 58
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 58
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 57
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 57
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_s10 = 100;
          long * s1 = (long *) malloc(_len_s10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s20 = 100;
          long * s2 = (long *) malloc(_len_s20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = ngx_rstrncmp(s1,s2,n);
          printf("%ld\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
