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
typedef  int /*<<< orphan*/  u_char ;
typedef  char ngx_uint_t ;
typedef  char ngx_int_t ;

/* Variables and functions */

ngx_int_t
ngx_filename_cmp(u_char *s1, u_char *s2, size_t n)
{
    ngx_uint_t  c1, c2;

    while (n) {
        c1 = (ngx_uint_t) *s1++;
        c2 = (ngx_uint_t) *s2++;

#if (NGX_HAVE_CASELESS_FILESYSTEM)
        c1 = tolower(c1);
        c2 = tolower(c2);
#endif

        if (c1 == c2) {

            if (c1) {
                n--;
                continue;
            }

            return 0;
        }

        /* we need '/' to be the lowest character */

        if (c1 == 0 || c2 == 0) {
            return c1 - c2;
        }

        c1 = (c1 == '/') ? 0 : c1;
        c2 = (c2 == '/') ? 0 : c2;

        return c1 - c2;
    }

    return 0;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 6131
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 3324
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 3324
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 3324
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 3324
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 3324
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 3324
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_s10 = 65025;
          int * s1 = (int *) malloc(_len_s10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s20 = 65025;
          int * s2 = (int *) malloc(_len_s20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char benchRet = ngx_filename_cmp(s1,s2,n);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(s1);
          free(s2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 251
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 139
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 139
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 139
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 139
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 139
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 139
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_s10 = 100;
          int * s1 = (int *) malloc(_len_s10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s20 = 100;
          int * s2 = (int *) malloc(_len_s20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char benchRet = ngx_filename_cmp(s1,s2,n);
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
