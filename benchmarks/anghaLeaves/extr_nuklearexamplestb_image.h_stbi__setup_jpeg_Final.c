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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  resample_row_hv_2_kernel; int /*<<< orphan*/  YCbCr_to_RGB_kernel; int /*<<< orphan*/  idct_block_kernel; } ;
typedef  TYPE_1__ stbi__jpeg ;

/* Variables and functions */
 int /*<<< orphan*/  stbi__YCbCr_to_RGB_row ; 
 int /*<<< orphan*/  stbi__idct_block ; 
 int /*<<< orphan*/  stbi__resample_row_hv_2 ; 

__attribute__((used)) static void stbi__setup_jpeg(stbi__jpeg *j)
{
   j->idct_block_kernel = stbi__idct_block;
   j->YCbCr_to_RGB_kernel = stbi__YCbCr_to_RGB_row;
   j->resample_row_hv_2_kernel = stbi__resample_row_hv_2;

#ifdef STBI_SSE2
   if (stbi__sse2_available()) {
      j->idct_block_kernel = stbi__idct_simd;
      #ifndef STBI_JPEG_OLD
      j->YCbCr_to_RGB_kernel = stbi__YCbCr_to_RGB_simd;
      #endif
      j->resample_row_hv_2_kernel = stbi__resample_row_hv_2_simd;
   }
#endif

#ifdef STBI_NEON
   j->idct_block_kernel = stbi__idct_simd;
   #ifndef STBI_JPEG_OLD
   j->YCbCr_to_RGB_kernel = stbi__YCbCr_to_RGB_simd;
   #endif
   j->resample_row_hv_2_kernel = stbi__resample_row_hv_2_simd;
#endif
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
          int _len_j0 = 1;
          struct TYPE_3__ * j = (struct TYPE_3__ *) malloc(_len_j0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_j0; _i0++) {
            j[_i0].resample_row_hv_2_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].YCbCr_to_RGB_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].idct_block_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__setup_jpeg(j);
          free(j);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
