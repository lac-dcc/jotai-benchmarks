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
typedef  int DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */

__attribute__((used)) static inline void reverse_bytes(BYTE *pbData, DWORD dwLen) {
    BYTE swap;
    DWORD i;

    for (i=0; i<dwLen/2; i++) {
        swap = pbData[i];
        pbData[i] = pbData[dwLen-i-1];
        pbData[dwLen-i-1] = swap;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 4335
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 1156
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 971
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 971
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 971
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 1153
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 1284
          // ------------------------------- 

          int dwLen = 255;
        
          int _len_pbData0 = 65025;
          int * pbData = (int *) malloc(_len_pbData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbData0; _i0++) {
            pbData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          reverse_bytes(pbData,dwLen);
          free(pbData);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 187
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 55
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 64
          // ------------------------------- 

          int dwLen = 10;
        
          int _len_pbData0 = 100;
          int * pbData = (int *) malloc(_len_pbData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbData0; _i0++) {
            pbData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          reverse_bytes(pbData,dwLen);
          free(pbData);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int dwLen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pbData0 = 1;
          int * pbData = (int *) malloc(_len_pbData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbData0; _i0++) {
            pbData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          reverse_bytes(pbData,dwLen);
          free(pbData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
