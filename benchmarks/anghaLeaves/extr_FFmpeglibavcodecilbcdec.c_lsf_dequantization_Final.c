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
typedef  int int16_t ;

/* Variables and functions */
 int LPC_FILTERORDER ; 
 int LSF_NSPLIT ; 
 int* lsf_codebook ; 
 int* lsf_dim_codebook ; 
 int* lsf_size_codebook ; 

__attribute__((used)) static void lsf_dequantization(int16_t *lsfdeq, int16_t *index, int16_t lpc_n)
{
    int i, j, pos = 0, cb_pos = 0;

    for (i = 0; i < LSF_NSPLIT; i++) {
        for (j = 0; j < lsf_dim_codebook[i]; j++) {
            lsfdeq[pos + j] = lsf_codebook[cb_pos + index[i] * lsf_dim_codebook[i] + j];
        }

        pos    += lsf_dim_codebook[i];
        cb_pos += lsf_size_codebook[i] * lsf_dim_codebook[i];
    }

    if (lpc_n > 1) {
        pos = 0;
        cb_pos = 0;
        for (i = 0; i < LSF_NSPLIT; i++) {
            for (j = 0; j < lsf_dim_codebook[i]; j++) {
                lsfdeq[LPC_FILTERORDER + pos + j] = lsf_codebook[cb_pos +
                    index[LSF_NSPLIT + i] * lsf_dim_codebook[i] + j];
            }

            pos    += lsf_dim_codebook[i];
            cb_pos += lsf_size_codebook[i] * lsf_dim_codebook[i];
        }
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

    // int-bounds
    case 0:
    {
          int lpc_n = 100;
          int _len_lsfdeq0 = 1;
          int * lsfdeq = (int *) malloc(_len_lsfdeq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lsfdeq0; _i0++) {
            lsfdeq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index0 = 1;
          int * index = (int *) malloc(_len_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lsf_dequantization(lsfdeq,index,lpc_n);
          free(lsfdeq);
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
