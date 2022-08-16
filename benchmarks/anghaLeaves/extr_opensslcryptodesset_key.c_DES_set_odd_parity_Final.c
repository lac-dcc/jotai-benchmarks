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
typedef  size_t* DES_cblock ;

/* Variables and functions */
 unsigned int DES_KEY_SZ ; 
 size_t* odd_parity ; 

void DES_set_odd_parity(DES_cblock *key)
{
    unsigned int i;

    for (i = 0; i < DES_KEY_SZ; i++)
        (*key)[i] = odd_parity[(*key)[i]];
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
          int _len_key0 = 1;
          unsigned long ** key = (unsigned long **) malloc(_len_key0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            int _len_key1 = 1;
            key[_i0] = (unsigned long *) malloc(_len_key1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_key1; _i1++) {
              key[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          DES_set_odd_parity(key);
          for(int i1 = 0; i1 < _len_key0; i1++) {
            int _len_key1 = 1;
              free(key[i1]);
          }
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
