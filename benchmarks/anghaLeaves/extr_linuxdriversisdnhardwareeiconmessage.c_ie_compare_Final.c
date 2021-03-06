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
       0            int-bounds\n\
       1            big-arr\n\
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
typedef  size_t word ;
typedef  int byte ;

/* Variables and functions */

__attribute__((used)) static byte ie_compare(byte *ie1, byte *ie2)
{
	word i;
	if (!ie1 || !ie2) return false;
	if (!ie1[0]) return false;
	for (i = 0; i < (word)(ie1[0] + 1); i++) if (ie1[i] != ie2[i]) return false;
	return true;
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
          int _len_ie10 = 1;
          int * ie1 = (int *) malloc(_len_ie10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ie10; _i0++) {
            ie1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ie20 = 1;
          int * ie2 = (int *) malloc(_len_ie20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ie20; _i0++) {
            ie2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ie_compare(ie1,ie2);
          printf("%d\n", benchRet); 
          free(ie1);
          free(ie2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ie10 = 65025;
          int * ie1 = (int *) malloc(_len_ie10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ie10; _i0++) {
            ie1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ie20 = 65025;
          int * ie2 = (int *) malloc(_len_ie20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ie20; _i0++) {
            ie2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ie_compare(ie1,ie2);
          printf("%d\n", benchRet); 
          free(ie1);
          free(ie2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
