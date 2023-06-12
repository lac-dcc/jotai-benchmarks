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
       0            big-arr\n\
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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static void
ahci_checksum(uint8_t *buf, int size)
{
	int i;
	uint8_t sum = 0;

	for (i = 0; i < size - 1; i++)
		sum += buf[i];
	buf[size - 1] = (uint8_t) (0x100 - sum);
}

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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 3576
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 1032
          // ------------------------------- 
          // static_instructions_O2 : 77
          // dynamic_instructions_O2 : 225
          // ------------------------------- 
          // static_instructions_O3 : 77
          // dynamic_instructions_O3 : 225
          // ------------------------------- 
          // static_instructions_Ofast : 77
          // dynamic_instructions_Ofast : 225
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 1031
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 1285
          // ------------------------------- 

          int size = 255;
        
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ahci_checksum(buf,size);
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 146
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 52
          // ------------------------------- 
          // static_instructions_O2 : 56
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 56
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 56
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int size = 10;
        
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ahci_checksum(buf,size);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
