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
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static void Encode(unsigned char *output, uint32_t *input, unsigned int len)
{
	unsigned int i, j;

	for (i = 0, j = 0; j < len; i++, j += 4) {
		output[j] = (unsigned char) (input[i] & 0xff);
		output[j + 1] = (unsigned char) ((input[i] >> 8) & 0xff);
		output[j + 2] = (unsigned char) ((input[i] >> 16) & 0xff);
		output[j + 3] = (unsigned char) ((input[i] >> 24) & 0xff);
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
          unsigned int len = 255;
        
          int _len_output0 = 65025;
          unsigned char * output = (unsigned char *) malloc(_len_output0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_input0 = 65025;
          int * input = (int *) malloc(_len_input0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          Encode(output,input,len);
          free(output);
          free(input);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int len = 10;
        
          int _len_output0 = 100;
          unsigned char * output = (unsigned char *) malloc(_len_output0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_input0 = 100;
          int * input = (int *) malloc(_len_input0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          Encode(output,input,len);
          free(output);
          free(input);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
