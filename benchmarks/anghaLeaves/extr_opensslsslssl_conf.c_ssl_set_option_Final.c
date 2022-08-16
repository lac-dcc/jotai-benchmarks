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
typedef  unsigned long uint32_t ;
struct TYPE_3__ {unsigned long* poptions; unsigned long* pcert_flags; unsigned long* pvfy_flags; } ;
typedef  TYPE_1__ SSL_CONF_CTX ;

/* Variables and functions */
#define  SSL_TFLAG_CERT 130 
 unsigned int SSL_TFLAG_INV ; 
#define  SSL_TFLAG_OPTION 129 
 unsigned int SSL_TFLAG_TYPE_MASK ; 
#define  SSL_TFLAG_VFY 128 

__attribute__((used)) static void ssl_set_option(SSL_CONF_CTX *cctx, unsigned int name_flags,
                           unsigned long option_value, int onoff)
{
    uint32_t *pflags;
    if (cctx->poptions == NULL)
        return;
    if (name_flags & SSL_TFLAG_INV)
        onoff ^= 1;
    switch (name_flags & SSL_TFLAG_TYPE_MASK) {

    case SSL_TFLAG_CERT:
        pflags = cctx->pcert_flags;
        break;

    case SSL_TFLAG_VFY:
        pflags = cctx->pvfy_flags;
        break;

    case SSL_TFLAG_OPTION:
        pflags = cctx->poptions;
        break;

    default:
        return;

    }
    if (onoff)
        *pflags |= option_value;
    else
        *pflags &= ~option_value;
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
          unsigned int name_flags = 100;
          unsigned long option_value = 100;
          int onoff = 100;
          int _len_cctx0 = 1;
          struct TYPE_3__ * cctx = (struct TYPE_3__ *) malloc(_len_cctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cctx0; _i0++) {
              int _len_cctx__i0__poptions0 = 1;
          cctx[_i0].poptions = (unsigned long *) malloc(_len_cctx__i0__poptions0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cctx__i0__poptions0; _j0++) {
            cctx[_i0].poptions[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__pcert_flags0 = 1;
          cctx[_i0].pcert_flags = (unsigned long *) malloc(_len_cctx__i0__pcert_flags0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pcert_flags0; _j0++) {
            cctx[_i0].pcert_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__pvfy_flags0 = 1;
          cctx[_i0].pvfy_flags = (unsigned long *) malloc(_len_cctx__i0__pvfy_flags0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pvfy_flags0; _j0++) {
            cctx[_i0].pvfy_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ssl_set_option(cctx,name_flags,option_value,onoff);
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].poptions);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pcert_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pvfy_flags);
          }
          free(cctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
