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
typedef  enum transport_state_table { ____Placeholder_transport_state_table } transport_state_table ;

/* Variables and functions */
#define  TRANSPORT_COMPLETE 136 
#define  TRANSPORT_COMPLETE_QF_ERR 135 
#define  TRANSPORT_COMPLETE_QF_OK 134 
#define  TRANSPORT_COMPLETE_QF_WP 133 
#define  TRANSPORT_ISTATE_PROCESSING 132 
#define  TRANSPORT_NEW_CMD 131 
#define  TRANSPORT_NO_STATE 130 
#define  TRANSPORT_PROCESSING 129 
#define  TRANSPORT_WRITE_PENDING 128 

__attribute__((used)) static const char *cmd_state_name(enum transport_state_table t)
{
	switch (t) {
	case TRANSPORT_NO_STATE:	return "NO_STATE";
	case TRANSPORT_NEW_CMD:		return "NEW_CMD";
	case TRANSPORT_WRITE_PENDING:	return "WRITE_PENDING";
	case TRANSPORT_PROCESSING:	return "PROCESSING";
	case TRANSPORT_COMPLETE:	return "COMPLETE";
	case TRANSPORT_ISTATE_PROCESSING:
					return "ISTATE_PROCESSING";
	case TRANSPORT_COMPLETE_QF_WP:	return "COMPLETE_QF_WP";
	case TRANSPORT_COMPLETE_QF_OK:	return "COMPLETE_QF_OK";
	case TRANSPORT_COMPLETE_QF_ERR:	return "COMPLETE_QF_ERR";
	}

	return "(?)";
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
          enum transport_state_table t = 0;
          const char * benchRet = cmd_state_name(t);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
