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
typedef  enum dhcp_message_type { ____Placeholder_dhcp_message_type } dhcp_message_type ;

/* Variables and functions */
#define  dhcpmt_ack 135 
#define  dhcpmt_decline 134 
#define  dhcpmt_discover 133 
#define  dhcpmt_inform 132 
#define  dhcpmt_nak 131 
#define  dhcpmt_offer 130 
#define  dhcpmt_release 129 
#define  dhcpmt_request 128 

__attribute__((used)) static char *show_message_type (enum dhcp_message_type t) {
  switch (t) {
  case dhcpmt_discover: return "DHCPDISCOVER";
  case dhcpmt_offer: return "DHCPOFFER";
  case dhcpmt_request: return "DHCPREQUEST";
  case dhcpmt_decline: return "DHCPDECLINE";
  case dhcpmt_ack: return "DHCPACK";
  case dhcpmt_nak: return "DHCPNAK";
  case dhcpmt_release: return "DHCPRELEASE";
  case dhcpmt_inform: return "DHCPINFORM";
  }
  return NULL;
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
          enum dhcp_message_type t = 0;
          char * benchRet = show_message_type(t);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
