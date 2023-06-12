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

/* Variables and functions */

u_char *
ngx_cpystrn(u_char *dst, u_char *src, size_t n)
{
    if (n == 0) {
        return dst;
    }

    while (--n) {
        *dst = *src;

        if (*dst == '\0') {
            return dst;
        }

        dst++;
        src++;
    }

    *dst = '\0';

    return dst;
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 5100
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 1792
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 1792
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 1792
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 1792
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 1791
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 2046
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 65025;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = ngx_cpystrn(dst,src,n);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 200
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 77
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 77
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 77
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 77
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 76
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 86
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 100;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = ngx_cpystrn(dst,src,n);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
