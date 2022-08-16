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

/* Variables and functions */
 int NPY_BOOL ; 
 int NPY_BYTE ; 
 int NPY_CDOUBLE ; 
 int NPY_CFLOAT ; 
 int NPY_CLONGDOUBLE ; 
 int NPY_DOUBLE ; 
 int NPY_FLOAT ; 
 int NPY_HALF ; 
 int NPY_INT ; 
 int NPY_INT16 ; 
 int NPY_INT32 ; 
 int NPY_INT64 ; 
 int NPY_LONG ; 
 int NPY_LONGDOUBLE ; 
 int NPY_LONGLONG ; 
 int NPY_SHORT ; 
 int NPY_UBYTE ; 
 int NPY_UINT ; 
 int NPY_UINT16 ; 
 int NPY_UINT32 ; 
 int NPY_UINT64 ; 
 int NPY_ULONG ; 
 int NPY_ULONGLONG ; 
 int NPY_USHORT ; 

__attribute__((used)) static int
_pep3118_letter_to_type(char letter, int native, int complex)
{
    switch (letter)
    {
    case '?': return NPY_BOOL;
    case 'b': return NPY_BYTE;
    case 'B': return NPY_UBYTE;
    case 'h': return native ? NPY_SHORT : NPY_INT16;
    case 'H': return native ? NPY_USHORT : NPY_UINT16;
    case 'i': return native ? NPY_INT : NPY_INT32;
    case 'I': return native ? NPY_UINT : NPY_UINT32;
    case 'l': return native ? NPY_LONG : NPY_INT32;
    case 'L': return native ? NPY_ULONG : NPY_UINT32;
    case 'q': return native ? NPY_LONGLONG : NPY_INT64;
    case 'Q': return native ? NPY_ULONGLONG : NPY_UINT64;
    case 'e': return NPY_HALF;
    case 'f': return complex ? NPY_CFLOAT : NPY_FLOAT;
    case 'd': return complex ? NPY_CDOUBLE : NPY_DOUBLE;
    case 'g': return native ? (complex ? NPY_CLONGDOUBLE : NPY_LONGDOUBLE) : -1;
    default:
        /* Other unhandled cases */
        return -1;
    }
    return -1;
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
          char letter = 100;
          int native = 100;
          int complex = 100;
          int benchRet = _pep3118_letter_to_type(letter,native,complex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          char letter = 255;
          int native = 255;
          int complex = 255;
          int benchRet = _pep3118_letter_to_type(letter,native,complex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char letter = 10;
          int native = 10;
          int complex = 10;
          int benchRet = _pep3118_letter_to_type(letter,native,complex);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
