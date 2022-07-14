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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  user_ssize_t ;
typedef  TYPE_1__* uio_t ;
struct TYPE_3__ {int /*<<< orphan*/  uio_resid_64; } ;

/* Variables and functions */

user_ssize_t uio_resid( uio_t a_uio )
{
#if DEBUG
	if (a_uio == NULL) {
		printf("%s :%d - invalid uio_t\n", __FILE__, __LINE__); 
	}
/* 	if (IS_VALID_UIO_SEGFLG(a_uio->uio_segflg) == 0) { */
/* 		panic("%s :%d - invalid uio_segflg\n", __FILE__, __LINE__);  */
/* 	} */
#endif /* DEBUG */

	/* return 0 if there are no active iovecs */
	if (a_uio == NULL) {
		return( 0 );
	}

	return( a_uio->uio_resid_64 );
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
          int _len_a_uio0 = 1;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
            a_uio[_i0].uio_resid_64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uio_resid(a_uio);
          printf("%d\n", benchRet); 
          free(a_uio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a_uio0 = 65025;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
            a_uio[_i0].uio_resid_64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uio_resid(a_uio);
          printf("%d\n", benchRet); 
          free(a_uio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a_uio0 = 100;
          struct TYPE_3__ * a_uio = (struct TYPE_3__ *) malloc(_len_a_uio0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a_uio0; _i0++) {
            a_uio[_i0].uio_resid_64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uio_resid(a_uio);
          printf("%d\n", benchRet); 
          free(a_uio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}