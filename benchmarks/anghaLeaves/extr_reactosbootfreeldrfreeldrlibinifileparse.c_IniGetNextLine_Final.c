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
typedef  scalar_t__ ULONG ;
typedef  char* PCHAR ;

/* Variables and functions */

ULONG IniGetNextLine(PCHAR IniFileData, ULONG IniFileSize, PCHAR Buffer, ULONG BufferSize, ULONG CurrentOffset)
{
    ULONG        Idx;

    // Loop through grabbing chars until we hit the end of the
    // file or we encounter a new line char
    for (Idx=0; (CurrentOffset < IniFileSize); CurrentOffset++)
    {
        // If we haven't exceeded our buffer size yet
        // then store another char
        if (Idx < (BufferSize - 1))
        {
            Buffer[Idx++] = IniFileData[CurrentOffset];
        }

        // Check for new line char
        if (IniFileData[CurrentOffset] == '\n')
        {
            CurrentOffset++;
            break;
        }
    }

    // Terminate the string
    Buffer[Idx] = '\0';

    // Get rid of newline & linefeed characters (if any)
    while(Idx && (Buffer[--Idx] == '\n' || Buffer[Idx] == '\r'))
        Buffer[Idx] = '\0';

    // Send back new offset
    return CurrentOffset;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long IniFileSize = 100;
        
          long BufferSize = 100;
        
          long CurrentOffset = 100;
        
          int _len_IniFileData0 = 1;
          char * IniFileData = (char *) malloc(_len_IniFileData0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_IniFileData0; _i0++) {
            IniFileData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_Buffer0 = 1;
          char * Buffer = (char *) malloc(_len_Buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = IniGetNextLine(IniFileData,IniFileSize,Buffer,BufferSize,CurrentOffset);
          printf("%ld\n", benchRet); 
          free(IniFileData);
          free(Buffer);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long IniFileSize = 255;
        
          long BufferSize = 255;
        
          long CurrentOffset = 255;
        
          int _len_IniFileData0 = 65025;
          char * IniFileData = (char *) malloc(_len_IniFileData0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_IniFileData0; _i0++) {
            IniFileData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_Buffer0 = 65025;
          char * Buffer = (char *) malloc(_len_Buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = IniGetNextLine(IniFileData,IniFileSize,Buffer,BufferSize,CurrentOffset);
          printf("%ld\n", benchRet); 
          free(IniFileData);
          free(Buffer);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long IniFileSize = 10;
        
          long BufferSize = 10;
        
          long CurrentOffset = 10;
        
          int _len_IniFileData0 = 100;
          char * IniFileData = (char *) malloc(_len_IniFileData0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_IniFileData0; _i0++) {
            IniFileData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_Buffer0 = 100;
          char * Buffer = (char *) malloc(_len_Buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = IniGetNextLine(IniFileData,IniFileSize,Buffer,BufferSize,CurrentOffset);
          printf("%ld\n", benchRet); 
          free(IniFileData);
          free(Buffer);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long IniFileSize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long BufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long CurrentOffset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_IniFileData0 = 1;
          char * IniFileData = (char *) malloc(_len_IniFileData0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_IniFileData0; _i0++) {
            IniFileData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_Buffer0 = 1;
          char * Buffer = (char *) malloc(_len_Buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = IniGetNextLine(IniFileData,IniFileSize,Buffer,BufferSize,CurrentOffset);
          printf("%ld\n", benchRet); 
          free(IniFileData);
          free(Buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
