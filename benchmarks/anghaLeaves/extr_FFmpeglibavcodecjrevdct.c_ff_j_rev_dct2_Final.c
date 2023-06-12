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
typedef  int* DCTBLOCK ;

/* Variables and functions */
 int DCTSTRIDE ; 

void ff_j_rev_dct2(DCTBLOCK data){
  int d00, d01, d10, d11;

  data[0] += 4;
  d00 = data[0+0*DCTSTRIDE] + data[1+0*DCTSTRIDE];
  d01 = data[0+0*DCTSTRIDE] - data[1+0*DCTSTRIDE];
  d10 = data[0+1*DCTSTRIDE] + data[1+1*DCTSTRIDE];
  d11 = data[0+1*DCTSTRIDE] - data[1+1*DCTSTRIDE];

  data[0+0*DCTSTRIDE]= (d00 + d10)>>3;
  data[1+0*DCTSTRIDE]= (d01 + d11)>>3;
  data[0+1*DCTSTRIDE]= (d00 - d10)>>3;
  data[1+1*DCTSTRIDE]= (d01 - d11)>>3;
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
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ff_j_rev_dct2(data);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ff_j_rev_dct2(data);
          free(data);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
