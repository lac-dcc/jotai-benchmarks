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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct gss_api_mech {int gm_pf_num; TYPE_1__* gm_pfs; } ;
typedef  int /*<<< orphan*/  rpc_authflavor_t ;
struct TYPE_2__ {scalar_t__ qop; scalar_t__ service; int /*<<< orphan*/  pseudoflavor; } ;

/* Variables and functions */
 int /*<<< orphan*/  RPC_AUTH_MAXFLAVOR ; 

rpc_authflavor_t gss_svc_to_pseudoflavor(struct gss_api_mech *gm, u32 qop,
					 u32 service)
{
	int i;

	for (i = 0; i < gm->gm_pf_num; i++) {
		if (gm->gm_pfs[i].qop == qop &&
		    gm->gm_pfs[i].service == service) {
			return gm->gm_pfs[i].pseudoflavor;
		}
	}
	return RPC_AUTH_MAXFLAVOR;
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
          long qop = 100;
          long service = 100;
          int _len_gm0 = 1;
          struct gss_api_mech * gm = (struct gss_api_mech *) malloc(_len_gm0*sizeof(struct gss_api_mech));
          for(int _i0 = 0; _i0 < _len_gm0; _i0++) {
            gm[_i0].gm_pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gm__i0__gm_pfs0 = 1;
          gm[_i0].gm_pfs = (struct TYPE_2__ *) malloc(_len_gm__i0__gm_pfs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gm__i0__gm_pfs0; _j0++) {
            gm[_i0].gm_pfs->qop = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].gm_pfs->service = ((-2 * (next_i()%2)) + 1) * next_i();
        gm[_i0].gm_pfs->pseudoflavor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gss_svc_to_pseudoflavor(gm,qop,service);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gm0; _aux++) {
          free(gm[_aux].gm_pfs);
          }
          free(gm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
