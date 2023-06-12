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
typedef  int uint64_t ;

/* Variables and functions */
 int SIZE_MAX ; 

size_t h2o_strtosizefwd(char **s, size_t len)
{
    uint64_t v, c;
    char *p = *s, *p_end = *s + len;

    if (len == 0)
        goto Error;

    int ch = *p++;
    if (!('0' <= ch && ch <= '9'))
        goto Error;
    v = ch - '0';
    c = 1;

    while (1) {
        ch = *p;
        if (!('0' <= ch && ch <= '9'))
            break;
        v *= 10;
        v += ch - '0';
        p++;
        c++;
        if (p == p_end)
            break;
        /* similar as above, do not even try to overflow */
        if (c == 20)
            goto Error;
    }

    if (v >= SIZE_MAX)
        goto Error;
    *s = p;
    return v;

Error:
    return SIZE_MAX;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
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

          unsigned long len = 100;
        
          int _len_s0 = 1;
          char ** s = (char **) malloc(_len_s0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            int _len_s1 = 1;
            s[_i0] = (char *) malloc(_len_s1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_s1; _i1++) {
              s[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          unsigned long benchRet = h2o_strtosizefwd(s,len);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_s0; i1++) {
              free(s[i1]);
          }
          free(s);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
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

          unsigned long len = 255;
        
          int _len_s0 = 65025;
          char ** s = (char **) malloc(_len_s0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            int _len_s1 = 1;
            s[_i0] = (char *) malloc(_len_s1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_s1; _i1++) {
              s[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          unsigned long benchRet = h2o_strtosizefwd(s,len);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_s0; i1++) {
              free(s[i1]);
          }
          free(s);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
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

          unsigned long len = 10;
        
          int _len_s0 = 100;
          char ** s = (char **) malloc(_len_s0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            int _len_s1 = 1;
            s[_i0] = (char *) malloc(_len_s1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_s1; _i1++) {
              s[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          unsigned long benchRet = h2o_strtosizefwd(s,len);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_s0; i1++) {
              free(s[i1]);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
