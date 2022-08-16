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
typedef  int u8 ;
typedef  enum fman_intr_type { ____Placeholder_fman_intr_type } fman_intr_type ;
typedef  enum fman_event_modules { ____Placeholder_fman_event_modules } fman_event_modules ;

/* Variables and functions */
 int FMAN_EV_CNT ; 
 int FMAN_EV_ERR_MAC0 ; 
 int FMAN_EV_FMAN_CTRL_0 ; 
 int FMAN_EV_MAC0 ; 
 int FMAN_INTR_TYPE_ERR ; 
#define  FMAN_MOD_DUMMY_LAST 130 
#define  FMAN_MOD_FMAN_CTRL 129 
#define  FMAN_MOD_MAC 128 

__attribute__((used)) static int get_module_event(enum fman_event_modules module, u8 mod_id,
			    enum fman_intr_type intr_type)
{
	int event;

	switch (module) {
	case FMAN_MOD_MAC:
		if (intr_type == FMAN_INTR_TYPE_ERR)
			event = FMAN_EV_ERR_MAC0 + mod_id;
		else
			event = FMAN_EV_MAC0 + mod_id;
		break;
	case FMAN_MOD_FMAN_CTRL:
		if (intr_type == FMAN_INTR_TYPE_ERR)
			event = FMAN_EV_CNT;
		else
			event = (FMAN_EV_FMAN_CTRL_0 + mod_id);
		break;
	case FMAN_MOD_DUMMY_LAST:
		event = FMAN_EV_CNT;
		break;
	default:
		event = FMAN_EV_CNT;
		break;
	}

	return event;
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
          enum fman_event_modules module = 0;
          int mod_id = 100;
          enum fman_intr_type intr_type = 100;
          int benchRet = get_module_event(module,mod_id,intr_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum fman_event_modules module = 0;
          int mod_id = 255;
          enum fman_intr_type intr_type = 255;
          int benchRet = get_module_event(module,mod_id,intr_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum fman_event_modules module = 0;
          int mod_id = 10;
          enum fman_intr_type intr_type = 10;
          int benchRet = get_module_event(module,mod_id,intr_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
