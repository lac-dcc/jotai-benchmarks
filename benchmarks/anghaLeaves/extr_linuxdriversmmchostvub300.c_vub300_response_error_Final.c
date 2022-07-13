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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u8 ;

/* Variables and functions */
 int EILSEQ ; 
 int EINVAL ; 
 int ENODEV ; 
 int ENOMEDIUM ; 
 int ETIMEDOUT ; 
#define  SD_ERROR_1BIT_CRC_ERROR 149 
#define  SD_ERROR_1BIT_CRC_WRONG 148 
#define  SD_ERROR_1BIT_DATA_TIMEOUT 147 
#define  SD_ERROR_1BIT_TIMEOUT 146 
#define  SD_ERROR_1BIT_UNEXPECTED_TIMEOUT 145 
#define  SD_ERROR_4BIT_CRC_ERROR 144 
#define  SD_ERROR_4BIT_CRC_WRONG 143 
#define  SD_ERROR_4BIT_DATA_TIMEOUT 142 
#define  SD_ERROR_4BIT_TIMEOUT 141 
#define  SD_ERROR_4BIT_UNEXPECTED_TIMEOUT 140 
#define  SD_ERROR_ILLEGAL_COMMAND 139 
#define  SD_ERROR_NO_1BIT_DATEND 138 
#define  SD_ERROR_NO_4BIT_DATEND 137 
#define  SD_ERROR_NO_CMD_ENDBIT 136 
#define  SD_ERROR_NO_DEVICE 135 
#define  SD_ERROR_OVERRUN 134 
#define  SD_ERROR_PIO_TIMEOUT 133 
#define  SD_ERROR_SDCRDY_STUCK 132 
#define  SD_ERROR_STAT_CMD 131 
#define  SD_ERROR_STAT_CMD_TIMEOUT 130 
#define  SD_ERROR_STAT_DATA 129 
#define  SD_ERROR_UNHANDLED 128 

__attribute__((used)) static int vub300_response_error(u8 error_code)
{
	switch (error_code) {
	case SD_ERROR_PIO_TIMEOUT:
	case SD_ERROR_1BIT_TIMEOUT:
	case SD_ERROR_4BIT_TIMEOUT:
		return -ETIMEDOUT;
	case SD_ERROR_STAT_DATA:
	case SD_ERROR_OVERRUN:
	case SD_ERROR_STAT_CMD:
	case SD_ERROR_STAT_CMD_TIMEOUT:
	case SD_ERROR_SDCRDY_STUCK:
	case SD_ERROR_UNHANDLED:
	case SD_ERROR_1BIT_CRC_WRONG:
	case SD_ERROR_4BIT_CRC_WRONG:
	case SD_ERROR_1BIT_CRC_ERROR:
	case SD_ERROR_4BIT_CRC_ERROR:
	case SD_ERROR_NO_CMD_ENDBIT:
	case SD_ERROR_NO_1BIT_DATEND:
	case SD_ERROR_NO_4BIT_DATEND:
	case SD_ERROR_1BIT_DATA_TIMEOUT:
	case SD_ERROR_4BIT_DATA_TIMEOUT:
	case SD_ERROR_1BIT_UNEXPECTED_TIMEOUT:
	case SD_ERROR_4BIT_UNEXPECTED_TIMEOUT:
		return -EILSEQ;
	case 33:
		return -EILSEQ;
	case SD_ERROR_ILLEGAL_COMMAND:
		return -EINVAL;
	case SD_ERROR_NO_DEVICE:
		return -ENOMEDIUM;
	default:
		return -ENODEV;
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
          int error_code = 100;
          int benchRet = vub300_response_error(error_code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error_code = 255;
          int benchRet = vub300_response_error(error_code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error_code = 10;
          int benchRet = vub300_response_error(error_code);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
