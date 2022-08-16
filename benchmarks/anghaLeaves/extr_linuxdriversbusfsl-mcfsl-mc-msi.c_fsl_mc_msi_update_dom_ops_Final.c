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
struct msi_domain_ops {scalar_t__ set_desc; } ;
struct msi_domain_info {struct msi_domain_ops* ops; } ;

/* Variables and functions */
 scalar_t__ fsl_mc_msi_set_desc ; 

__attribute__((used)) static void fsl_mc_msi_update_dom_ops(struct msi_domain_info *info)
{
	struct msi_domain_ops *ops = info->ops;

	if (!ops)
		return;

	/*
	 * set_desc should not be set by the caller
	 */
	if (!ops->set_desc)
		ops->set_desc = fsl_mc_msi_set_desc;
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
          int _len_info0 = 1;
          struct msi_domain_info * info = (struct msi_domain_info *) malloc(_len_info0*sizeof(struct msi_domain_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__ops0 = 1;
          info[_i0].ops = (struct msi_domain_ops *) malloc(_len_info__i0__ops0*sizeof(struct msi_domain_ops));
          for(int _j0 = 0; _j0 < _len_info__i0__ops0; _j0++) {
            info[_i0].ops->set_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fsl_mc_msi_update_dom_ops(info);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ops);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
