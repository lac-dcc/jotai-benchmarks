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
typedef  enum virtchnl_link_speed { ____Placeholder_virtchnl_link_speed } virtchnl_link_speed ;
typedef  enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;

/* Variables and functions */
#define  I40E_LINK_SPEED_100MB 134 
#define  I40E_LINK_SPEED_10GB 133 
#define  I40E_LINK_SPEED_1GB 132 
#define  I40E_LINK_SPEED_20GB 131 
#define  I40E_LINK_SPEED_25GB 130 
#define  I40E_LINK_SPEED_40GB 129 
#define  I40E_LINK_SPEED_UNKNOWN 128 
 int VIRTCHNL_LINK_SPEED_100MB ; 
 int VIRTCHNL_LINK_SPEED_10GB ; 
 int VIRTCHNL_LINK_SPEED_1GB ; 
 int VIRTCHNL_LINK_SPEED_20GB ; 
 int VIRTCHNL_LINK_SPEED_25GB ; 
 int VIRTCHNL_LINK_SPEED_40GB ; 
 int VIRTCHNL_LINK_SPEED_UNKNOWN ; 

__attribute__((used)) static inline enum virtchnl_link_speed
i40e_virtchnl_link_speed(enum i40e_aq_link_speed link_speed)
{
	switch (link_speed) {
	case I40E_LINK_SPEED_100MB:
		return VIRTCHNL_LINK_SPEED_100MB;
	case I40E_LINK_SPEED_1GB:
		return VIRTCHNL_LINK_SPEED_1GB;
	case I40E_LINK_SPEED_10GB:
		return VIRTCHNL_LINK_SPEED_10GB;
	case I40E_LINK_SPEED_40GB:
		return VIRTCHNL_LINK_SPEED_40GB;
	case I40E_LINK_SPEED_20GB:
		return VIRTCHNL_LINK_SPEED_20GB;
	case I40E_LINK_SPEED_25GB:
		return VIRTCHNL_LINK_SPEED_25GB;
	case I40E_LINK_SPEED_UNKNOWN:
	default:
		return VIRTCHNL_LINK_SPEED_UNKNOWN;
	}
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
          enum i40e_aq_link_speed link_speed = 0;
          enum virtchnl_link_speed benchRet = i40e_virtchnl_link_speed(link_speed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
