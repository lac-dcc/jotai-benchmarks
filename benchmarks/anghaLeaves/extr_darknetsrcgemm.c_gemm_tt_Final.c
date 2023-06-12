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

void gemm_tt(int M, int N, int K, float ALPHA, 
        float *A, int lda, 
        float *B, int ldb,
        float *C, int ldc)
{
    int i,j,k;
    #pragma omp parallel for
    for(i = 0; i < M; ++i){
        for(j = 0; j < N; ++j){
            register float sum = 0;
            for(k = 0; k < K; ++k){
                sum += ALPHA*A[i+k*lda]*B[k+j*ldb];
            }
            C[i*ldc+j] += sum;
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
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 399321603
          // ------------------------------- 
          // static_instructions_O1 : 64
          // dynamic_instructions_O1 : 133564186
          // ------------------------------- 
          // static_instructions_O2 : 106
          // dynamic_instructions_O2 : 101507638
          // ------------------------------- 
          // static_instructions_O3 : 122
          // dynamic_instructions_O3 : 101052994
          // ------------------------------- 
          // static_instructions_Ofast : 137
          // dynamic_instructions_Ofast : 101963599
          // ------------------------------- 
          // static_instructions_Os : 60
          // dynamic_instructions_Os : 133433880
          // ------------------------------- 
          // static_instructions_Oz : 57
          // dynamic_instructions_Oz : 150080535
          // ------------------------------- 

          int M = 255;
        
          int N = 255;
        
          int K = 255;
        
          float ALPHA = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int lda = 255;
        
          int ldb = 255;
        
          int ldc = 255;
        
          int _len_A0 = 65025;
          float * A = (float *) malloc(_len_A0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_B0 = 65025;
          float * B = (float *) malloc(_len_B0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_C0 = 65025;
          float * C = (float *) malloc(_len_C0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          gemm_tt(M,N,K,ALPHA,A,lda,B,ldb,C,ldc);
          free(A);
          free(B);
          free(C);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 26238
          // ------------------------------- 
          // static_instructions_O1 : 64
          // dynamic_instructions_O1 : 9541
          // ------------------------------- 
          // static_instructions_O2 : 86
          // dynamic_instructions_O2 : 7883
          // ------------------------------- 
          // static_instructions_O3 : 107
          // dynamic_instructions_O3 : 7724
          // ------------------------------- 
          // static_instructions_Ofast : 125
          // dynamic_instructions_Ofast : 9434
          // ------------------------------- 
          // static_instructions_Os : 60
          // dynamic_instructions_Os : 9330
          // ------------------------------- 
          // static_instructions_Oz : 57
          // dynamic_instructions_Oz : 10440
          // ------------------------------- 

          int M = 10;
        
          int N = 10;
        
          int K = 10;
        
          float ALPHA = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int lda = 10;
        
          int ldb = 10;
        
          int ldc = 10;
        
          int _len_A0 = 100;
          float * A = (float *) malloc(_len_A0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_B0 = 100;
          float * B = (float *) malloc(_len_B0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_C0 = 100;
          float * C = (float *) malloc(_len_C0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          gemm_tt(M,N,K,ALPHA,A,lda,B,ldb,C,ldc);
          free(A);
          free(B);
          free(C);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int M = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int N = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int K = ((-2 * (next_i()%2)) + 1) * next_i();
        
          float ALPHA = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int lda = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int ldb = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int ldc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_A0 = 1;
          float * A = (float *) malloc(_len_A0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_B0 = 1;
          float * B = (float *) malloc(_len_B0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_C0 = 1;
          float * C = (float *) malloc(_len_C0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          gemm_tt(M,N,K,ALPHA,A,lda,B,ldb,C,ldc);
          free(A);
          free(B);
          free(C);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
