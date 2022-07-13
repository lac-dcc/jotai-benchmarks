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

/* Variables and functions */

char *
AMF_EncodeInt16(char *output, char *outend, short nVal)
{
    if (output+2 > outend)
        return NULL;

    output[1] = nVal & 0xff;
    output[0] = nVal >> 8;
    return output+2;
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
          short nVal = 255;
          int _len_output0 = 65025;
          char * output = (char *) malloc(_len_output0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outend0 = 65025;
          char * outend = (char *) malloc(_len_outend0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_outend0; _i0++) {
            outend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = AMF_EncodeInt16(output,outend,nVal);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(output);
          free(outend);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          short nVal = 10;
          int _len_output0 = 100;
          char * output = (char *) malloc(_len_output0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outend0 = 100;
          char * outend = (char *) malloc(_len_outend0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_outend0; _i0++) {
            outend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = AMF_EncodeInt16(output,outend,nVal);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(output);
          free(outend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
