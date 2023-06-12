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
       2            empty\n\
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

__attribute__((used)) static int generate_raw_frame(uint16_t *frame_data, int i, int sample_rate,
                              int channels, int frame_size)
{
    int j, k;

    for (j = 0; j < frame_size; j++) {
        frame_data[channels * j] = 10000 * ((j / 10 * i) % 2);
        for (k = 1; k < channels; k++)
            frame_data[channels * j + k] = frame_data[channels * j] * (k + 1);
    }
    return 0;
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
          // static_instructions_O0 : 55
          // dynamic_instructions_O0 : 1366814
          // ------------------------------- 
          // static_instructions_O1 : 53
          // dynamic_instructions_O1 : 459278
          // ------------------------------- 
          // static_instructions_O2 : 167
          // dynamic_instructions_O2 : 200734
          // ------------------------------- 
          // static_instructions_O3 : 164
          // dynamic_instructions_O3 : 199715
          // ------------------------------- 
          // static_instructions_Ofast : 164
          // dynamic_instructions_Ofast : 199715
          // ------------------------------- 
          // static_instructions_Os : 86
          // dynamic_instructions_Os : 1203882
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 392976
          // ------------------------------- 

          int i = 255;
        
          int sample_rate = 255;
        
          int channels = 255;
        
          int frame_size = 255;
        
          int _len_frame_data0 = 65025;
          int * frame_data = (int *) malloc(_len_frame_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame_data0; _i0++) {
            frame_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = generate_raw_frame(frame_data,i,sample_rate,channels,frame_size);
          printf("%d\n", benchRet); 
          free(frame_data);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 55
          // dynamic_instructions_O0 : 2164
          // ------------------------------- 
          // static_instructions_O1 : 53
          // dynamic_instructions_O1 : 883
          // ------------------------------- 
          // static_instructions_O2 : 118
          // dynamic_instructions_O2 : 739
          // ------------------------------- 
          // static_instructions_O3 : 116
          // dynamic_instructions_O3 : 710
          // ------------------------------- 
          // static_instructions_Ofast : 116
          // dynamic_instructions_Ofast : 710
          // ------------------------------- 
          // static_instructions_Os : 86
          // dynamic_instructions_Os : 2037
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 731
          // ------------------------------- 

          int i = 10;
        
          int sample_rate = 10;
        
          int channels = 10;
        
          int frame_size = 10;
        
          int _len_frame_data0 = 100;
          int * frame_data = (int *) malloc(_len_frame_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame_data0; _i0++) {
            frame_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = generate_raw_frame(frame_data,i,sample_rate,channels,frame_size);
          printf("%d\n", benchRet); 
          free(frame_data);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_frame_data0 = 1;
          int * frame_data = (int *) malloc(_len_frame_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frame_data0; _i0++) {
            frame_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = generate_raw_frame(frame_data,i,sample_rate,channels,frame_size);
          printf("%d\n", benchRet); 
          free(frame_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
