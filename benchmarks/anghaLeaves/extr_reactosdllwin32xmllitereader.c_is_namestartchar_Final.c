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
typedef  char WCHAR ;
typedef  int BOOL ;

/* Variables and functions */

__attribute__((used)) static inline BOOL is_namestartchar(WCHAR ch)
{
    return (ch == ':') || (ch >= 'A' && ch <= 'Z') ||
           (ch == '_') || (ch >= 'a' && ch <= 'z') ||
           (ch >= 0xc0   && ch <= 0xd6)   ||
           (ch >= 0xd8   && ch <= 0xf6)   ||
           (ch >= 0xf8   && ch <= 0x2ff)  ||
           (ch >= 0x370  && ch <= 0x37d)  ||
           (ch >= 0x37f  && ch <= 0x1fff) ||
           (ch >= 0x200c && ch <= 0x200d) ||
           (ch >= 0x2070 && ch <= 0x218f) ||
           (ch >= 0x2c00 && ch <= 0x2fef) ||
           (ch >= 0x3001 && ch <= 0xd7ff) ||
           (ch >= 0xd800 && ch <= 0xdbff) || /* high surrogate */
           (ch >= 0xdc00 && ch <= 0xdfff) || /* low surrogate */
           (ch >= 0xf900 && ch <= 0xfdcf) ||
           (ch >= 0xfdf0 && ch <= 0xfffd);
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
          char ch = 100;
          int benchRet = is_namestartchar(ch);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          char ch = 255;
          int benchRet = is_namestartchar(ch);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char ch = 10;
          int benchRet = is_namestartchar(ch);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
