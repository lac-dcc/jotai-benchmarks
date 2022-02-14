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

__attribute__((used)) static int countdiffs(unsigned char *buf, unsigned char *check_buf,
		      unsigned offset, unsigned len, unsigned *bytesp,
		      unsigned *bitsp)
{
	unsigned i, bit;
	int first = -1;

	for (i = offset; i < offset + len; i++)
		if (buf[i] != check_buf[i]) {
			first = i;
			break;
		}

	while (i < offset + len) {
		if (buf[i] != check_buf[i]) {
			(*bytesp)++;
			bit = 1;
			while (bit < 256) {
				if ((buf[i] & bit) != (check_buf[i] & bit))
					(*bitsp)++;
				bit <<= 1;
			}
		}
		i++;
	}

	return first;
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
          unsigned int offset = 255;
          unsigned int len = 255;
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_check_buf0 = 65025;
          unsigned char * check_buf = (unsigned char *) malloc(_len_check_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_check_buf0; _i0++) {
            check_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bytesp0 = 65025;
          unsigned int * bytesp = (unsigned int *) malloc(_len_bytesp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bytesp0; _i0++) {
            bytesp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bitsp0 = 65025;
          unsigned int * bitsp = (unsigned int *) malloc(_len_bitsp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bitsp0; _i0++) {
            bitsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = countdiffs(buf,check_buf,offset,len,bytesp,bitsp);
          printf("%d\n", benchRet); 
          free(buf);
          free(check_buf);
          free(bytesp);
          free(bitsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
