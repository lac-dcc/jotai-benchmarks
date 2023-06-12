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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct sci_base_state_machine {int current_state_id; } ;
struct isci_remote_device {struct sci_base_state_machine sm; } ;
typedef  enum sci_remote_device_states { ____Placeholder_sci_remote_device_states } sci_remote_device_states ;

/* Variables and functions */
#define  SCI_DEV_READY 135 
#define  SCI_SMP_DEV_CMD 134 
#define  SCI_SMP_DEV_IDLE 133 
#define  SCI_STP_DEV_AWAIT_RESET 132 
#define  SCI_STP_DEV_CMD 131 
#define  SCI_STP_DEV_IDLE 130 
#define  SCI_STP_DEV_NCQ 129 
#define  SCI_STP_DEV_NCQ_ERROR 128 

__attribute__((used)) static bool is_remote_device_ready(struct isci_remote_device *idev)
{

	struct sci_base_state_machine *sm = &idev->sm;
	enum sci_remote_device_states state = sm->current_state_id;

	switch (state) {
	case SCI_DEV_READY:
	case SCI_STP_DEV_IDLE:
	case SCI_STP_DEV_CMD:
	case SCI_STP_DEV_NCQ:
	case SCI_STP_DEV_NCQ_ERROR:
	case SCI_STP_DEV_AWAIT_RESET:
	case SCI_SMP_DEV_IDLE:
	case SCI_SMP_DEV_CMD:
		return true;
	default:
		return false;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_idev0 = 65025;
          struct isci_remote_device * idev = (struct isci_remote_device *) malloc(_len_idev0*sizeof(struct isci_remote_device));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
              idev[_i0].sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = is_remote_device_ready(idev);
          printf("%d\n", benchRet); 
          free(idev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_idev0 = 100;
          struct isci_remote_device * idev = (struct isci_remote_device *) malloc(_len_idev0*sizeof(struct isci_remote_device));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
              idev[_i0].sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = is_remote_device_ready(idev);
          printf("%d\n", benchRet); 
          free(idev);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_idev0 = 1;
          struct isci_remote_device * idev = (struct isci_remote_device *) malloc(_len_idev0*sizeof(struct isci_remote_device));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
              idev[_i0].sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = is_remote_device_ready(idev);
          printf("%d\n", benchRet); 
          free(idev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
