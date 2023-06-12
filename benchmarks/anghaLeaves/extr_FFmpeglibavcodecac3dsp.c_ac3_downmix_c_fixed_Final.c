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
       3            empty\n\
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
typedef  int int64_t ;
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void ac3_downmix_c_fixed(int32_t **samples, int16_t **matrix,
                                int out_ch, int in_ch, int len)
{
    int i, j;
    int64_t v0, v1;
    if (out_ch == 2) {
        for (i = 0; i < len; i++) {
            v0 = v1 = 0;
            for (j = 0; j < in_ch; j++) {
                v0 += (int64_t)samples[j][i] * matrix[0][j];
                v1 += (int64_t)samples[j][i] * matrix[1][j];
            }
            samples[0][i] = (v0+2048)>>12;
            samples[1][i] = (v1+2048)>>12;
        }
    } else if (out_ch == 1) {
        for (i = 0; i < len; i++) {
            v0 = 0;
            for (j = 0; j < in_ch; j++)
                v0 += (int64_t)samples[j][i] * matrix[0][j];
            samples[0][i] = (v0+2048)>>12;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int out_ch = 100;
        
          int in_ch = 100;
        
          int len = 100;
        
          int _len_samples0 = 1;
          int ** samples = (int **) malloc(_len_samples0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (int *) malloc(_len_samples1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_matrix0 = 1;
          int ** matrix = (int **) malloc(_len_matrix0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (int *) malloc(_len_matrix1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          ac3_downmix_c_fixed(samples,matrix,out_ch,in_ch,len);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int out_ch = 255;
        
          int in_ch = 255;
        
          int len = 255;
        
          int _len_samples0 = 65025;
          int ** samples = (int **) malloc(_len_samples0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (int *) malloc(_len_samples1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_matrix0 = 65025;
          int ** matrix = (int **) malloc(_len_matrix0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (int *) malloc(_len_matrix1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          ac3_downmix_c_fixed(samples,matrix,out_ch,in_ch,len);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int out_ch = 10;
        
          int in_ch = 10;
        
          int len = 10;
        
          int _len_samples0 = 100;
          int ** samples = (int **) malloc(_len_samples0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (int *) malloc(_len_samples1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_matrix0 = 100;
          int ** matrix = (int **) malloc(_len_matrix0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (int *) malloc(_len_matrix1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          ac3_downmix_c_fixed(samples,matrix,out_ch,in_ch,len);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int out_ch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int in_ch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_samples0 = 1;
          int ** samples = (int **) malloc(_len_samples0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            int _len_samples1 = 1;
            samples[_i0] = (int *) malloc(_len_samples1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_samples1; _i1++) {
              samples[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int _len_matrix0 = 1;
          int ** matrix = (int **) malloc(_len_matrix0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_matrix0; _i0++) {
            int _len_matrix1 = 1;
            matrix[_i0] = (int *) malloc(_len_matrix1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_matrix1; _i1++) {
              matrix[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          ac3_downmix_c_fixed(samples,matrix,out_ch,in_ch,len);
          for(int i1 = 0; i1 < _len_samples0; i1++) {
              free(samples[i1]);
          }
          free(samples);
          for(int i1 = 0; i1 < _len_matrix0; i1++) {
              free(matrix[i1]);
          }
          free(matrix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
