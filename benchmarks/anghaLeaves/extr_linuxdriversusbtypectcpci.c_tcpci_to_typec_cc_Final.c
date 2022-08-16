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
typedef  enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;

/* Variables and functions */
 int TYPEC_CC_OPEN ; 
 int TYPEC_CC_RA ; 
 int TYPEC_CC_RD ; 
 int TYPEC_CC_RP_1_5 ; 
 int TYPEC_CC_RP_3_0 ; 
 int TYPEC_CC_RP_DEF ; 

__attribute__((used)) static enum typec_cc_status tcpci_to_typec_cc(unsigned int cc, bool sink)
{
	switch (cc) {
	case 0x1:
		return sink ? TYPEC_CC_RP_DEF : TYPEC_CC_RA;
	case 0x2:
		return sink ? TYPEC_CC_RP_1_5 : TYPEC_CC_RD;
	case 0x3:
		if (sink)
			return TYPEC_CC_RP_3_0;
		/* fall through */
	case 0x0:
	default:
		return TYPEC_CC_OPEN;
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
          unsigned int cc = 100;
          int sink = 100;
          enum typec_cc_status benchRet = tcpci_to_typec_cc(cc,sink);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int cc = 255;
          int sink = 255;
          enum typec_cc_status benchRet = tcpci_to_typec_cc(cc,sink);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int cc = 10;
          int sink = 10;
          enum typec_cc_status benchRet = tcpci_to_typec_cc(cc,sink);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
