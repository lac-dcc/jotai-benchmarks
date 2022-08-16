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

/* Variables and functions */
 int CRCPOLY_BE ; 
 int CRC_BE_BITS ; 

__attribute__((used)) static void crc32init_be(uint32_t *crc32table_be)
{
	unsigned i, j;
	uint32_t crc = 0x80000000;

	for (i = 1; i < 1 << CRC_BE_BITS; i <<= 1) {
		crc = (crc << 1) ^ ((crc & 0x80000000) ? CRCPOLY_BE : 0);
		for (j = 0; j < i; j++)
			crc32table_be[i + j] = crc ^ crc32table_be[j];
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
          int _len_crc32table_be0 = 1;
          int * crc32table_be = (int *) malloc(_len_crc32table_be0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crc32table_be0; _i0++) {
            crc32table_be[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crc32init_be(crc32table_be);
          free(crc32table_be);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_crc32table_be0 = 100;
          int * crc32table_be = (int *) malloc(_len_crc32table_be0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crc32table_be0; _i0++) {
            crc32table_be[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crc32init_be(crc32table_be);
          free(crc32table_be);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
