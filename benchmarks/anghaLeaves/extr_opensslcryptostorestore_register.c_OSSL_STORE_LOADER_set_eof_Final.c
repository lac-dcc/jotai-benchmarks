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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  eof; } ;
typedef  int /*<<< orphan*/  OSSL_STORE_eof_fn ;
typedef  TYPE_1__ OSSL_STORE_LOADER ;

/* Variables and functions */

int OSSL_STORE_LOADER_set_eof(OSSL_STORE_LOADER *loader,
                              OSSL_STORE_eof_fn eof_function)
{
    loader->eof = eof_function;
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
          int eof_function = 100;
          int _len_loader0 = 1;
          struct TYPE_3__ * loader = (struct TYPE_3__ *) malloc(_len_loader0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_loader0; _i0++) {
            loader[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = OSSL_STORE_LOADER_set_eof(loader,eof_function);
          printf("%d\n", benchRet); 
          free(loader);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int eof_function = 10;
          int _len_loader0 = 100;
          struct TYPE_3__ * loader = (struct TYPE_3__ *) malloc(_len_loader0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_loader0; _i0++) {
            loader[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = OSSL_STORE_LOADER_set_eof(loader,eof_function);
          printf("%d\n", benchRet); 
          free(loader);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
