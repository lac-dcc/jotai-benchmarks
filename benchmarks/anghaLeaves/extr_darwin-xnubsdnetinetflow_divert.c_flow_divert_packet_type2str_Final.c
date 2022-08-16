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
typedef  int uint8_t ;

/* Variables and functions */
#define  FLOW_DIVERT_PKT_APP_MAP_CREATE 134 
#define  FLOW_DIVERT_PKT_CLOSE 133 
#define  FLOW_DIVERT_PKT_CONNECT 132 
#define  FLOW_DIVERT_PKT_CONNECT_RESULT 131 
#define  FLOW_DIVERT_PKT_DATA 130 
#define  FLOW_DIVERT_PKT_PROPERTIES_UPDATE 129 
#define  FLOW_DIVERT_PKT_READ_NOTIFY 128 

__attribute__((used)) static const char *
flow_divert_packet_type2str(uint8_t packet_type)
{
	switch (packet_type) {
		case FLOW_DIVERT_PKT_CONNECT:
			return "connect";
		case FLOW_DIVERT_PKT_CONNECT_RESULT:
			return "connect result";
		case FLOW_DIVERT_PKT_DATA:
			return "data";
		case FLOW_DIVERT_PKT_CLOSE:
			return "close";
		case FLOW_DIVERT_PKT_READ_NOTIFY:
			return "read notification";
		case FLOW_DIVERT_PKT_PROPERTIES_UPDATE:
			return "properties update";
		case FLOW_DIVERT_PKT_APP_MAP_CREATE:
			return "app map create";
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
          int packet_type = 100;
          const char * benchRet = flow_divert_packet_type2str(packet_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int packet_type = 255;
          const char * benchRet = flow_divert_packet_type2str(packet_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int packet_type = 10;
          const char * benchRet = flow_divert_packet_type2str(packet_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
