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

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct vnt_private {int /*<<< orphan*/  current_tsf; } ;

/* Variables and functions */

bool vnt_get_current_tsf(struct vnt_private *priv, u64 *current_tsf)
{
	*current_tsf = priv->current_tsf;

	return true;
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
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].current_tsf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_current_tsf0 = 1;
          int * current_tsf = (int *) malloc(_len_current_tsf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_current_tsf0; _i0++) {
            current_tsf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vnt_get_current_tsf(priv,current_tsf);
          printf("%d\n", benchRet); 
          free(priv);
          free(current_tsf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].current_tsf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_current_tsf0 = 65025;
          int * current_tsf = (int *) malloc(_len_current_tsf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_current_tsf0; _i0++) {
            current_tsf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vnt_get_current_tsf(priv,current_tsf);
          printf("%d\n", benchRet); 
          free(priv);
          free(current_tsf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].current_tsf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_current_tsf0 = 100;
          int * current_tsf = (int *) malloc(_len_current_tsf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_current_tsf0; _i0++) {
            current_tsf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vnt_get_current_tsf(priv,current_tsf);
          printf("%d\n", benchRet); 
          free(priv);
          free(current_tsf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
