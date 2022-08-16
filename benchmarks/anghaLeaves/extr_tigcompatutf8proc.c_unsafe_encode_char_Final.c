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
typedef  scalar_t__ utf8proc_uint8_t ;
typedef  int utf8proc_ssize_t ;
typedef  int utf8proc_int32_t ;

/* Variables and functions */

__attribute__((used)) static utf8proc_ssize_t unsafe_encode_char(utf8proc_int32_t uc, utf8proc_uint8_t *dst) {
   if (uc < 0x00) {
      return 0;
   } else if (uc < 0x80) {
      dst[0] = (utf8proc_uint8_t)uc;
      return 1;
   } else if (uc < 0x800) {
      dst[0] = (utf8proc_uint8_t)(0xC0 + (uc >> 6));
      dst[1] = (utf8proc_uint8_t)(0x80 + (uc & 0x3F));
      return 2;
   } else if (uc == 0xFFFF) {
       dst[0] = (utf8proc_uint8_t)0xFF;
       return 1;
   } else if (uc == 0xFFFE) {
       dst[0] = (utf8proc_uint8_t)0xFE;
       return 1;
   } else if (uc < 0x10000) {
      dst[0] = (utf8proc_uint8_t)(0xE0 + (uc >> 12));
      dst[1] = (utf8proc_uint8_t)(0x80 + ((uc >> 6) & 0x3F));
      dst[2] = (utf8proc_uint8_t)(0x80 + (uc & 0x3F));
      return 3;
   } else if (uc < 0x110000) {
      dst[0] = (utf8proc_uint8_t)(0xF0 + (uc >> 18));
      dst[1] = (utf8proc_uint8_t)(0x80 + ((uc >> 12) & 0x3F));
      dst[2] = (utf8proc_uint8_t)(0x80 + ((uc >> 6) & 0x3F));
      dst[3] = (utf8proc_uint8_t)(0x80 + (uc & 0x3F));
      return 4;
   } else return 0;
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
          int uc = 100;
          int _len_dst0 = 1;
          long * dst = (long *) malloc(_len_dst0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = unsafe_encode_char(uc,dst);
          printf("%d\n", benchRet); 
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int uc = 10;
          int _len_dst0 = 100;
          long * dst = (long *) malloc(_len_dst0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = unsafe_encode_char(uc,dst);
          printf("%d\n", benchRet); 
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
