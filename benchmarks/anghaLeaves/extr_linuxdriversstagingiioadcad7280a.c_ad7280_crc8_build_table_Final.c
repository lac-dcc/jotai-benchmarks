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
 unsigned char HIGHBIT ; 
 unsigned char POLYNOM ; 

__attribute__((used)) static void ad7280_crc8_build_table(unsigned char *crc_tab)
{
	unsigned char bit, crc;
	int cnt, i;

	for (cnt = 0; cnt < 256; cnt++) {
		crc = cnt;
		for (i = 0; i < 8; i++) {
			bit = crc & HIGHBIT;
			crc <<= 1;
			if (bit)
				crc ^= POLYNOM;
		}
		crc_tab[cnt] = crc;
	}
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 36616
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 16903
          // ------------------------------- 
          // static_instructions_O2 : 86
          // dynamic_instructions_O2 : 896
          // ------------------------------- 
          // static_instructions_O3 : 86
          // dynamic_instructions_O3 : 896
          // ------------------------------- 
          // static_instructions_Ofast : 86
          // dynamic_instructions_Ofast : 896
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 16390
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 21257
          // ------------------------------- 

          int _len_crc_tab0 = 65025;
          unsigned char * crc_tab = (unsigned char *) malloc(_len_crc_tab0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_crc_tab0; _i0++) {
            crc_tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ad7280_crc8_build_table(crc_tab);
          free(crc_tab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
