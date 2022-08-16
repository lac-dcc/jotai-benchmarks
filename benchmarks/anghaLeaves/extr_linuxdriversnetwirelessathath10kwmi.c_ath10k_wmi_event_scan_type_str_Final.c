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
typedef  enum wmi_scan_event_type { ____Placeholder_wmi_scan_event_type } wmi_scan_event_type ;
typedef  enum wmi_scan_completion_reason { ____Placeholder_wmi_scan_completion_reason } wmi_scan_completion_reason ;

/* Variables and functions */
#define  WMI_SCAN_EVENT_BSS_CHANNEL 142 
#define  WMI_SCAN_EVENT_COMPLETED 141 
#define  WMI_SCAN_EVENT_DEQUEUED 140 
#define  WMI_SCAN_EVENT_FOREIGN_CHANNEL 139 
#define  WMI_SCAN_EVENT_FOREIGN_CHANNEL_EXIT 138 
#define  WMI_SCAN_EVENT_PREEMPTED 137 
#define  WMI_SCAN_EVENT_RESTARTED 136 
#define  WMI_SCAN_EVENT_STARTED 135 
#define  WMI_SCAN_EVENT_START_FAILED 134 
#define  WMI_SCAN_REASON_CANCELLED 133 
#define  WMI_SCAN_REASON_COMPLETED 132 
#define  WMI_SCAN_REASON_INTERNAL_FAILURE 131 
#define  WMI_SCAN_REASON_MAX 130 
#define  WMI_SCAN_REASON_PREEMPTED 129 
#define  WMI_SCAN_REASON_TIMEDOUT 128 

__attribute__((used)) static const char *
ath10k_wmi_event_scan_type_str(enum wmi_scan_event_type type,
			       enum wmi_scan_completion_reason reason)
{
	switch (type) {
	case WMI_SCAN_EVENT_STARTED:
		return "started";
	case WMI_SCAN_EVENT_COMPLETED:
		switch (reason) {
		case WMI_SCAN_REASON_COMPLETED:
			return "completed";
		case WMI_SCAN_REASON_CANCELLED:
			return "completed [cancelled]";
		case WMI_SCAN_REASON_PREEMPTED:
			return "completed [preempted]";
		case WMI_SCAN_REASON_TIMEDOUT:
			return "completed [timedout]";
		case WMI_SCAN_REASON_INTERNAL_FAILURE:
			return "completed [internal err]";
		case WMI_SCAN_REASON_MAX:
			break;
		}
		return "completed [unknown]";
	case WMI_SCAN_EVENT_BSS_CHANNEL:
		return "bss channel";
	case WMI_SCAN_EVENT_FOREIGN_CHANNEL:
		return "foreign channel";
	case WMI_SCAN_EVENT_DEQUEUED:
		return "dequeued";
	case WMI_SCAN_EVENT_PREEMPTED:
		return "preempted";
	case WMI_SCAN_EVENT_START_FAILED:
		return "start failed";
	case WMI_SCAN_EVENT_RESTARTED:
		return "restarted";
	case WMI_SCAN_EVENT_FOREIGN_CHANNEL_EXIT:
		return "foreign channel exit";
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
          enum wmi_scan_event_type type = 0;
          enum wmi_scan_completion_reason reason = 0;
          const char * benchRet = ath10k_wmi_event_scan_type_str(type,reason);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
