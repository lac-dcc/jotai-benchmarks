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

void ec_GFp_nistp_recode_scalar_bits(unsigned char *sign,
                                     unsigned char *digit, unsigned char in)
{
    unsigned char s, d;

    s = ~((in >> 5) - 1);       /* sets all bits to MSB(in), 'in' seen as
                                 * 6-bit value */
    d = (1 << 6) - in - 1;
    d = (d & s) | (in & ~s);
    d = (d >> 1) + (d & 1);

    *sign = s & 1;
    *digit = d;
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
          unsigned char in = 100;
          int _len_sign0 = 1;
          unsigned char * sign = (unsigned char *) malloc(_len_sign0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_sign0; _i0++) {
            sign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_digit0 = 1;
          unsigned char * digit = (unsigned char *) malloc(_len_digit0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_digit0; _i0++) {
            digit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ec_GFp_nistp_recode_scalar_bits(sign,digit,in);
          free(sign);
          free(digit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
