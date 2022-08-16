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
typedef  int /*<<< orphan*/  datadir_t ;

/* Variables and functions */
#define  CHANGE_DEFINITION 156 
#define  COMPARE 155 
#define  COPY 154 
#define  COPY_VERIFY 153 
 int /*<<< orphan*/  DATADIR_IN ; 
 int /*<<< orphan*/  DATADIR_OUT ; 
#define  FORMAT_UNIT 152 
#define  LOG_SELECT 151 
#define  MEDIUM_SCAN 150 
#define  MODE_SELECT 149 
#define  MODE_SELECT_10 148 
#define  REASSIGN_BLOCKS 147 
#define  RESERVE 146 
#define  SEARCH_EQUAL 145 
#define  SEARCH_EQUAL_12 144 
#define  SEARCH_HIGH 143 
#define  SEARCH_HIGH_12 142 
#define  SEARCH_LOW 141 
#define  SEARCH_LOW_12 140 
#define  SEND_DIAGNOSTIC 139 
#define  SEND_VOLUME_TAG 138 
#define  SET_WINDOW 137 
#define  UPDATE_BLOCK 136 
#define  WRITE_10 135 
#define  WRITE_12 134 
#define  WRITE_6 133 
#define  WRITE_BUFFER 132 
#define  WRITE_LONG 131 
#define  WRITE_SAME 130 
#define  WRITE_VERIFY 129 
#define  WRITE_VERIFY_12 128 

__attribute__((used)) static
datadir_t acornscsi_datadirection(int command)
{
    switch (command) {
    case CHANGE_DEFINITION:	case COMPARE:		case COPY:
    case COPY_VERIFY:		case LOG_SELECT:	case MODE_SELECT:
    case MODE_SELECT_10:	case SEND_DIAGNOSTIC:	case WRITE_BUFFER:
    case FORMAT_UNIT:		case REASSIGN_BLOCKS:	case RESERVE:
    case SEARCH_EQUAL:		case SEARCH_HIGH:	case SEARCH_LOW:
    case WRITE_6:		case WRITE_10:		case WRITE_VERIFY:
    case UPDATE_BLOCK:		case WRITE_LONG:	case WRITE_SAME:
    case SEARCH_HIGH_12:	case SEARCH_EQUAL_12:	case SEARCH_LOW_12:
    case WRITE_12:		case WRITE_VERIFY_12:	case SET_WINDOW:
    case MEDIUM_SCAN:		case SEND_VOLUME_TAG:	case 0xea:
	return DATADIR_OUT;
    default:
	return DATADIR_IN;
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
          int command = 100;
          int benchRet = acornscsi_datadirection(command);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int command = 255;
          int benchRet = acornscsi_datadirection(command);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int command = 10;
          int benchRet = acornscsi_datadirection(command);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
