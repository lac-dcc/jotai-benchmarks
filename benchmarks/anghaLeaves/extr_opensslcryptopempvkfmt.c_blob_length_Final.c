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
       1            big-arr\n\
       2            big-arr-10x\n\
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

__attribute__((used)) static unsigned int blob_length(unsigned bitlen, int isdss, int ispub)
{
    unsigned int nbyte, hnbyte;
    nbyte = (bitlen + 7) >> 3;
    hnbyte = (bitlen + 15) >> 4;
    if (isdss) {

        /*
         * Expected length: 20 for q + 3 components bitlen each + 24 for seed
         * structure.
         */
        if (ispub)
            return 44 + 3 * nbyte;
        /*
         * Expected length: 20 for q, priv, 2 bitlen components + 24 for seed
         * structure.
         */
        else
            return 64 + 2 * nbyte;
    } else {
        /* Expected length: 4 for 'e' + 'n' */
        if (ispub)
            return 4 + nbyte;
        else
            /*
             * Expected length: 4 for 'e' and 7 other components. 2
             * components are bitlen size, 5 are bitlen/2
             */
            return 4 + 2 * nbyte + 5 * hnbyte;
    }

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
          unsigned int bitlen = 100;
          int isdss = 100;
          int ispub = 100;
          unsigned int benchRet = blob_length(bitlen,isdss,ispub);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int bitlen = 255;
          int isdss = 255;
          int ispub = 255;
          unsigned int benchRet = blob_length(bitlen,isdss,ispub);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int bitlen = 10;
          int isdss = 10;
          int ispub = 10;
          unsigned int benchRet = blob_length(bitlen,isdss,ispub);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
