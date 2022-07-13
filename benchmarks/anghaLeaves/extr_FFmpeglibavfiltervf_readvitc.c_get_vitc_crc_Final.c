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

/* Variables and functions */

__attribute__((used)) static uint8_t get_vitc_crc( uint8_t *line ) {
    uint8_t crc;

    crc = 0x01 | (line[0] << 2);
    crc ^= (line[0] >> 6) | 0x04 | (line[1] << 4);
    crc ^= (line[1] >> 4) | 0x10 | (line[2] << 6);
    crc ^= (line[2] >> 2) | 0x40;
    crc ^= line[3];
    crc ^= 0x01 | (line[4] << 2);
    crc ^= (line[4] >> 6) | 0x04 | (line[5] << 4);
    crc ^= (line[5] >> 4) | 0x10 | (line[6] << 6);
    crc ^= (line[6] >> 2) | 0x40;
    crc ^= line[7];
    crc ^= 0x01;
    crc = (crc >> 2) | (crc << 6);  // rotate byte right by two bits
    return crc;
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
          int _len_line0 = 65025;
          int * line = (int *) malloc(_len_line0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_vitc_crc(line);
          printf("%d\n", benchRet); 
          free(line);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_line0 = 100;
          int * line = (int *) malloc(_len_line0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_vitc_crc(line);
          printf("%d\n", benchRet); 
          free(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
