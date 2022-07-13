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
       0            big-arr-10x\n\
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
typedef  size_t u32 ;

/* Variables and functions */

__attribute__((used)) static void selftest_to_bitmap (const u32 dgst_shifts, char *digests_buf_ptr, const u32 dgst_pos0, const u32 dgst_pos1, const u32 dgst_pos2, const u32 dgst_pos3, const u32 bitmap_mask, u32 *bitmap_a, u32 *bitmap_b, u32 *bitmap_c, u32 *bitmap_d)
{
  u32 *digest_ptr = (u32 *) digests_buf_ptr;

  const u32 val0 = 1u << (digest_ptr[dgst_pos0] & 0x1f);
  const u32 val1 = 1u << (digest_ptr[dgst_pos1] & 0x1f);
  const u32 val2 = 1u << (digest_ptr[dgst_pos2] & 0x1f);
  const u32 val3 = 1u << (digest_ptr[dgst_pos3] & 0x1f);

  const u32 idx0 = (digest_ptr[dgst_pos0] >> dgst_shifts) & bitmap_mask;
  const u32 idx1 = (digest_ptr[dgst_pos1] >> dgst_shifts) & bitmap_mask;
  const u32 idx2 = (digest_ptr[dgst_pos2] >> dgst_shifts) & bitmap_mask;
  const u32 idx3 = (digest_ptr[dgst_pos3] >> dgst_shifts) & bitmap_mask;

  bitmap_a[idx0] |= val0;
  bitmap_b[idx1] |= val1;
  bitmap_c[idx2] |= val2;
  bitmap_d[idx3] |= val3;
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

    // big-arr-10x
    case 0:
    {
          const unsigned long dgst_shifts = 10;
          const unsigned long dgst_pos0 = 10;
          const unsigned long dgst_pos1 = 10;
          const unsigned long dgst_pos2 = 10;
          const unsigned long dgst_pos3 = 10;
          const unsigned long bitmap_mask = 10;
          int _len_digests_buf_ptr0 = 100;
          char * digests_buf_ptr = (char *) malloc(_len_digests_buf_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_digests_buf_ptr0; _i0++) {
            digests_buf_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bitmap_a0 = 100;
          unsigned long * bitmap_a = (unsigned long *) malloc(_len_bitmap_a0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bitmap_a0; _i0++) {
            bitmap_a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bitmap_b0 = 100;
          unsigned long * bitmap_b = (unsigned long *) malloc(_len_bitmap_b0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bitmap_b0; _i0++) {
            bitmap_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bitmap_c0 = 100;
          unsigned long * bitmap_c = (unsigned long *) malloc(_len_bitmap_c0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bitmap_c0; _i0++) {
            bitmap_c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bitmap_d0 = 100;
          unsigned long * bitmap_d = (unsigned long *) malloc(_len_bitmap_d0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bitmap_d0; _i0++) {
            bitmap_d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          selftest_to_bitmap(dgst_shifts,digests_buf_ptr,dgst_pos0,dgst_pos1,dgst_pos2,dgst_pos3,bitmap_mask,bitmap_a,bitmap_b,bitmap_c,bitmap_d);
          free(digests_buf_ptr);
          free(bitmap_a);
          free(bitmap_b);
          free(bitmap_c);
          free(bitmap_d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
