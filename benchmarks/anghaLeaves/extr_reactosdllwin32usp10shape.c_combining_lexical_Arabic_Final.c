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

__attribute__((used)) static int combining_lexical_Arabic(WCHAR c)
{
    enum {Arab_Norm = 0, Arab_DIAC1, Arab_DIAC2, Arab_DIAC3, Arab_DIAC4, Arab_DIAC5, Arab_DIAC6, Arab_DIAC7, Arab_DIAC8};

   switch(c)
    {
        case 0x064B:
        case 0x064C:
        case 0x064E:
        case 0x064F:
        case 0x0652:
        case 0x0657:
        case 0x0658:
        case 0x06E1: return Arab_DIAC1;
        case 0x064D:
        case 0x0650:
        case 0x0656: return Arab_DIAC2;
        case 0x0651: return Arab_DIAC3;
        case 0x0610:
        case 0x0611:
        case 0x0612:
        case 0x0613:
        case 0x0614:
        case 0x0659:
        case 0x06D6:
        case 0x06DC:
        case 0x06DF:
        case 0x06E0:
        case 0x06E2:
        case 0x06E4:
        case 0x06E7:
        case 0x06E8:
        case 0x06EB:
        case 0x06EC: return Arab_DIAC4;
        case 0x06E3:
        case 0x06EA:
        case 0x06ED: return Arab_DIAC5;
        case 0x0670: return Arab_DIAC6;
        case 0x0653: return Arab_DIAC7;
        case 0x0655:
        case 0x0654: return Arab_DIAC8;
        default: return Arab_Norm;
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
          int benchRet = combining_lexical_Arabic(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int benchRet = combining_lexical_Arabic(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int benchRet = combining_lexical_Arabic(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
