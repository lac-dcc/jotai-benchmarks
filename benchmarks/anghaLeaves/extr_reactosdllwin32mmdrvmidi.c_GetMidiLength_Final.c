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
       3            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int l; } ;
typedef  TYPE_1__* PMIDIALLOC ;
typedef  int BYTE ;

/* Variables and functions */

__attribute__((used)) static int GetMidiLength(PMIDIALLOC pClient, BYTE b)
{
    if (b >= 0xF8)
    {
        // Realtime message - leave running status
        return 1; // Write one byte
    }

    switch (b)
    {
        case 0xF0: case 0xF4: case 0xF5: case 0xF6: case 0xF7:
            pClient->l = 1;
            return pClient->l;

        case 0xF1: case 0xF3:
            pClient->l = 2;
            return pClient->l;

        case 0xF2:
            pClient->l = 3;
            return pClient->l;
    }

    switch (b & 0xF0)
    {
        case 0x80: case 0x90: case 0xA0: case 0xB0: case 0xE0:
            pClient->l = 3;
            return pClient->l;

        case 0xC0: case 0xD0:
            pClient->l = 2;
            return pClient->l;
    }

    return (pClient->l - 1); // uses previous value if data byte (running status)
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
          // static_instructions_O0 : 63
          // dynamic_instructions_O0 : 63
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int b = 100;
        
          int _len_pClient0 = 1;
          struct TYPE_3__ * pClient = (struct TYPE_3__ *) malloc(_len_pClient0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pClient0; _i0++) {
              pClient[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = GetMidiLength(pClient,b);
          printf("%d\n", benchRet); 
          free(pClient);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int b = 255;
        
          int _len_pClient0 = 65025;
          struct TYPE_3__ * pClient = (struct TYPE_3__ *) malloc(_len_pClient0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pClient0; _i0++) {
              pClient[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = GetMidiLength(pClient,b);
          printf("%d\n", benchRet); 
          free(pClient);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 63
          // dynamic_instructions_O0 : 63
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int b = 10;
        
          int _len_pClient0 = 100;
          struct TYPE_3__ * pClient = (struct TYPE_3__ *) malloc(_len_pClient0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pClient0; _i0++) {
              pClient[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = GetMidiLength(pClient,b);
          printf("%d\n", benchRet); 
          free(pClient);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pClient0 = 1;
          struct TYPE_3__ * pClient = (struct TYPE_3__ *) malloc(_len_pClient0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pClient0; _i0++) {
              pClient[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = GetMidiLength(pClient,b);
          printf("%d\n", benchRet); 
          free(pClient);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
