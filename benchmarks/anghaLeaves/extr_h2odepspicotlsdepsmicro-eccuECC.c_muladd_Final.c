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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int uECC_word_t ;
typedef  int uECC_dword_t ;

/* Variables and functions */
 int uECC_WORD_BITS ; 

__attribute__((used)) static void muladd(uECC_word_t a,
                   uECC_word_t b,
                   uECC_word_t *r0,
                   uECC_word_t *r1,
                   uECC_word_t *r2) {
#if uECC_WORD_SIZE == 8 && !SUPPORTS_INT128
    uint64_t a0 = a & 0xffffffffull;
    uint64_t a1 = a >> 32;
    uint64_t b0 = b & 0xffffffffull;
    uint64_t b1 = b >> 32;

    uint64_t i0 = a0 * b0;
    uint64_t i1 = a0 * b1;
    uint64_t i2 = a1 * b0;
    uint64_t i3 = a1 * b1;

    uint64_t p0, p1;

    i2 += (i0 >> 32);
    i2 += i1;
    if (i2 < i1) { /* overflow */
        i3 += 0x100000000ull;
    }

    p0 = (i0 & 0xffffffffull) | (i2 << 32);
    p1 = i3 + (i2 >> 32);

    *r0 += p0;
    *r1 += (p1 + (*r0 < p0));
    *r2 += ((*r1 < p1) || (*r1 == p1 && *r0 < p0));
#else
    uECC_dword_t p = (uECC_dword_t)a * b;
    uECC_dword_t r01 = ((uECC_dword_t)(*r1) << uECC_WORD_BITS) | *r0;
    r01 += p;
    *r2 += (r01 < p);
    *r1 = r01 >> uECC_WORD_BITS;
    *r0 = (uECC_word_t)r01;
#endif
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
          int a = 100;
          int b = 100;
          int _len_r00 = 1;
          int * r0 = (int *) malloc(_len_r00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r00; _i0++) {
            r0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r10 = 1;
          int * r1 = (int *) malloc(_len_r10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 1;
          int * r2 = (int *) malloc(_len_r20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          muladd(a,b,r0,r1,r2);
          free(r0);
          free(r1);
          free(r2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          int b = 255;
          int _len_r00 = 65025;
          int * r0 = (int *) malloc(_len_r00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r00; _i0++) {
            r0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r10 = 65025;
          int * r1 = (int *) malloc(_len_r10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 65025;
          int * r2 = (int *) malloc(_len_r20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          muladd(a,b,r0,r1,r2);
          free(r0);
          free(r1);
          free(r2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          int b = 10;
          int _len_r00 = 100;
          int * r0 = (int *) malloc(_len_r00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r00; _i0++) {
            r0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r10 = 100;
          int * r1 = (int *) malloc(_len_r10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 100;
          int * r2 = (int *) malloc(_len_r20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          muladd(a,b,r0,r1,r2);
          free(r0);
          free(r1);
          free(r2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
