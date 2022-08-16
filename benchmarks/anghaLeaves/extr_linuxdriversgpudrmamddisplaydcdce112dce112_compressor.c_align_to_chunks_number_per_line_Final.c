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
typedef  int uint32_t ;
struct dce112_compressor {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t align_to_chunks_number_per_line(
	struct dce112_compressor *cp110,
	uint32_t pixels)
{
	return 256 * ((pixels + 255) / 256);
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
          int pixels = 100;
          int _len_cp1100 = 1;
          struct dce112_compressor * cp110 = (struct dce112_compressor *) malloc(_len_cp1100*sizeof(struct dce112_compressor));
          for(int _i0 = 0; _i0 < _len_cp1100; _i0++) {
            cp110[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = align_to_chunks_number_per_line(cp110,pixels);
          printf("%d\n", benchRet); 
          free(cp110);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pixels = 10;
          int _len_cp1100 = 100;
          struct dce112_compressor * cp110 = (struct dce112_compressor *) malloc(_len_cp1100*sizeof(struct dce112_compressor));
          for(int _i0 = 0; _i0 < _len_cp1100; _i0++) {
            cp110[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = align_to_chunks_number_per_line(cp110,pixels);
          printf("%d\n", benchRet); 
          free(cp110);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
