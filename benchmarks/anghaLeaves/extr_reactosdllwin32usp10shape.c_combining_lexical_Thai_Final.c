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

__attribute__((used)) static int combining_lexical_Thai(WCHAR c)
{
    enum {Thai_Norm=0, Thai_ABOVE1, Thai_ABOVE2, Thai_ABOVE3, Thai_ABOVE4, Thai_BELOW1, Thai_BELOW2, Thai_AM};

   switch(c)
    {
        case 0xE31:
        case 0xE34:
        case 0xE35:
        case 0xE36:
        case 0xE37: return Thai_ABOVE1;
        case 0xE47:
        case 0xE4D: return Thai_ABOVE2;
        case 0xE48:
        case 0xE49:
        case 0xE4A:
        case 0xE4B: return Thai_ABOVE3;
        case 0xE4C:
        case 0xE4E: return Thai_ABOVE4;
        case 0xE38:
        case 0xE39: return Thai_BELOW1;
        case 0xE3A: return Thai_BELOW2;
        case 0xE33: return Thai_AM;
        default: return Thai_Norm;
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
          int benchRet = combining_lexical_Thai(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int benchRet = combining_lexical_Thai(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int benchRet = combining_lexical_Thai(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
