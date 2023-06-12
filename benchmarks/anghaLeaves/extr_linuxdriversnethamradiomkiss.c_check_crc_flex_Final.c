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
       0            empty\n\
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
 unsigned short* crc_flex_table ; 

__attribute__((used)) static int check_crc_flex(unsigned char *cp, int size)
{
	unsigned short crc = 0xffff;

	if (size < 3)
		return -1;

	while (size--)
		crc = (crc << 8) ^ crc_flex_table[((crc >> 8) ^ *cp++) & 0xff];

	if ((crc & 0xffff) != 0x7070)
		return -1;

	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cp0 = 1;
          unsigned char * cp = (unsigned char *) malloc(_len_cp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = check_crc_flex(cp,size);
          printf("%d\n", benchRet); 
          free(cp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
