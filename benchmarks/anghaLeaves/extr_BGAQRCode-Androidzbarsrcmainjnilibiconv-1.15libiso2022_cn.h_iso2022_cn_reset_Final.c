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
typedef  int /*<<< orphan*/  state_t ;
typedef  TYPE_1__* conv_t ;
struct TYPE_3__ {int /*<<< orphan*/  ostate; } ;

/* Variables and functions */
 int RET_TOOSMALL ; 
 unsigned char SI ; 
 int /*<<< orphan*/  SPLIT_STATE ; 
 scalar_t__ STATE_ASCII ; 
 scalar_t__ state1 ; 
 int /*<<< orphan*/  state2 ; 
 int /*<<< orphan*/  state3 ; 

__attribute__((used)) static int
iso2022_cn_reset (conv_t conv, unsigned char *r, size_t n)
{
  state_t state = conv->ostate;
  SPLIT_STATE;
  (void)state2;
  (void)state3;
  if (state1 != STATE_ASCII) {
    if (n < 1)
      return RET_TOOSMALL;
    r[0] = SI;
    /* conv->ostate = 0; will be done by the caller */
    return 1;
  } else
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
          unsigned long n = 100;
          int _len_conv0 = 1;
          struct TYPE_3__ * conv = (struct TYPE_3__ *) malloc(_len_conv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_conv0; _i0++) {
            conv[_i0].ostate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 1;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iso2022_cn_reset(conv,r,n);
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
