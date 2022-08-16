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
typedef  int u16 ;

/* Variables and functions */
#define  CONNECT_ERR_ASSOC_ERR_AUTH_REFUSED 132 
#define  CONNECT_ERR_ASSOC_ERR_TIMEOUT 131 
#define  CONNECT_ERR_AUTH_ERR_STA_FAILURE 130 
#define  CONNECT_ERR_AUTH_MSG_UNHANDLED 129 
#define  CONNECT_ERR_STA_FAILURE 128 

__attribute__((used)) static const char *assoc_failure_reason_to_str(u16 cap_info)
{
	switch (cap_info) {
	case CONNECT_ERR_AUTH_ERR_STA_FAILURE:
		return "CONNECT_ERR_AUTH_ERR_STA_FAILURE";
	case CONNECT_ERR_AUTH_MSG_UNHANDLED:
		return "CONNECT_ERR_AUTH_MSG_UNHANDLED";
	case CONNECT_ERR_ASSOC_ERR_TIMEOUT:
		return "CONNECT_ERR_ASSOC_ERR_TIMEOUT";
	case CONNECT_ERR_ASSOC_ERR_AUTH_REFUSED:
		return "CONNECT_ERR_ASSOC_ERR_AUTH_REFUSED";
	case CONNECT_ERR_STA_FAILURE:
		return "CONNECT_ERR_STA_FAILURE";
	}

	return "Unknown connect failure";
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
          int cap_info = 100;
          const char * benchRet = assoc_failure_reason_to_str(cap_info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cap_info = 255;
          const char * benchRet = assoc_failure_reason_to_str(cap_info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cap_info = 10;
          const char * benchRet = assoc_failure_reason_to_str(cap_info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
