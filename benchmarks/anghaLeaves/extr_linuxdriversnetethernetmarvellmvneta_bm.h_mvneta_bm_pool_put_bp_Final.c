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

/* Type definitions */
struct mvneta_bm_pool {int dummy; } ;
struct mvneta_bm {int dummy; } ;
typedef  int /*<<< orphan*/  dma_addr_t ;

/* Variables and functions */

__attribute__((used)) static inline void mvneta_bm_pool_put_bp(struct mvneta_bm *priv,
					 struct mvneta_bm_pool *bm_pool,
					 dma_addr_t buf_phys_addr) {}


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
          int buf_phys_addr = 100;
          int _len_priv0 = 1;
          struct mvneta_bm * priv = (struct mvneta_bm *) malloc(_len_priv0*sizeof(struct mvneta_bm));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bm_pool0 = 1;
          struct mvneta_bm_pool * bm_pool = (struct mvneta_bm_pool *) malloc(_len_bm_pool0*sizeof(struct mvneta_bm_pool));
          for(int _i0 = 0; _i0 < _len_bm_pool0; _i0++) {
            bm_pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mvneta_bm_pool_put_bp(priv,bm_pool,buf_phys_addr);
          free(priv);
          free(bm_pool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
