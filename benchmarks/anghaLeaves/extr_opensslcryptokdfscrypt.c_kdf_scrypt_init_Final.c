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
struct TYPE_3__ {int N; int r; int p; int maxmem_bytes; } ;
typedef  TYPE_1__ EVP_KDF_IMPL ;

/* Variables and functions */

__attribute__((used)) static void kdf_scrypt_init(EVP_KDF_IMPL *impl)
{
    /* Default values are the most conservative recommendation given in the
     * original paper of C. Percival. Derivation uses roughly 1 GiB of memory
     * for this parameter choice (approx. 128 * r * N * p bytes).
     */
    impl->N = 1 << 20;
    impl->r = 8;
    impl->p = 1;
    impl->maxmem_bytes = 1025 * 1024 * 1024;
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
          int _len_impl0 = 1;
          struct TYPE_3__ * impl = (struct TYPE_3__ *) malloc(_len_impl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_impl0; _i0++) {
            impl[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
        impl[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        impl[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
        impl[_i0].maxmem_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kdf_scrypt_init(impl);
          free(impl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
