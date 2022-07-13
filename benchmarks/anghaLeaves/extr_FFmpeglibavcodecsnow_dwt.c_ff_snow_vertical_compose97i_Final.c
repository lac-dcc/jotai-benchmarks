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
typedef  int IDWTELEM ;

/* Variables and functions */
 int W_AM ; 
 int W_AO ; 
 int W_AS ; 
 int W_BM ; 
 int W_BO ; 
 int W_BS ; 
 int W_CM ; 
 int W_CO ; 
 int W_CS ; 
 int W_DM ; 
 int W_DO ; 
 int W_DS ; 

void ff_snow_vertical_compose97i(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2,
                                 IDWTELEM *b3, IDWTELEM *b4, IDWTELEM *b5,
                                 int width)
{
    int i;

    for (i = 0; i < width; i++) {
        b4[i] -= (W_DM * (b3[i] + b5[i]) + W_DO) >> W_DS;
        b3[i] -= (W_CM * (b2[i] + b4[i]) + W_CO) >> W_CS;
        b2[i] += (W_BM * (b1[i] + b3[i]) + 4 * b2[i] + W_BO) >> W_BS;
        b1[i] += (W_AM * (b0[i] + b2[i]) + W_AO) >> W_AS;
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

    // big-arr
    case 0:
    {
          int width = 255;
          int _len_b00 = 65025;
          int * b0 = (int *) malloc(_len_b00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b00; _i0++) {
            b0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b10 = 65025;
          int * b1 = (int *) malloc(_len_b10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b10; _i0++) {
            b1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b20 = 65025;
          int * b2 = (int *) malloc(_len_b20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b20; _i0++) {
            b2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b30 = 65025;
          int * b3 = (int *) malloc(_len_b30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b30; _i0++) {
            b3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b40 = 65025;
          int * b4 = (int *) malloc(_len_b40*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b40; _i0++) {
            b4[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b50 = 65025;
          int * b5 = (int *) malloc(_len_b50*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b50; _i0++) {
            b5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_snow_vertical_compose97i(b0,b1,b2,b3,b4,b5,width);
          free(b0);
          free(b1);
          free(b2);
          free(b3);
          free(b4);
          free(b5);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int width = 10;
          int _len_b00 = 100;
          int * b0 = (int *) malloc(_len_b00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b00; _i0++) {
            b0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b10 = 100;
          int * b1 = (int *) malloc(_len_b10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b10; _i0++) {
            b1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b20 = 100;
          int * b2 = (int *) malloc(_len_b20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b20; _i0++) {
            b2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b30 = 100;
          int * b3 = (int *) malloc(_len_b30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b30; _i0++) {
            b3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b40 = 100;
          int * b4 = (int *) malloc(_len_b40*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b40; _i0++) {
            b4[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b50 = 100;
          int * b5 = (int *) malloc(_len_b50*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b50; _i0++) {
            b5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_snow_vertical_compose97i(b0,b1,b2,b3,b4,b5,width);
          free(b0);
          free(b1);
          free(b2);
          free(b3);
          free(b4);
          free(b5);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
