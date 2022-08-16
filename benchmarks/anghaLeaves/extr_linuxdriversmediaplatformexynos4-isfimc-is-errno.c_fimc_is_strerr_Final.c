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
#define  IS_ERROR_BUSY 180 
#define  IS_ERROR_DIS_FRAME_END_NOT_DONE 179 
#define  IS_ERROR_DRC_ABSENT_INPUT 178 
#define  IS_ERROR_DRC_ABSENT_OUTPUT 177 
#define  IS_ERROR_DRC_BITWIDTH_MISMATCH 176 
#define  IS_ERROR_DRC_FORMAT_MISMATCH 175 
#define  IS_ERROR_DRC_FRAME_END_NOT_DONE 174 
#define  IS_ERROR_DRC_FRAME_END_TIME_OUT 173 
#define  IS_ERROR_DRC_HEIGHT_MISMATCH 172 
#define  IS_ERROR_DRC_MSG_FAIL 171 
#define  IS_ERROR_DRC_MULTIPLE_INPUT 170 
#define  IS_ERROR_DRC_NONADJACENT_INPUT 169 
#define  IS_ERROR_DRC_NONADJACENT_OUTPUT 168 
#define  IS_ERROR_DRC_PWRDN_FAIL 167 
#define  IS_ERROR_DRC_WIDTH_MISMATCH 166 
#define  IS_ERROR_ENTRY_MSG_THREAD_DOWN 165 
#define  IS_ERROR_FD_ABSENT_INPUT 164 
#define  IS_ERROR_FD_MULTIPLE_INPUT 163 
#define  IS_ERROR_FD_NONADJACENT_INPUT 162 
#define  IS_ERROR_FD_PWRDN_FAIL 161 
#define  IS_ERROR_INVALID_COMMAND 160 
#define  IS_ERROR_INVALID_MAGIC_NUMBER 159 
#define  IS_ERROR_INVALID_MODE_CHANGE 158 
#define  IS_ERROR_INVALID_PATH 157 
#define  IS_ERROR_INVALID_SCENARIO 156 
#define  IS_ERROR_INVALID_SENSORID 155 
#define  IS_ERROR_INVALID_SETFILE_HDR 154 
#define  IS_ERROR_ISP_ABSENT_INPUT 153 
#define  IS_ERROR_ISP_ABSENT_OUTPUT 152 
#define  IS_ERROR_ISP_BITWIDTH_MISMATCH 151 
#define  IS_ERROR_ISP_FORMAT_MISMATCH 150 
#define  IS_ERROR_ISP_FRAME_END_NOT_DONE 149 
#define  IS_ERROR_ISP_FRAME_END_TIME_OUT 148 
#define  IS_ERROR_ISP_HEIGHT_MISMATCH 147 
#define  IS_ERROR_ISP_MSG_FAIL 146 
#define  IS_ERROR_ISP_MULTIPLE_INPUT 145 
#define  IS_ERROR_ISP_NONADJACENT_OUTPUT 144 
#define  IS_ERROR_ISP_PWRDN_FAIL 143 
#define  IS_ERROR_ISP_WIDTH_MISMATCH 142 
#define  IS_ERROR_LHFD_FRAME_END_TIME_OUT 141 
#define  IS_ERROR_LHFD_MSG_FAIL 140 
#define  IS_ERROR_NO_MSG_IS_RECEIVED 139 
#define  IS_ERROR_ODC_FRAME_END_NOT_DONE 138 
#define  IS_ERROR_OPEN_SENSOR_FAIL 137 
#define  IS_ERROR_REQUEST_FAIL 136 
#define  IS_ERROR_SCALERC_FRAME_END_NOT_DONE 135 
#define  IS_ERROR_SCALERP_FRAME_END_NOT_DONE 134 
#define  IS_ERROR_SENSOR_MSG_FAIL 133 
#define  IS_ERROR_SENSOR_PWRDN_FAIL 132 
#define  IS_ERROR_SET_PARAMETER 131 
#define  IS_ERROR_TDNR_FRAME_END_NOT_DONE 130 
 unsigned int IS_ERROR_TIME_OUT_FLAG ; 
#define  IS_ERROR_UNKNOWN 129 
#define  IS_ERROR_WAIT_STREAM_OFF_NOT_DONE 128 

const char *fimc_is_strerr(unsigned int error)
{
	error &= ~IS_ERROR_TIME_OUT_FLAG;

	switch (error) {
	/* General */
	case IS_ERROR_INVALID_COMMAND:
		return "IS_ERROR_INVALID_COMMAND";
	case IS_ERROR_REQUEST_FAIL:
		return "IS_ERROR_REQUEST_FAIL";
	case IS_ERROR_INVALID_SCENARIO:
		return "IS_ERROR_INVALID_SCENARIO";
	case IS_ERROR_INVALID_SENSORID:
		return "IS_ERROR_INVALID_SENSORID";
	case IS_ERROR_INVALID_MODE_CHANGE:
		return "IS_ERROR_INVALID_MODE_CHANGE";
	case IS_ERROR_INVALID_MAGIC_NUMBER:
		return "IS_ERROR_INVALID_MAGIC_NUMBER";
	case IS_ERROR_INVALID_SETFILE_HDR:
		return "IS_ERROR_INVALID_SETFILE_HDR";
	case IS_ERROR_BUSY:
		return "IS_ERROR_BUSY";
	case IS_ERROR_SET_PARAMETER:
		return "IS_ERROR_SET_PARAMETER";
	case IS_ERROR_INVALID_PATH:
		return "IS_ERROR_INVALID_PATH";
	case IS_ERROR_OPEN_SENSOR_FAIL:
		return "IS_ERROR_OPEN_SENSOR_FAIL";
	case IS_ERROR_ENTRY_MSG_THREAD_DOWN:
		return "IS_ERROR_ENTRY_MSG_THREAD_DOWN";
	case IS_ERROR_ISP_FRAME_END_NOT_DONE:
		return "IS_ERROR_ISP_FRAME_END_NOT_DONE";
	case IS_ERROR_DRC_FRAME_END_NOT_DONE:
		return "IS_ERROR_DRC_FRAME_END_NOT_DONE";
	case IS_ERROR_SCALERC_FRAME_END_NOT_DONE:
		return "IS_ERROR_SCALERC_FRAME_END_NOT_DONE";
	case IS_ERROR_ODC_FRAME_END_NOT_DONE:
		return "IS_ERROR_ODC_FRAME_END_NOT_DONE";
	case IS_ERROR_DIS_FRAME_END_NOT_DONE:
		return "IS_ERROR_DIS_FRAME_END_NOT_DONE";
	case IS_ERROR_TDNR_FRAME_END_NOT_DONE:
		return "IS_ERROR_TDNR_FRAME_END_NOT_DONE";
	case IS_ERROR_SCALERP_FRAME_END_NOT_DONE:
		return "IS_ERROR_SCALERP_FRAME_END_NOT_DONE";
	case IS_ERROR_WAIT_STREAM_OFF_NOT_DONE:
		return "IS_ERROR_WAIT_STREAM_OFF_NOT_DONE";
	case IS_ERROR_NO_MSG_IS_RECEIVED:
		return "IS_ERROR_NO_MSG_IS_RECEIVED";
	case IS_ERROR_SENSOR_MSG_FAIL:
		return "IS_ERROR_SENSOR_MSG_FAIL";
	case IS_ERROR_ISP_MSG_FAIL:
		return "IS_ERROR_ISP_MSG_FAIL";
	case IS_ERROR_DRC_MSG_FAIL:
		return "IS_ERROR_DRC_MSG_FAIL";
	case IS_ERROR_LHFD_MSG_FAIL:
		return "IS_ERROR_LHFD_MSG_FAIL";
	case IS_ERROR_UNKNOWN:
		return "IS_ERROR_UNKNOWN";

	/* Sensor */
	case IS_ERROR_SENSOR_PWRDN_FAIL:
		return "IS_ERROR_SENSOR_PWRDN_FAIL";

	/* ISP */
	case IS_ERROR_ISP_PWRDN_FAIL:
		return "IS_ERROR_ISP_PWRDN_FAIL";
	case IS_ERROR_ISP_MULTIPLE_INPUT:
		return "IS_ERROR_ISP_MULTIPLE_INPUT";
	case IS_ERROR_ISP_ABSENT_INPUT:
		return "IS_ERROR_ISP_ABSENT_INPUT";
	case IS_ERROR_ISP_ABSENT_OUTPUT:
		return "IS_ERROR_ISP_ABSENT_OUTPUT";
	case IS_ERROR_ISP_NONADJACENT_OUTPUT:
		return "IS_ERROR_ISP_NONADJACENT_OUTPUT";
	case IS_ERROR_ISP_FORMAT_MISMATCH:
		return "IS_ERROR_ISP_FORMAT_MISMATCH";
	case IS_ERROR_ISP_WIDTH_MISMATCH:
		return "IS_ERROR_ISP_WIDTH_MISMATCH";
	case IS_ERROR_ISP_HEIGHT_MISMATCH:
		return "IS_ERROR_ISP_HEIGHT_MISMATCH";
	case IS_ERROR_ISP_BITWIDTH_MISMATCH:
		return "IS_ERROR_ISP_BITWIDTH_MISMATCH";
	case IS_ERROR_ISP_FRAME_END_TIME_OUT:
		return "IS_ERROR_ISP_FRAME_END_TIME_OUT";

	/* DRC */
	case IS_ERROR_DRC_PWRDN_FAIL:
		return "IS_ERROR_DRC_PWRDN_FAIL";
	case IS_ERROR_DRC_MULTIPLE_INPUT:
		return "IS_ERROR_DRC_MULTIPLE_INPUT";
	case IS_ERROR_DRC_ABSENT_INPUT:
		return "IS_ERROR_DRC_ABSENT_INPUT";
	case IS_ERROR_DRC_NONADJACENT_INPUT:
		return "IS_ERROR_DRC_NONADJACENT_INPUT";
	case IS_ERROR_DRC_ABSENT_OUTPUT:
		return "IS_ERROR_DRC_ABSENT_OUTPUT";
	case IS_ERROR_DRC_NONADJACENT_OUTPUT:
		return "IS_ERROR_DRC_NONADJACENT_OUTPUT";
	case IS_ERROR_DRC_FORMAT_MISMATCH:
		return "IS_ERROR_DRC_FORMAT_MISMATCH";
	case IS_ERROR_DRC_WIDTH_MISMATCH:
		return "IS_ERROR_DRC_WIDTH_MISMATCH";
	case IS_ERROR_DRC_HEIGHT_MISMATCH:
		return "IS_ERROR_DRC_HEIGHT_MISMATCH";
	case IS_ERROR_DRC_BITWIDTH_MISMATCH:
		return "IS_ERROR_DRC_BITWIDTH_MISMATCH";
	case IS_ERROR_DRC_FRAME_END_TIME_OUT:
		return "IS_ERROR_DRC_FRAME_END_TIME_OUT";

	/* FD */
	case IS_ERROR_FD_PWRDN_FAIL:
		return "IS_ERROR_FD_PWRDN_FAIL";
	case IS_ERROR_FD_MULTIPLE_INPUT:
		return "IS_ERROR_FD_MULTIPLE_INPUT";
	case IS_ERROR_FD_ABSENT_INPUT:
		return "IS_ERROR_FD_ABSENT_INPUT";
	case IS_ERROR_FD_NONADJACENT_INPUT:
		return "IS_ERROR_FD_NONADJACENT_INPUT";
	case IS_ERROR_LHFD_FRAME_END_TIME_OUT:
		return "IS_ERROR_LHFD_FRAME_END_TIME_OUT";
	default:
		return "Unknown";
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
          unsigned int error = 100;
          const char * benchRet = fimc_is_strerr(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int error = 255;
          const char * benchRet = fimc_is_strerr(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int error = 10;
          const char * benchRet = fimc_is_strerr(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
