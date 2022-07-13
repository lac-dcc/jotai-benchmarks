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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  scalar_t__* PBYTE ;
typedef  int DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */

__attribute__((used)) static __inline void
_FixStringA(PBYTE String, DWORD cbString)
{
    const PBYTE pLastCharacter = &String[cbString / sizeof(BYTE) - 1];
    PBYTE p = String;

    while (*p)
    {
        if (p == pLastCharacter)
        {
            *p = 0;
            break;
        }

        p++;
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

    // big-arr
    case 0:
    {
          int cbString = 255;
          int _len_String0 = 65025;
          long * String = (long *) malloc(_len_String0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_String0; _i0++) {
            String[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _FixStringA(String,cbString);
          free(String);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int cbString = 10;
          int _len_String0 = 100;
          long * String = (long *) malloc(_len_String0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_String0; _i0++) {
            String[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _FixStringA(String,cbString);
          free(String);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
