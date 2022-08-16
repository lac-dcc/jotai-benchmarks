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

/* Type definitions */
struct ibmvfc_host {int action; } ;
typedef  enum ibmvfc_host_action { ____Placeholder_ibmvfc_host_action } ibmvfc_host_action ;

/* Variables and functions */
#define  IBMVFC_HOST_ACTION_ALLOC_TGTS 140 
#define  IBMVFC_HOST_ACTION_INIT 139 
#define  IBMVFC_HOST_ACTION_INIT_WAIT 138 
#define  IBMVFC_HOST_ACTION_LOGO 137 
#define  IBMVFC_HOST_ACTION_LOGO_WAIT 136 
#define  IBMVFC_HOST_ACTION_NONE 135 
#define  IBMVFC_HOST_ACTION_QUERY 134 
#define  IBMVFC_HOST_ACTION_QUERY_TGTS 133 
#define  IBMVFC_HOST_ACTION_REENABLE 132 
#define  IBMVFC_HOST_ACTION_RESET 131 
#define  IBMVFC_HOST_ACTION_TGT_DEL 130 
#define  IBMVFC_HOST_ACTION_TGT_DEL_FAILED 129 
#define  IBMVFC_HOST_ACTION_TGT_INIT 128 

__attribute__((used)) static void ibmvfc_set_host_action(struct ibmvfc_host *vhost,
				   enum ibmvfc_host_action action)
{
	switch (action) {
	case IBMVFC_HOST_ACTION_ALLOC_TGTS:
		if (vhost->action == IBMVFC_HOST_ACTION_INIT_WAIT)
			vhost->action = action;
		break;
	case IBMVFC_HOST_ACTION_LOGO_WAIT:
		if (vhost->action == IBMVFC_HOST_ACTION_LOGO)
			vhost->action = action;
		break;
	case IBMVFC_HOST_ACTION_INIT_WAIT:
		if (vhost->action == IBMVFC_HOST_ACTION_INIT)
			vhost->action = action;
		break;
	case IBMVFC_HOST_ACTION_QUERY:
		switch (vhost->action) {
		case IBMVFC_HOST_ACTION_INIT_WAIT:
		case IBMVFC_HOST_ACTION_NONE:
		case IBMVFC_HOST_ACTION_TGT_DEL_FAILED:
			vhost->action = action;
			break;
		default:
			break;
		}
		break;
	case IBMVFC_HOST_ACTION_TGT_INIT:
		if (vhost->action == IBMVFC_HOST_ACTION_ALLOC_TGTS)
			vhost->action = action;
		break;
	case IBMVFC_HOST_ACTION_INIT:
	case IBMVFC_HOST_ACTION_TGT_DEL:
		switch (vhost->action) {
		case IBMVFC_HOST_ACTION_RESET:
		case IBMVFC_HOST_ACTION_REENABLE:
			break;
		default:
			vhost->action = action;
			break;
		}
		break;
	case IBMVFC_HOST_ACTION_LOGO:
	case IBMVFC_HOST_ACTION_QUERY_TGTS:
	case IBMVFC_HOST_ACTION_TGT_DEL_FAILED:
	case IBMVFC_HOST_ACTION_NONE:
	case IBMVFC_HOST_ACTION_RESET:
	case IBMVFC_HOST_ACTION_REENABLE:
	default:
		vhost->action = action;
		break;
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
          enum ibmvfc_host_action action = 0;
          int _len_vhost0 = 1;
          struct ibmvfc_host * vhost = (struct ibmvfc_host *) malloc(_len_vhost0*sizeof(struct ibmvfc_host));
          for(int _i0 = 0; _i0 < _len_vhost0; _i0++) {
            vhost[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ibmvfc_set_host_action(vhost,action);
          free(vhost);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum ibmvfc_host_action action = 0;
          int _len_vhost0 = 100;
          struct ibmvfc_host * vhost = (struct ibmvfc_host *) malloc(_len_vhost0*sizeof(struct ibmvfc_host));
          for(int _i0 = 0; _i0 < _len_vhost0; _i0++) {
            vhost[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ibmvfc_set_host_action(vhost,action);
          free(vhost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
