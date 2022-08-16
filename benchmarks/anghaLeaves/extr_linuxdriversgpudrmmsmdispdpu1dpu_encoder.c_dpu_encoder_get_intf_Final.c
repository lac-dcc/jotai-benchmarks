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
struct dpu_mdss_cfg {int intf_count; TYPE_1__* intf; } ;
typedef  enum dpu_intf_type { ____Placeholder_dpu_intf_type } dpu_intf_type ;
typedef  enum dpu_intf { ____Placeholder_dpu_intf } dpu_intf ;
struct TYPE_2__ {int type; scalar_t__ controller_id; int id; } ;

/* Variables and functions */
 int INTF_MAX ; 

__attribute__((used)) static enum dpu_intf dpu_encoder_get_intf(struct dpu_mdss_cfg *catalog,
		enum dpu_intf_type type, u32 controller_id)
{
	int i = 0;

	for (i = 0; i < catalog->intf_count; i++) {
		if (catalog->intf[i].type == type
		    && catalog->intf[i].controller_id == controller_id) {
			return catalog->intf[i].id;
		}
	}

	return INTF_MAX;
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
          enum dpu_intf_type type = 100;
          long controller_id = 100;
          int _len_catalog0 = 1;
          struct dpu_mdss_cfg * catalog = (struct dpu_mdss_cfg *) malloc(_len_catalog0*sizeof(struct dpu_mdss_cfg));
          for(int _i0 = 0; _i0 < _len_catalog0; _i0++) {
            catalog[_i0].intf_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_catalog__i0__intf0 = 1;
          catalog[_i0].intf = (struct TYPE_2__ *) malloc(_len_catalog__i0__intf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_catalog__i0__intf0; _j0++) {
            catalog[_i0].intf->type = ((-2 * (next_i()%2)) + 1) * next_i();
        catalog[_i0].intf->controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
        catalog[_i0].intf->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum dpu_intf benchRet = dpu_encoder_get_intf(catalog,type,controller_id);
          for(int _aux = 0; _aux < _len_catalog0; _aux++) {
          free(catalog[_aux].intf);
          }
          free(catalog);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
