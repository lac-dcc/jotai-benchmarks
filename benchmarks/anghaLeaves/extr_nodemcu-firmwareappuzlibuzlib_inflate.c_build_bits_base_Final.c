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
typedef  int ushort ;
typedef  int uchar ;

/* Variables and functions */

__attribute__((used)) static void build_bits_base (uchar *bits, ushort *base,
                             int delta, int first) {
  int i, sum;

  /* build bits table */
  for (i = 0; i < delta; ++i) bits[i] = 0;
  for (i = 0; i < 30 - delta; ++i) bits[i + delta] = i / delta;

  /* build base table */
  for (sum = first, i = 0; i < 30; ++i) {
    base[i] = sum;
    sum += 1 << bits[i];
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
          int delta = 255;
        
          int first = 255;
        
          int _len_bits0 = 65025;
          int * bits = (int *) malloc(_len_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_base0 = 65025;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          build_bits_base(bits,base,delta,first);
          free(bits);
          free(base);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int delta = 10;
        
          int first = 10;
        
          int _len_bits0 = 100;
          int * bits = (int *) malloc(_len_bits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bits0; _i0++) {
            bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_base0 = 100;
          int * base = (int *) malloc(_len_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          build_bits_base(bits,base,delta,first);
          free(bits);
          free(base);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
