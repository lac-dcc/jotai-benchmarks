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

/* Variables and functions */

unsigned long
DwDecodeUleb128(unsigned long *pResult, char *pc)
{
	unsigned long ulResult = 0;
	unsigned long ulShift = 0;
	unsigned char current;
	unsigned long ulSize = 0;

	do
	{
		current = pc[ulSize];
		ulSize++;
		ulResult |= (current & 0x7f) << ulShift;
		ulShift += 7;
	}
	while (current & 0x80);

    *pResult = ulResult;
	return ulSize;
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
          int _len_pResult0 = 65025;
          unsigned long * pResult = (unsigned long *) malloc(_len_pResult0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pResult0; _i0++) {
            pResult[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pc0 = 65025;
          char * pc = (char *) malloc(_len_pc0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
            pc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = DwDecodeUleb128(pResult,pc);
          printf("%lu\n", benchRet); 
          free(pResult);
          free(pc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pResult0 = 100;
          unsigned long * pResult = (unsigned long *) malloc(_len_pResult0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pResult0; _i0++) {
            pResult[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pc0 = 100;
          char * pc = (char *) malloc(_len_pc0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
            pc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = DwDecodeUleb128(pResult,pc);
          printf("%lu\n", benchRet); 
          free(pResult);
          free(pc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
