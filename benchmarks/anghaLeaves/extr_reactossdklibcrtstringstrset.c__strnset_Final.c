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

/* Variables and functions */

char* _strnset(char* szToFill, int szFill, size_t sizeMaxFill)
{
	char *t = szToFill;
	int i = 0;
	while (*szToFill != 0 && i < (int) sizeMaxFill)
	{
		*szToFill = szFill;
		szToFill++;
		i++;

	}
	return t;
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
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 6401
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 1539
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 1539
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 1539
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 1539
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1537
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1793
          // ------------------------------- 

          int szFill = 255;
        
          unsigned long sizeMaxFill = 255;
        
          int _len_szToFill0 = 65025;
          char * szToFill = (char *) malloc(_len_szToFill0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_szToFill0; _i0++) {
            szToFill[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = _strnset(szToFill,szFill,sizeMaxFill);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(szToFill);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 276
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 69
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 69
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 69
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 69
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 67
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 78
          // ------------------------------- 

          int szFill = 10;
        
          unsigned long sizeMaxFill = 10;
        
          int _len_szToFill0 = 100;
          char * szToFill = (char *) malloc(_len_szToFill0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_szToFill0; _i0++) {
            szToFill[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = _strnset(szToFill,szFill,sizeMaxFill);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(szToFill);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
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
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int szFill = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long sizeMaxFill = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_szToFill0 = 1;
          char * szToFill = (char *) malloc(_len_szToFill0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_szToFill0; _i0++) {
            szToFill[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = _strnset(szToFill,szFill,sizeMaxFill);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(szToFill);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
