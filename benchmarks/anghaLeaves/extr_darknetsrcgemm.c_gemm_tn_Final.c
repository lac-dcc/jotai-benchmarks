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

void gemm_tn(int M, int N, int K, float ALPHA, 
        float *A, int lda, 
        float *B, int ldb,
        float *C, int ldc)
{
    int i,j,k;
    #pragma omp parallel for
    for(i = 0; i < M; ++i){
        for(k = 0; k < K; ++k){
            register float A_PART = ALPHA*A[k*lda+i];
            for(j = 0; j < N; ++j){
                C[i*ldc+j] += A_PART*B[k*ldb+j];
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
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 349512453
          // ------------------------------- 
          // static_instructions_O1 : 59
          // dynamic_instructions_O1 : 116982299
          // ------------------------------- 
          // static_instructions_O2 : 181
          // dynamic_instructions_O2 : 28942047
          // ------------------------------- 
          // static_instructions_O3 : 179
          // dynamic_instructions_O3 : 28876513
          // ------------------------------- 
          // static_instructions_Ofast : 179
          // dynamic_instructions_Ofast : 28876513
          // ------------------------------- 
          // static_instructions_Os : 55
          // dynamic_instructions_Os : 116851993
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 133498647
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
        
          gemm_tn(M,N,K,ALPHA,A,lda,B,ldb,C,ldc);
          free(A);
          free(B);
          free(C);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 23138
          // ------------------------------- 
          // static_instructions_O1 : 59
          // dynamic_instructions_O1 : 8519
          // ------------------------------- 
          // static_instructions_O2 : 145
          // dynamic_instructions_O2 : 6787
          // ------------------------------- 
          // static_instructions_O3 : 142
          // dynamic_instructions_O3 : 6568
          // ------------------------------- 
          // static_instructions_Ofast : 142
          // dynamic_instructions_Ofast : 6568
          // ------------------------------- 
          // static_instructions_Os : 55
          // dynamic_instructions_Os : 8308
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 9417
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
        
          gemm_tn(M,N,K,ALPHA,A,lda,B,ldb,C,ldc);
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
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
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
        
          gemm_tn(M,N,K,ALPHA,A,lda,B,ldb,C,ldc);
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
