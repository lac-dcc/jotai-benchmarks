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
       3            empty\n\
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
typedef  int u16 ;
struct nd_cmd_clear_error {int cleared; int length; } ;
struct nd_cmd_ars_status {int out_length; int flags; } ;

/* Variables and functions */
 int EAGAIN ; 
 int EBUSY ; 
 int EIO ; 
 int ENOSPC ; 
 int ENOTTY ; 
 int ND_ARS_PERSISTENT ; 
 int ND_ARS_VOLATILE ; 
#define  ND_CMD_ARS_CAP 131 
#define  ND_CMD_ARS_START 130 
#define  ND_CMD_ARS_STATUS 129 
#define  ND_CMD_CLEAR_ERROR 128 
 int NFIT_ARS_CAP_NONE ; 
 int NFIT_ARS_F_OVERFLOW ; 
 int NFIT_ARS_START_BUSY ; 
 int NFIT_ARS_STATUS_BUSY ; 
 int NFIT_ARS_STATUS_DONE ; 
 int NFIT_ARS_STATUS_INTR ; 
 int NFIT_ARS_STATUS_NONE ; 

__attribute__((used)) static int xlat_bus_status(void *buf, unsigned int cmd, u32 status)
{
	struct nd_cmd_clear_error *clear_err;
	struct nd_cmd_ars_status *ars_status;
	u16 flags;

	switch (cmd) {
	case ND_CMD_ARS_CAP:
		if ((status & 0xffff) == NFIT_ARS_CAP_NONE)
			return -ENOTTY;

		/* Command failed */
		if (status & 0xffff)
			return -EIO;

		/* No supported scan types for this range */
		flags = ND_ARS_PERSISTENT | ND_ARS_VOLATILE;
		if ((status >> 16 & flags) == 0)
			return -ENOTTY;
		return 0;
	case ND_CMD_ARS_START:
		/* ARS is in progress */
		if ((status & 0xffff) == NFIT_ARS_START_BUSY)
			return -EBUSY;

		/* Command failed */
		if (status & 0xffff)
			return -EIO;
		return 0;
	case ND_CMD_ARS_STATUS:
		ars_status = buf;
		/* Command failed */
		if (status & 0xffff)
			return -EIO;
		/* Check extended status (Upper two bytes) */
		if (status == NFIT_ARS_STATUS_DONE)
			return 0;

		/* ARS is in progress */
		if (status == NFIT_ARS_STATUS_BUSY)
			return -EBUSY;

		/* No ARS performed for the current boot */
		if (status == NFIT_ARS_STATUS_NONE)
			return -EAGAIN;

		/*
		 * ARS interrupted, either we overflowed or some other
		 * agent wants the scan to stop.  If we didn't overflow
		 * then just continue with the returned results.
		 */
		if (status == NFIT_ARS_STATUS_INTR) {
			if (ars_status->out_length >= 40 && (ars_status->flags
						& NFIT_ARS_F_OVERFLOW))
				return -ENOSPC;
			return 0;
		}

		/* Unknown status */
		if (status >> 16)
			return -EIO;
		return 0;
	case ND_CMD_CLEAR_ERROR:
		clear_err = buf;
		if (status & 0xffff)
			return -EIO;
		if (!clear_err->cleared)
			return -EIO;
		if (clear_err->length > clear_err->cleared)
			return clear_err->cleared;
		return 0;
	default:
		break;
	}

	/* all other non-zero status results in an error */
	if (status)
		return -EIO;
	return 0;
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = 100;
        
          int status = 100;
        
          void * buf;
        
          int benchRet = xlat_bus_status(buf,cmd,status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = 255;
        
          int status = 255;
        
          void * buf;
        
          int benchRet = xlat_bus_status(buf,cmd,status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = 10;
        
          int status = 10;
        
          void * buf;
        
          int benchRet = xlat_bus_status(buf,cmd,status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * buf;
        
          int benchRet = xlat_bus_status(buf,cmd,status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
