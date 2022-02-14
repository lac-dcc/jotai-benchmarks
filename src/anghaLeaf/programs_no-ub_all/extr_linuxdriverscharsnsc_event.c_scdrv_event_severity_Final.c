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

/* Variables and functions */
#define  EV_CLASS_ENV 143 
#define  EV_CLASS_FAN 142 
 int EV_CLASS_MASK ; 
#define  EV_CLASS_POWER 141 
#define  EV_CLASS_PWRD_NOTIFY 140 
#define  EV_CLASS_TEMP 139 
#define  EV_CLASS_TEST_FAULT 138 
#define  EV_CLASS_TEST_WARNING 137 
#define  EV_SEVERITY_FAN_FAULT 136 
#define  EV_SEVERITY_FAN_WARNING 135 
 int EV_SEVERITY_MASK ; 
#define  EV_SEVERITY_POWER_HIGH_FAULT 134 
#define  EV_SEVERITY_POWER_HIGH_WARNING 133 
#define  EV_SEVERITY_POWER_LOW_FAULT 132 
#define  EV_SEVERITY_POWER_LOW_WARNING 131 
#define  EV_SEVERITY_TEMP_ADVISORY 130 
#define  EV_SEVERITY_TEMP_CRITICAL 129 
#define  EV_SEVERITY_TEMP_FAULT 128 
 char* KERN_ALERT ; 
 char* KERN_CRIT ; 
 char* KERN_NOTICE ; 
 char* KERN_WARNING ; 

__attribute__((used)) static char *
scdrv_event_severity(int code)
{
	int ev_class = (code & EV_CLASS_MASK);
	int ev_severity = (code & EV_SEVERITY_MASK);
	char *pk_severity = KERN_NOTICE;

	switch (ev_class) {
	case EV_CLASS_POWER:
		switch (ev_severity) {
		case EV_SEVERITY_POWER_LOW_WARNING:
		case EV_SEVERITY_POWER_HIGH_WARNING:
			pk_severity = KERN_WARNING;
			break;
		case EV_SEVERITY_POWER_HIGH_FAULT:
		case EV_SEVERITY_POWER_LOW_FAULT:
			pk_severity = KERN_ALERT;
			break;
		}
		break;
	case EV_CLASS_FAN:
		switch (ev_severity) {
		case EV_SEVERITY_FAN_WARNING:
			pk_severity = KERN_WARNING;
			break;
		case EV_SEVERITY_FAN_FAULT:
			pk_severity = KERN_CRIT;
			break;
		}
		break;
	case EV_CLASS_TEMP:
		switch (ev_severity) {
		case EV_SEVERITY_TEMP_ADVISORY:
			pk_severity = KERN_WARNING;
			break;
		case EV_SEVERITY_TEMP_CRITICAL:
			pk_severity = KERN_CRIT;
			break;
		case EV_SEVERITY_TEMP_FAULT:
			pk_severity = KERN_ALERT;
			break;
		}
		break;
	case EV_CLASS_ENV:
		pk_severity = KERN_ALERT;
		break;
	case EV_CLASS_TEST_FAULT:
		pk_severity = KERN_ALERT;
		break;
	case EV_CLASS_TEST_WARNING:
		pk_severity = KERN_WARNING;
		break;
	case EV_CLASS_PWRD_NOTIFY:
		pk_severity = KERN_ALERT;
		break;
	}

	return pk_severity;
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
          int code = 255;
          char * benchRet = scdrv_event_severity(code);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
