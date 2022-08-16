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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;
typedef  enum stv0367_cab_signal_type { ____Placeholder_stv0367_cab_signal_type } stv0367_cab_signal_type ;

/* Variables and functions */
 int FE_CAB_BLINDOK ; 
 int FE_CAB_CARRIEROK ; 
 int FE_CAB_DEMODOK ; 
 int FE_CAB_NOAGC ; 
 int FE_CAB_NOBLIND ; 
 int FE_CAB_NOCARRIER ; 
 int FE_CAB_NODEMOD ; 
 int FE_CAB_NOSIGNAL ; 
 int FE_CAB_NOTIMING ; 
 int FE_CAB_TIMINGOK ; 

__attribute__((used)) static
enum stv0367_cab_signal_type stv0367cab_fsm_signaltype(u32 qam_fsm_status)
{
	enum stv0367_cab_signal_type signaltype = FE_CAB_NOAGC;

	switch (qam_fsm_status) {
	case 1:
		signaltype = FE_CAB_NOAGC;
		break;
	case 2:
		signaltype = FE_CAB_NOTIMING;
		break;
	case 3:
		signaltype = FE_CAB_TIMINGOK;
		break;
	case 4:
		signaltype = FE_CAB_NOCARRIER;
		break;
	case 5:
		signaltype = FE_CAB_CARRIEROK;
		break;
	case 7:
		signaltype = FE_CAB_NOBLIND;
		break;
	case 8:
		signaltype = FE_CAB_BLINDOK;
		break;
	case 10:
		signaltype = FE_CAB_NODEMOD;
		break;
	case 11:
		signaltype = FE_CAB_DEMODOK;
		break;
	case 12:
		signaltype = FE_CAB_DEMODOK;
		break;
	case 13:
		signaltype = FE_CAB_NODEMOD;
		break;
	case 14:
		signaltype = FE_CAB_NOBLIND;
		break;
	case 15:
		signaltype = FE_CAB_NOSIGNAL;
		break;
	default:
		break;
	}

	return signaltype;
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
          int qam_fsm_status = 100;
          enum stv0367_cab_signal_type benchRet = stv0367cab_fsm_signaltype(qam_fsm_status);
        
        break;
    }
    // big-arr
    case 1:
    {
          int qam_fsm_status = 255;
          enum stv0367_cab_signal_type benchRet = stv0367cab_fsm_signaltype(qam_fsm_status);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int qam_fsm_status = 10;
          enum stv0367_cab_signal_type benchRet = stv0367cab_fsm_signaltype(qam_fsm_status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
