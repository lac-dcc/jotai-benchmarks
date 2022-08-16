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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_4__ {int flags; int proto_version; int /*<<< orphan*/  usnic_id; int /*<<< orphan*/  ethtype; } ;
struct TYPE_3__ {TYPE_2__ usnic; } ;
struct filter {TYPE_1__ u; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  ETH_P_IBOE ; 
 int FILTER_FIELD_USNIC_ETHTYPE ; 
 int FILTER_FIELD_USNIC_ID ; 
 int FILTER_FIELD_USNIC_PROTO ; 
 int /*<<< orphan*/  FILTER_USNIC_ID ; 
 int USNIC_PROTO_VER ; 
 int USNIC_ROCE_GRH_VER ; 
 int USNIC_ROCE_GRH_VER_SHIFT ; 

__attribute__((used)) static inline void usnic_fwd_init_usnic_filter(struct filter *filter,
						uint32_t usnic_id)
{
	filter->type = FILTER_USNIC_ID;
	filter->u.usnic.ethtype = ETH_P_IBOE;
	filter->u.usnic.flags = FILTER_FIELD_USNIC_ETHTYPE |
				FILTER_FIELD_USNIC_ID |
				FILTER_FIELD_USNIC_PROTO;
	filter->u.usnic.proto_version = (USNIC_ROCE_GRH_VER <<
					 USNIC_ROCE_GRH_VER_SHIFT) |
					 USNIC_PROTO_VER;
	filter->u.usnic.usnic_id = usnic_id;
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
          int usnic_id = 100;
          int _len_filter0 = 1;
          struct filter * filter = (struct filter *) malloc(_len_filter0*sizeof(struct filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].u.usnic.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].u.usnic.proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].u.usnic.usnic_id = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].u.usnic.ethtype = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usnic_fwd_init_usnic_filter(filter,usnic_id);
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
