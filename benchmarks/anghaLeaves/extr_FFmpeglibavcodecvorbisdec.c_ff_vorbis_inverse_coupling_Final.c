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

/* Variables and functions */

void ff_vorbis_inverse_coupling(float *mag, float *ang, intptr_t blocksize)
{
    int i;
    for (i = 0;  i < blocksize;  i++) {
        if (mag[i] > 0.0) {
            if (ang[i] > 0.0) {
                ang[i] = mag[i] - ang[i];
            } else {
                float temp = ang[i];
                ang[i]     = mag[i];
                mag[i]    += temp;
            }
        } else {
            if (ang[i] > 0.0) {
                ang[i] += mag[i];
            } else {
                float temp = ang[i];
                ang[i]     = mag[i];
                mag[i]    -= temp;
            }
        }
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 8426
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 3069
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 3069
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 3069
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 3069
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 3323
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 3580
          // ------------------------------- 

          long blocksize = 255;
        
          int _len_mag0 = 65025;
          float * mag = (float *) malloc(_len_mag0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mag0; _i0++) {
            mag[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_ang0 = 65025;
          float * ang = (float *) malloc(_len_ang0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ang0; _i0++) {
            ang[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          ff_vorbis_inverse_coupling(mag,ang,blocksize);
          free(mag);
          free(ang);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 341
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 129
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 129
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 129
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 129
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 138
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 150
          // ------------------------------- 

          long blocksize = 10;
        
          int _len_mag0 = 100;
          float * mag = (float *) malloc(_len_mag0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mag0; _i0++) {
            mag[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_ang0 = 100;
          float * ang = (float *) malloc(_len_ang0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ang0; _i0++) {
            ang[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          ff_vorbis_inverse_coupling(mag,ang,blocksize);
          free(mag);
          free(ang);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mag0 = 1;
          float * mag = (float *) malloc(_len_mag0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mag0; _i0++) {
            mag[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_ang0 = 1;
          float * ang = (float *) malloc(_len_ang0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ang0; _i0++) {
            ang[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          ff_vorbis_inverse_coupling(mag,ang,blocksize);
          free(mag);
          free(ang);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
