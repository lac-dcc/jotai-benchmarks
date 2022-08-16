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
typedef  int WCHAR ;

/* Variables and functions */

__attribute__((used)) static int combining_lexical_Syriac(WCHAR c)
{
    enum {Syriac_Norm=0, Syriac_DIAC1, Syriac_DIAC2, Syriac_DIAC3, Syriac_DIAC4, Syriac_DIAC5, Syriac_DIAC6, Syriac_DIAC7, Syriac_DIAC8, Syriac_DIAC9, Syriac_DIAC10, Syriac_DIAC11, Syriac_DIAC12, Syriac_DIAC13, Syriac_DIAC14, Syriac_DIAC15, Syriac_DIAC16, Syriac_DIAC17};

   switch(c)
    {
        case 0x730:
        case 0x733:
        case 0x736:
        case 0x73A:
        case 0x73D: return Syriac_DIAC1;
        case 0x731:
        case 0x734:
        case 0x737:
        case 0x73B:
        case 0x73E: return Syriac_DIAC2;
        case 0x740:
        case 0x749:
        case 0x74A: return Syriac_DIAC3;
        case 0x732:
        case 0x735:
        case 0x73F: return Syriac_DIAC4;
        case 0x738:
        case 0x739:
        case 0x73C: return Syriac_DIAC5;
        case 0x741:
        case 0x30A: return Syriac_DIAC6;
        case 0x742:
        case 0x325: return Syriac_DIAC7;
        case 0x747:
        case 0x303: return Syriac_DIAC8;
        case 0x748:
        case 0x32D:
        case 0x32E:
        case 0x330:
        case 0x331: return Syriac_DIAC9;
        case 0x308: return Syriac_DIAC10;
        case 0x304: return Syriac_DIAC11;
        case 0x307: return Syriac_DIAC12;
        case 0x323: return Syriac_DIAC13;
        case 0x743: return Syriac_DIAC14;
        case 0x744: return Syriac_DIAC15;
        case 0x745: return Syriac_DIAC16;
        case 0x746: return Syriac_DIAC17;
        default: return Syriac_Norm;
    }
}


// ------------------------------------------------------------------------- //




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
          int c = 100;
          int benchRet = combining_lexical_Syriac(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int benchRet = combining_lexical_Syriac(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int benchRet = combining_lexical_Syriac(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
