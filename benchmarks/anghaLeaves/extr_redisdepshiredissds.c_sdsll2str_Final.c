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

int sdsll2str(char *s, long long value) {
    char *p, aux;
    unsigned long long v;
    size_t l;

    /* Generate the string representation, this method produces
     * an reversed string. */
    v = (value < 0) ? -value : value;
    p = s;
    do {
        *p++ = '0'+(v%10);
        v /= 10;
    } while(v);
    if (value < 0) *p++ = '-';

    /* Compute length and add null term. */
    l = p-s;
    *p = '\0';

    /* Reverse the string. */
    p--;
    while(s < p) {
        aux = *s;
        *s = *p;
        *p = aux;
        s++;
        p--;
    }
    return l;
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
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 103
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 68
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 68
          // ------------------------------- 
          // static_instructions_O3 : 43
          // dynamic_instructions_O3 : 69
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 69
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 66
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 54
          // ------------------------------- 

          long long value = 255;
        
          int _len_s0 = 65025;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sdsll2str(s,value);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 55
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 55
          // ------------------------------- 
          // static_instructions_O3 : 43
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 53
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 45
          // ------------------------------- 

          long long value = 10;
        
          int _len_s0 = 100;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sdsll2str(s,value);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
