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
typedef  enum vnic_res_type { ____Placeholder_vnic_res_type } vnic_res_type ;
typedef  enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;

/* Variables and functions */
 int RES_TYPE_MAX ; 
#define  USNIC_VNIC_RES_TYPES 128 
 int USNIC_VNIC_RES_TYPE_MAX ; 

__attribute__((used)) static enum vnic_res_type _to_vnic_res_type(enum usnic_vnic_res_type res_type)
{
#define DEFINE_USNIC_VNIC_RES_AT(usnic_vnic_res_t, vnic_res_type, desc, val) \
		vnic_res_type,
#define DEFINE_USNIC_VNIC_RES(usnic_vnic_res_t, vnic_res_type, desc) \
		vnic_res_type,
	static enum vnic_res_type usnic_vnic_type_2_vnic_type[] = {
						USNIC_VNIC_RES_TYPES};
#undef DEFINE_USNIC_VNIC_RES
#undef DEFINE_USNIC_VNIC_RES_AT

	if (res_type >= USNIC_VNIC_RES_TYPE_MAX)
		return RES_TYPE_MAX;

	return usnic_vnic_type_2_vnic_type[res_type];
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
          enum usnic_vnic_res_type res_type = 0;
          enum vnic_res_type benchRet = _to_vnic_res_type(res_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
