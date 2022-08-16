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
       0            big-arr-10x\n\
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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static void decode_3_pulses_10bits(uint16_t fixed_index, float *cod)
{
    float sign;
    int pos;

    sign = (fixed_index & 0x200) ? -1.0 : 1.0;

    pos = ((fixed_index        & 0x7) * 7) + 4;
    cod[pos] += sign;
    pos = (((fixed_index >> 3) & 0x7) * 7) + 2;
    cod[pos] -= sign;
    pos = (((fixed_index >> 6) & 0x7) * 7);
    cod[pos] += sign;
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

    // big-arr-10x
    case 0:
    {
          int fixed_index = 10;
          int _len_cod0 = 100;
          float * cod = (float *) malloc(_len_cod0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_cod0; _i0++) {
            cod[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_3_pulses_10bits(fixed_index,cod);
          free(cod);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
