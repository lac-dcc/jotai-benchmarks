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
       0            empty\n\
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
typedef  enum qlink_cmd_result { ____Placeholder_qlink_cmd_result } qlink_cmd_result ;

/* Variables and functions */
 int EADDRINUSE ; 
 int EADDRNOTAVAIL ; 
 int EALREADY ; 
 int EFAULT ; 
 int EINVAL ; 
 int ENOENT ; 
 int ENOTSUPP ; 
#define  QLINK_CMD_RESULT_EADDRINUSE 134 
#define  QLINK_CMD_RESULT_EADDRNOTAVAIL 133 
#define  QLINK_CMD_RESULT_EALREADY 132 
#define  QLINK_CMD_RESULT_ENOTFOUND 131 
#define  QLINK_CMD_RESULT_ENOTSUPP 130 
#define  QLINK_CMD_RESULT_INVALID 129 
#define  QLINK_CMD_RESULT_OK 128 

__attribute__((used)) static int qtnf_cmd_resp_result_decode(enum qlink_cmd_result qcode)
{
	switch (qcode) {
	case QLINK_CMD_RESULT_OK:
		return 0;
	case QLINK_CMD_RESULT_INVALID:
		return -EINVAL;
	case QLINK_CMD_RESULT_ENOTSUPP:
		return -ENOTSUPP;
	case QLINK_CMD_RESULT_ENOTFOUND:
		return -ENOENT;
	case QLINK_CMD_RESULT_EALREADY:
		return -EALREADY;
	case QLINK_CMD_RESULT_EADDRINUSE:
		return -EADDRINUSE;
	case QLINK_CMD_RESULT_EADDRNOTAVAIL:
		return -EADDRNOTAVAIL;
	default:
		return -EFAULT;
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


    // empty
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          enum qlink_cmd_result qcode = 0;
        
          int benchRet = qtnf_cmd_resp_result_decode(qcode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
