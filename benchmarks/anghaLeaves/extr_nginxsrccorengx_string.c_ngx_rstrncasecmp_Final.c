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
typedef  char u_char ;
typedef  char ngx_int_t ;

/* Variables and functions */

ngx_int_t
ngx_rstrncasecmp(u_char *s1, u_char *s2, size_t n)
{
    u_char  c1, c2;

    if (n == 0) {
        return 0;
    }

    n--;

    for ( ;; ) {
        c1 = s1[n];
        if (c1 >= 'a' && c1 <= 'z') {
            c1 -= 'a' - 'A';
        }

        c2 = s2[n];
        if (c2 >= 'a' && c2 <= 'z') {
            c2 -= 'a' - 'A';
        }

        if (c1 != c2) {
            return c1 - c2;
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
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 6131
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 4088
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 4088
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 4088
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 4088
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 4087
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 4087
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_s10 = 65025;
          char * s1 = (char *) malloc(_len_s10*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s20 = 65025;
          char * s2 = (char *) malloc(_len_s20*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char benchRet = ngx_rstrncasecmp(s1,s2,n);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(s1);
          free(s2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 251
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 168
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 168
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 168
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 168
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 167
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 167
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_s10 = 100;
          char * s1 = (char *) malloc(_len_s10*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s20 = 100;
          char * s2 = (char *) malloc(_len_s20*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char benchRet = ngx_rstrncasecmp(s1,s2,n);
          printf("%c\n", (benchRet %26) + 'a'); 
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
