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
typedef  int u8 ;
struct TYPE_2__ {scalar_t__ irq; } ;
struct smi_info {int /*<<< orphan*/  irq_enable_broken; int /*<<< orphan*/  interrupt_disabled; TYPE_1__ io; scalar_t__ supports_event_msg_buff; scalar_t__ cannot_disable_irq; } ;

/* Variables and functions */
 int IPMI_BMC_EVT_MSG_BUFF ; 
 int IPMI_BMC_EVT_MSG_INTR ; 
 int IPMI_BMC_RCV_MSG_INTR ; 

__attribute__((used)) static u8 current_global_enables(struct smi_info *smi_info, u8 base,
				 bool *irq_on)
{
	u8 enables = 0;

	if (smi_info->supports_event_msg_buff)
		enables |= IPMI_BMC_EVT_MSG_BUFF;

	if (((smi_info->io.irq && !smi_info->interrupt_disabled) ||
	     smi_info->cannot_disable_irq) &&
	    !smi_info->irq_enable_broken)
		enables |= IPMI_BMC_RCV_MSG_INTR;

	if (smi_info->supports_event_msg_buff &&
	    smi_info->io.irq && !smi_info->interrupt_disabled &&
	    !smi_info->irq_enable_broken)
		enables |= IPMI_BMC_EVT_MSG_INTR;

	*irq_on = enables & (IPMI_BMC_EVT_MSG_INTR | IPMI_BMC_RCV_MSG_INTR);

	return enables;
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
          int base = 100;
          int _len_smi_info0 = 1;
          struct smi_info * smi_info = (struct smi_info *) malloc(_len_smi_info0*sizeof(struct smi_info));
          for(int _i0 = 0; _i0 < _len_smi_info0; _i0++) {
            smi_info[_i0].irq_enable_broken = ((-2 * (next_i()%2)) + 1) * next_i();
        smi_info[_i0].interrupt_disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        smi_info[_i0].io.irq = ((-2 * (next_i()%2)) + 1) * next_i();
        smi_info[_i0].supports_event_msg_buff = ((-2 * (next_i()%2)) + 1) * next_i();
        smi_info[_i0].cannot_disable_irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq_on0 = 1;
          int * irq_on = (int *) malloc(_len_irq_on0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_irq_on0; _i0++) {
            irq_on[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = current_global_enables(smi_info,base,irq_on);
          printf("%d\n", benchRet); 
          free(smi_info);
          free(irq_on);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
