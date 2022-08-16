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
struct TYPE_3__ {int /*<<< orphan*/ * cipher_suite; } ;
typedef  TYPE_1__ ptls_t ;
typedef  int /*<<< orphan*/  ptls_cipher_suite_t ;

/* Variables and functions */

ptls_cipher_suite_t *ptls_get_cipher(ptls_t *tls)
{
    return tls->cipher_suite;
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
          int _len_tls0 = 1;
          struct TYPE_3__ * tls = (struct TYPE_3__ *) malloc(_len_tls0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tls0; _i0++) {
              int _len_tls__i0__cipher_suite0 = 1;
          tls[_i0].cipher_suite = (int *) malloc(_len_tls__i0__cipher_suite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tls__i0__cipher_suite0; _j0++) {
            tls[_i0].cipher_suite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ptls_get_cipher(tls);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_tls0; _aux++) {
          free(tls[_aux].cipher_suite);
          }
          free(tls);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
