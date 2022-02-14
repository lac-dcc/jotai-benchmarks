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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u16 ;

/* Variables and functions */
 int PARSING_AND_ERR_FLAGS_IPHDRERROR_MASK ; 
 int PARSING_AND_ERR_FLAGS_IPHDRERROR_SHIFT ; 
 int PARSING_AND_ERR_FLAGS_L4CHKSMERROR_MASK ; 
 int PARSING_AND_ERR_FLAGS_L4CHKSMERROR_SHIFT ; 
 int PARSING_AND_ERR_FLAGS_L4CHKSMWASCALCULATED_MASK ; 
 int PARSING_AND_ERR_FLAGS_L4CHKSMWASCALCULATED_SHIFT ; 
 int /*<<< orphan*/  QEDE_CSUM_ERROR ; 
 int /*<<< orphan*/  QEDE_CSUM_UNNECESSARY ; 

__attribute__((used)) static u8 qede_check_notunn_csum(u16 flag)
{
	u16 csum_flag = 0;
	u8 csum = 0;

	if (flag & (PARSING_AND_ERR_FLAGS_L4CHKSMWASCALCULATED_MASK <<
		    PARSING_AND_ERR_FLAGS_L4CHKSMWASCALCULATED_SHIFT)) {
		csum_flag |= PARSING_AND_ERR_FLAGS_L4CHKSMERROR_MASK <<
			     PARSING_AND_ERR_FLAGS_L4CHKSMERROR_SHIFT;
		csum = QEDE_CSUM_UNNECESSARY;
	}

	csum_flag |= PARSING_AND_ERR_FLAGS_IPHDRERROR_MASK <<
		     PARSING_AND_ERR_FLAGS_IPHDRERROR_SHIFT;

	if (csum_flag & flag)
		return QEDE_CSUM_ERROR;

	return csum;
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

    // big-arr
    case 0:
    {
          int flag = 255;
          int benchRet = qede_check_notunn_csum(flag);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
