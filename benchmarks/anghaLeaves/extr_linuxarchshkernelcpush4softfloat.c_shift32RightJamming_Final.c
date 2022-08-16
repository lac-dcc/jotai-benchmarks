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
       1            big-arr-10x\n\
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
typedef  int int16 ;
typedef  int bits32 ;

/* Variables and functions */

void shift32RightJamming(bits32 a, int16 count, bits32 * zPtr)
{
	bits32 z;
	if (count == 0) {
		z = a;
	} else if (count < 32) {
		z = (a >> count) | ((a << ((-count) & 31)) != 0);
	} else {
		z = (a != 0);
	}
	*zPtr = z;
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
          int a = 100;
          int count = 100;
          int _len_zPtr0 = 1;
          int * zPtr = (int *) malloc(_len_zPtr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_zPtr0; _i0++) {
            zPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift32RightJamming(a,count,zPtr);
          free(zPtr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int a = 10;
          int count = 10;
          int _len_zPtr0 = 100;
          int * zPtr = (int *) malloc(_len_zPtr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_zPtr0; _i0++) {
            zPtr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift32RightJamming(a,count,zPtr);
          free(zPtr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
