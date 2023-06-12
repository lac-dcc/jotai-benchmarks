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
       1            empty\n\
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
typedef  int USHORT ;
typedef  int UCHAR ;
typedef  int* PCHAR ;

/* Variables and functions */

int ExtractName( PCHAR pBuffer, PCHAR pOutput, USHORT Offset, UCHAR Limit )
{
    int c = 0, d = 0, i = 0, j = 0, k = 0, l = 0, m = 0;

    i = Offset;

    /* If Limit == 0, then we assume "no" limit. */
    d = Limit;
    if( 0 == Limit ) d = 255;

    while( d > 0 )
    {
        l = pBuffer[i] & 0xFF;
        i += 1;
        if( !m ) c += 1;

        if( 0xC0 == l )
        {
            if( !m ) c += 1;
            m = 1;
            d += (255 - Limit);
            i = pBuffer[i];
        }
        else
        {
            for( j = 0; j < l; j += 1 )
            {
                pOutput[k] = pBuffer[i];

                i += 1;
                if( !m ) c += 1;
                k += 1;
                d -= 1;
            }

            d -= 1;

            if( !pBuffer[i] || (d < 1) ) break;

            pOutput[k] = '.';
            k += 1;
        }
    };

    if( !m )
    {
        if( !Limit ) c += 1;
    }

    pOutput[k] = '\0';

    return c;
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
          // static_instructions_O0 : 95
          // dynamic_instructions_O0 : 8364
          // ------------------------------- 
          // static_instructions_O1 : 84
          // dynamic_instructions_O1 : 1947
          // ------------------------------- 
          // static_instructions_O2 : 156
          // dynamic_instructions_O2 : 435
          // ------------------------------- 
          // static_instructions_O3 : 154
          // dynamic_instructions_O3 : 432
          // ------------------------------- 
          // static_instructions_Ofast : 154
          // dynamic_instructions_Ofast : 432
          // ------------------------------- 
          // static_instructions_Os : 80
          // dynamic_instructions_Os : 1942
          // ------------------------------- 
          // static_instructions_Oz : 93
          // dynamic_instructions_Oz : 2260
          // ------------------------------- 

          int Offset = 255;
        
          int Limit = 255;
        
          int _len_pBuffer0 = 65025;
          int * pBuffer = (int *) malloc(_len_pBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pBuffer0; _i0++) {
            pBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pOutput0 = 65025;
          int * pOutput = (int *) malloc(_len_pOutput0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pOutput0; _i0++) {
            pOutput[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ExtractName(pBuffer,pOutput,Offset,Limit);
          printf("%d\n", benchRet); 
          free(pBuffer);
          free(pOutput);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 31
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 31
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 32
          // ------------------------------- 

          int Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int Limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pBuffer0 = 1;
          int * pBuffer = (int *) malloc(_len_pBuffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pBuffer0; _i0++) {
            pBuffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pOutput0 = 1;
          int * pOutput = (int *) malloc(_len_pOutput0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pOutput0; _i0++) {
            pOutput[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ExtractName(pBuffer,pOutput,Offset,Limit);
          printf("%d\n", benchRet); 
          free(pBuffer);
          free(pOutput);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
