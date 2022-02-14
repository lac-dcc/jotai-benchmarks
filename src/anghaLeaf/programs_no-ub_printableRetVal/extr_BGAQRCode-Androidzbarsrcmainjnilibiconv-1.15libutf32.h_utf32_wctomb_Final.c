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
       0            big-arr\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int ucs4_t ;
typedef  TYPE_1__* conv_t ;
struct TYPE_3__ {int ostate; } ;

/* Variables and functions */
 int RET_ILUNI ; 
 int RET_TOOSMALL ; 

__attribute__((used)) static int
utf32_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  if (wc < 0x110000 && !(wc >= 0xd800 && wc < 0xe000)) {
    int count = 0;
    if (!conv->ostate) {
      if (n >= 4) {
        r[0] = 0x00;
        r[1] = 0x00;
        r[2] = 0xFE;
        r[3] = 0xFF;
        r += 4; n -= 4; count += 4;
      } else
        return RET_TOOSMALL;
    }
    if (wc < 0x110000) {
      if (n >= 4) {
        r[0] = 0;
        r[1] = (unsigned char) (wc >> 16);
        r[2] = (unsigned char) (wc >> 8);
        r[3] = (unsigned char) wc;
        conv->ostate = 1;
        return count+4;
      } else
        return RET_TOOSMALL;
    }
  }
  return RET_ILUNI;
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

    // big-arr
    case 0:
    {
          int wc = 255;
          unsigned long n = 255;
          int _len_conv0 = 1;
          struct TYPE_3__ * conv = (struct TYPE_3__ *) malloc(_len_conv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_conv0; _i0++) {
            conv->ostate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 65025;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = utf32_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(conv);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
