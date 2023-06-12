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

__attribute__((used)) static void ui2a(unsigned int num, unsigned int base, int uc,char * bf)
    {
    int n=0;
    unsigned int d=1;
    while (num/d >= base)
        d*=base;
    while (d!=0) {
        int dgt = num / d;
        num%= d;
        d/=base;
        if (n || dgt>0 || d==0) {
            *bf++ = dgt+(dgt<10 ? '0' : (uc ? 'A' : 'a')-10);
            ++n;
            }
        }
    *bf=0;
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
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 107
          // ------------------------------- 
          // static_instructions_O1 : 55
          // dynamic_instructions_O1 : 75
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 74
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 52
          // dynamic_instructions_Os : 72
          // ------------------------------- 
          // static_instructions_Oz : 55
          // dynamic_instructions_Oz : 86
          // ------------------------------- 

          unsigned int num = 255;
        
          unsigned int base = 255;
        
          int uc = 255;
        
          int _len_bf0 = 65025;
          char * bf = (char *) malloc(_len_bf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bf0; _i0++) {
            bf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ui2a(num,base,uc,bf);
          free(bf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 107
          // ------------------------------- 
          // static_instructions_O1 : 55
          // dynamic_instructions_O1 : 75
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 74
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 52
          // dynamic_instructions_Os : 72
          // ------------------------------- 
          // static_instructions_Oz : 55
          // dynamic_instructions_Oz : 86
          // ------------------------------- 

          unsigned int num = 10;
        
          unsigned int base = 10;
        
          int uc = 10;
        
          int _len_bf0 = 100;
          char * bf = (char *) malloc(_len_bf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bf0; _i0++) {
            bf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ui2a(num,base,uc,bf);
          free(bf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
