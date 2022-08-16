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
typedef  int uint8_t ;
typedef  int /*<<< orphan*/  mrb_bool ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static inline mrb_bool
tr_bitmap_detect(uint8_t bitmap[32], uint8_t ch)
{
  uint8_t idx1 = ch / 8;
  uint8_t idx2 = ch % 8;
  if (bitmap[idx1] & (1<<idx2))
    return TRUE;
  return FALSE;
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
          int ch = 100;
          int _len_bitmap0 = 32;
          int * bitmap = (int *) malloc(_len_bitmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tr_bitmap_detect(bitmap,ch);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ch = 10;
          int _len_bitmap0 = 100;
          int * bitmap = (int *) malloc(_len_bitmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tr_bitmap_detect(bitmap,ch);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
