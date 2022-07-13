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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int renegotiate; } ;
struct TYPE_5__ {TYPE_1__ s3; int /*<<< orphan*/ * handshake_func; } ;
typedef  TYPE_2__ SSL ;

/* Variables and functions */

int ssl3_renegotiate(SSL *s)
{
    if (s->handshake_func == NULL)
        return 1;

    s->s3.renegotiate = 1;
    return 1;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].s3.renegotiate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__handshake_func0 = 1;
          s[_i0].handshake_func = (int *) malloc(_len_s__i0__handshake_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__handshake_func0; _j0++) {
            s[_i0].handshake_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ssl3_renegotiate(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].handshake_func);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].s3.renegotiate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__handshake_func0 = 1;
          s[_i0].handshake_func = (int *) malloc(_len_s__i0__handshake_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__handshake_func0; _j0++) {
            s[_i0].handshake_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ssl3_renegotiate(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].handshake_func);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].s3.renegotiate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__handshake_func0 = 1;
          s[_i0].handshake_func = (int *) malloc(_len_s__i0__handshake_func0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__handshake_func0; _j0++) {
            s[_i0].handshake_func[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ssl3_renegotiate(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].handshake_func);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
