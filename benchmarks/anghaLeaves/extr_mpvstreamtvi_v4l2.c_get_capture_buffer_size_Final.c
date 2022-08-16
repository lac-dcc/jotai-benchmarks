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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
struct TYPE_8__ {int sizeimage; } ;
struct TYPE_10__ {TYPE_2__ pix; } ;
struct TYPE_9__ {TYPE_4__ fmt; } ;
struct TYPE_11__ {TYPE_3__ format; TYPE_1__* tv_param; } ;
typedef  TYPE_5__ priv_t ;
struct TYPE_7__ {int buffer_size; } ;

/* Variables and functions */

__attribute__((used)) static int get_capture_buffer_size(priv_t *priv)
{
    uint64_t bufsize;
    int cnt;

    if (priv->tv_param->buffer_size >= 0) {
        bufsize = priv->tv_param->buffer_size*1024*1024;
    } else {
        bufsize = 16*1024*1024;
    }

    cnt = bufsize/priv->format.fmt.pix.sizeimage;
    if (cnt < 2) cnt = 2;

    return cnt;
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
          int _len_priv0 = 1;
          struct TYPE_11__ * priv = (struct TYPE_11__ *) malloc(_len_priv0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].format.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__tv_param0 = 1;
          priv[_i0].tv_param = (struct TYPE_7__ *) malloc(_len_priv__i0__tv_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_priv__i0__tv_param0; _j0++) {
            priv[_i0].tv_param->buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_capture_buffer_size(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tv_param);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
