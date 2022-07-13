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
typedef  int uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static void jz_nand_correct_data(uint8_t *dat, int index, int mask)
{
	int offset = index & 0x7;
	uint16_t data;

	index += (index >> 3);

	data = dat[index];
	data |= dat[index+1] << 8;

	mask ^= (data >> offset) & 0x1ff;
	data &= ~(0x1ff << offset);
	data |= (mask << offset);

	dat[index] = data & 0xff;
	dat[index+1] = (data >> 8) & 0xff;
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
          int index = 255;
          int mask = 255;
          int _len_dat0 = 65025;
          int * dat = (int *) malloc(_len_dat0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dat0; _i0++) {
            dat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jz_nand_correct_data(dat,index,mask);
          free(dat);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int index = 10;
          int mask = 10;
          int _len_dat0 = 100;
          int * dat = (int *) malloc(_len_dat0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dat0; _i0++) {
            dat[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jz_nand_correct_data(dat,index,mask);
          free(dat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
