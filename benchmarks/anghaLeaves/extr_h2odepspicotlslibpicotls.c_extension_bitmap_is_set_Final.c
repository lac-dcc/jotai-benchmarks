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
typedef  int uint16_t ;
struct st_ptls_extension_bitmap_t {int* bits; } ;

/* Variables and functions */

__attribute__((used)) static inline int extension_bitmap_is_set(struct st_ptls_extension_bitmap_t *bitmap, uint16_t id)
{
    if (id < sizeof(bitmap->bits) * 8)
        return (bitmap->bits[id / 8] & (1 << (id % 8))) != 0;
    return 0;
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
          int id = 100;
          int _len_bitmap0 = 1;
          struct st_ptls_extension_bitmap_t * bitmap = (struct st_ptls_extension_bitmap_t *) malloc(_len_bitmap0*sizeof(struct st_ptls_extension_bitmap_t));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
              int _len_bitmap__i0__bits0 = 1;
          bitmap[_i0].bits = (int *) malloc(_len_bitmap__i0__bits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__bits0; _j0++) {
            bitmap[_i0].bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = extension_bitmap_is_set(bitmap,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].bits);
          }
          free(bitmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
