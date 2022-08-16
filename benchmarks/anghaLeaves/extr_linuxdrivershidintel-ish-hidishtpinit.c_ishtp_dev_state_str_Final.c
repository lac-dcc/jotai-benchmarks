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

/* Variables and functions */
#define  ISHTP_DEV_DISABLED 134 
#define  ISHTP_DEV_ENABLED 133 
#define  ISHTP_DEV_INITIALIZING 132 
#define  ISHTP_DEV_INIT_CLIENTS 131 
#define  ISHTP_DEV_POWER_DOWN 130 
#define  ISHTP_DEV_POWER_UP 129 
#define  ISHTP_DEV_RESETTING 128 

const char *ishtp_dev_state_str(int state)
{
	switch (state) {
	case ISHTP_DEV_INITIALIZING:
		return	"INITIALIZING";
	case ISHTP_DEV_INIT_CLIENTS:
		return	"INIT_CLIENTS";
	case ISHTP_DEV_ENABLED:
		return	"ENABLED";
	case ISHTP_DEV_RESETTING:
		return	"RESETTING";
	case ISHTP_DEV_DISABLED:
		return	"DISABLED";
	case ISHTP_DEV_POWER_DOWN:
		return	"POWER_DOWN";
	case ISHTP_DEV_POWER_UP:
		return	"POWER_UP";
	default:
		return "unknown";
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
          int state = 100;
          const char * benchRet = ishtp_dev_state_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          const char * benchRet = ishtp_dev_state_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          const char * benchRet = ishtp_dev_state_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
