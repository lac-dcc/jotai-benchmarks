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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct halmac_scan_state_set {scalar_t__ scan_cmd_construct_state; } ;
struct TYPE_2__ {struct halmac_scan_state_set scan_state_set; } ;
struct halmac_adapter {TYPE_1__ halmac_state; } ;
typedef  enum halmac_scan_cmd_construct_state { ____Placeholder_halmac_scan_cmd_construct_state } halmac_scan_cmd_construct_state ;
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;

/* Variables and functions */
 int HALMAC_RET_ERROR_STATE ; 
 int HALMAC_RET_SUCCESS ; 
 scalar_t__ HALMAC_SCAN_CMD_CONSTRUCT_BUFFER_CLEARED ; 
 scalar_t__ HALMAC_SCAN_CMD_CONSTRUCT_CONSTRUCTING ; 
 scalar_t__ HALMAC_SCAN_CMD_CONSTRUCT_H2C_SENT ; 
 int HALMAC_SCAN_CMD_CONSTRUCT_IDLE ; 

enum halmac_ret_status halmac_transition_scan_state_88xx(
	struct halmac_adapter *halmac_adapter,
	enum halmac_scan_cmd_construct_state dest_state)
{
	struct halmac_scan_state_set *scan =
		&halmac_adapter->halmac_state.scan_state_set;

	if (scan->scan_cmd_construct_state > HALMAC_SCAN_CMD_CONSTRUCT_H2C_SENT)
		return HALMAC_RET_ERROR_STATE;

	if (dest_state == HALMAC_SCAN_CMD_CONSTRUCT_IDLE) {
		if (scan->scan_cmd_construct_state ==
			    HALMAC_SCAN_CMD_CONSTRUCT_BUFFER_CLEARED ||
		    scan->scan_cmd_construct_state ==
			    HALMAC_SCAN_CMD_CONSTRUCT_CONSTRUCTING)
			return HALMAC_RET_ERROR_STATE;
	} else if (dest_state == HALMAC_SCAN_CMD_CONSTRUCT_BUFFER_CLEARED) {
		if (scan->scan_cmd_construct_state ==
		    HALMAC_SCAN_CMD_CONSTRUCT_H2C_SENT)
			return HALMAC_RET_ERROR_STATE;
	} else if (dest_state == HALMAC_SCAN_CMD_CONSTRUCT_CONSTRUCTING) {
		if (scan->scan_cmd_construct_state ==
			    HALMAC_SCAN_CMD_CONSTRUCT_IDLE ||
		    scan->scan_cmd_construct_state ==
			    HALMAC_SCAN_CMD_CONSTRUCT_H2C_SENT)
			return HALMAC_RET_ERROR_STATE;
	} else if (dest_state == HALMAC_SCAN_CMD_CONSTRUCT_H2C_SENT) {
		if (scan->scan_cmd_construct_state !=
			    HALMAC_SCAN_CMD_CONSTRUCT_CONSTRUCTING &&
		    scan->scan_cmd_construct_state !=
			    HALMAC_SCAN_CMD_CONSTRUCT_BUFFER_CLEARED)
			return HALMAC_RET_ERROR_STATE;
	}

	scan->scan_cmd_construct_state = dest_state;

	return HALMAC_RET_SUCCESS;
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
          enum halmac_scan_cmd_construct_state dest_state = 0;
          int _len_halmac_adapter0 = 1;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].halmac_state.scan_state_set.scan_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_transition_scan_state_88xx(halmac_adapter,dest_state);
          free(halmac_adapter);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum halmac_scan_cmd_construct_state dest_state = 0;
          int _len_halmac_adapter0 = 100;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].halmac_state.scan_state_set.scan_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_transition_scan_state_88xx(halmac_adapter,dest_state);
          free(halmac_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
