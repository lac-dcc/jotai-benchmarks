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
typedef  int uint_fast16_t ;

/* Variables and functions */

void
sodium_increment(unsigned char *n, const size_t nlen)
{
    size_t        i = 0U;
    uint_fast16_t c = 1U;

#ifdef HAVE_AMD64_ASM
    uint64_t t64, t64_2;
    uint32_t t32;

    if (nlen == 12U) {
        __asm__ __volatile__(
            "xorq %[t64], %[t64] \n"
            "xorl %[t32], %[t32] \n"
            "stc \n"
            "adcq %[t64], (%[out]) \n"
            "adcl %[t32], 8(%[out]) \n"
            : [t64] "=&r"(t64), [t32] "=&r"(t32)
            : [out] "D"(n)
            : "memory", "flags", "cc");
        return;
    } else if (nlen == 24U) {
        __asm__ __volatile__(
            "movq $1, %[t64] \n"
            "xorq %[t64_2], %[t64_2] \n"
            "addq %[t64], (%[out]) \n"
            "adcq %[t64_2], 8(%[out]) \n"
            "adcq %[t64_2], 16(%[out]) \n"
            : [t64] "=&r"(t64), [t64_2] "=&r"(t64_2)
            : [out] "D"(n)
            : "memory", "flags", "cc");
        return;
    } else if (nlen == 8U) {
        __asm__ __volatile__("incq (%[out]) \n"
                             :
                             : [out] "D"(n)
                             : "memory", "flags", "cc");
        return;
    }
#endif
    for (; i < nlen; i++) {
        c += (uint_fast16_t) n[i];
        n[i] = (unsigned char) c;
        c >>= 8;
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
          // dynamic_instructions_O0 : 5111
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 2048
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 1242
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 1242
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 1242
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 2048
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 2048
          // ------------------------------- 

          const unsigned long nlen = 255;
        
          int _len_n0 = 65025;
          unsigned char * n = (unsigned char *) malloc(_len_n0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          sodium_increment(n,nlen);
          free(n);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 211
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 88
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 75
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 75
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 75
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 88
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          const unsigned long nlen = 10;
        
          int _len_n0 = 100;
          unsigned char * n = (unsigned char *) malloc(_len_n0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          sodium_increment(n,nlen);
          free(n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
