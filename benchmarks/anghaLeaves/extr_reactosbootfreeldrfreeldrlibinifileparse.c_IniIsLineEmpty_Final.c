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

/* Type definitions */
typedef  size_t ULONG ;
typedef  char* PCHAR ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

BOOLEAN IniIsLineEmpty(PCHAR LineOfText, ULONG TextLength)
{
    ULONG        Idx;

    // Check for text (skipping whitespace)
    for (Idx=0; Idx<TextLength; Idx++)
    {
        if ((LineOfText[Idx] == ' ') ||
            (LineOfText[Idx] == '\t') ||
            (LineOfText[Idx] == '\n') ||
            (LineOfText[Idx] == '\r'))
        {
            continue;
        }
        else
        {
            return FALSE;
        }
    }

    return TRUE;
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
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long TextLength = 100;
        
          int _len_LineOfText0 = 1;
          char * LineOfText = (char *) malloc(_len_LineOfText0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_LineOfText0; _i0++) {
            LineOfText[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = IniIsLineEmpty(LineOfText,TextLength);
          printf("%d\n", benchRet); 
          free(LineOfText);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long TextLength = 255;
        
          int _len_LineOfText0 = 65025;
          char * LineOfText = (char *) malloc(_len_LineOfText0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_LineOfText0; _i0++) {
            LineOfText[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = IniIsLineEmpty(LineOfText,TextLength);
          printf("%d\n", benchRet); 
          free(LineOfText);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long TextLength = 10;
        
          int _len_LineOfText0 = 100;
          char * LineOfText = (char *) malloc(_len_LineOfText0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_LineOfText0; _i0++) {
            LineOfText[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = IniIsLineEmpty(LineOfText,TextLength);
          printf("%d\n", benchRet); 
          free(LineOfText);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          unsigned long TextLength = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_LineOfText0 = 1;
          char * LineOfText = (char *) malloc(_len_LineOfText0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_LineOfText0; _i0++) {
            LineOfText[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = IniIsLineEmpty(LineOfText,TextLength);
          printf("%d\n", benchRet); 
          free(LineOfText);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
