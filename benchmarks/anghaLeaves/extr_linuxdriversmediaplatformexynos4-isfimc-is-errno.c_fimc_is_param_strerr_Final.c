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
#define  ERROR_COMMON_CMD 185 
#define  ERROR_COMMON_INPUT_INIT 184 
#define  ERROR_COMMON_INPUT_PATH 183 
#define  ERROR_COMMON_OUTPUT_INIT 182 
#define  ERROR_COMMON_OUTPUT_PATH 181 
#define  ERROR_COMMON_PARAMETER 180 
#define  ERROR_COMMON_SETFILE_ADJUST 179 
#define  ERROR_COMMON_SETFILE_INDEX 178 
#define  ERROR_COMMON_SETFILE_LOAD 177 
#define  ERROR_CONTROL_BYPASS 176 
#define  ERROR_DMA_INPUT_BIT_WIDTH 175 
#define  ERROR_DMA_INPUT_FORMAT 174 
#define  ERROR_DMA_INPUT_HEIGHT 173 
#define  ERROR_DMA_INPUT_ORDER 172 
#define  ERROR_DMA_INPUT_PLANE 171 
#define  ERROR_DMA_INPUT_WIDTH 170 
#define  ERROR_DMA_OUTPUT_BIT_WIDTH 169 
#define  ERROR_DMA_OUTPUT_FORMAT 168 
#define  ERROR_DMA_OUTPUT_HEIGHT 167 
#define  ERROR_DMA_OUTPUT_ORDER 166 
#define  ERROR_DMA_OUTPUT_PLANE 165 
#define  ERROR_DMA_OUTPUT_WIDTH 164 
#define  ERROR_FD_CONFIG_BLINK_MODE_INVALID 163 
#define  ERROR_FD_CONFIG_EYES_DETECT_INVALID 162 
#define  ERROR_FD_CONFIG_MAX_NUMBER_INVALID 161 
#define  ERROR_FD_CONFIG_MAX_NUMBER_STATE 160 
#define  ERROR_FD_CONFIG_MOUTH_DETECT_INVALID 159 
#define  ERROR_FD_CONFIG_ORIENTATION_INVALID 158 
#define  ERROR_FD_CONFIG_ORIENTATION_STATE 157 
#define  ERROR_FD_CONFIG_ORIENTATION_VALUE_INVALID 156 
#define  ERROR_FD_CONFIG_ROLL_ANGLE_INVALID 155 
#define  ERROR_FD_CONFIG_ROLL_ANGLE_STATE 154 
#define  ERROR_FD_CONFIG_SMILE_MODE_INVALID 153 
#define  ERROR_FD_CONFIG_YAW_ANGLE_INVALID 152 
#define  ERROR_FD_CONFIG_YAW_ANGLE_STATE 151 
#define  ERROR_FD_MODE 150 
#define  ERROR_FD_RESULT 149 
#define  ERROR_ISP_AF_BUSY 148 
#define  ERROR_ISP_AF_INVALID_COMMAND 147 
#define  ERROR_ISP_AF_INVALID_MODE 146 
#define  ERROR_OTF_INPUT_BIT_WIDTH 145 
#define  ERROR_OTF_INPUT_FORMAT 144 
#define  ERROR_OTF_INPUT_HEIGHT 143 
#define  ERROR_OTF_INPUT_WIDTH 142 
#define  ERROR_OTF_OUTPUT_BIT_WIDTH 141 
#define  ERROR_OTF_OUTPUT_FORMAT 140 
#define  ERROR_OTF_OUTPUT_HEIGHT 139 
#define  ERROR_OTF_OUTPUT_WIDTH 138 
#define  ERROR_SENSOR_ACTURATOR_INIT_FAIL 137 
#define  ERROR_SENSOR_I2C_FAIL 136 
#define  ERROR_SENSOR_INVALID_AF_POS 135 
#define  ERROR_SENSOR_INVALID_EXPOSURETIME 134 
#define  ERROR_SENSOR_INVALID_FRAMERATE 133 
#define  ERROR_SENSOR_INVALID_SETTING 132 
#define  ERROR_SENSOR_INVALID_SIZE 131 
#define  ERROR_SENSOR_UNSUPPORT_AF 130 
#define  ERROR_SENSOR_UNSUPPORT_FUNC 129 
#define  ERROR_SENSOR_UNSUPPORT_PERI 128 

const char *fimc_is_param_strerr(unsigned int error)
{
	switch (error) {
	case ERROR_COMMON_CMD:
		return "ERROR_COMMON_CMD: Invalid Command";
	case ERROR_COMMON_PARAMETER:
		return "ERROR_COMMON_PARAMETER: Invalid Parameter";
	case ERROR_COMMON_SETFILE_LOAD:
		return "ERROR_COMMON_SETFILE_LOAD: Illegal Setfile Loading";
	case ERROR_COMMON_SETFILE_ADJUST:
		return "ERROR_COMMON_SETFILE_ADJUST: Setfile isn't adjusted";
	case ERROR_COMMON_SETFILE_INDEX:
		return "ERROR_COMMON_SETFILE_INDEX: Invalid setfile index";
	case ERROR_COMMON_INPUT_PATH:
		return "ERROR_COMMON_INPUT_PATH: Input path can be changed in ready state";
	case ERROR_COMMON_INPUT_INIT:
		return "ERROR_COMMON_INPUT_INIT: IP can not start if input path is not set";
	case ERROR_COMMON_OUTPUT_PATH:
		return "ERROR_COMMON_OUTPUT_PATH: Output path can be changed in ready state (stop)";
	case ERROR_COMMON_OUTPUT_INIT:
		return "ERROR_COMMON_OUTPUT_INIT: IP can not start if output path is not set";
	case ERROR_CONTROL_BYPASS:
		return "ERROR_CONTROL_BYPASS";
	case ERROR_OTF_INPUT_FORMAT:
		return "ERROR_OTF_INPUT_FORMAT: Invalid format  (DRC: YUV444, FD: YUV444, 422, 420)";
	case ERROR_OTF_INPUT_WIDTH:
		return "ERROR_OTF_INPUT_WIDTH: Invalid width (DRC: 128~8192, FD: 32~8190)";
	case ERROR_OTF_INPUT_HEIGHT:
		return "ERROR_OTF_INPUT_HEIGHT: Invalid bit-width (DRC: 8~12bits, FD: 8bit)";
	case ERROR_OTF_INPUT_BIT_WIDTH:
		return "ERROR_OTF_INPUT_BIT_WIDTH: Invalid bit-width (DRC: 8~12bits, FD: 8bit)";
	case ERROR_DMA_INPUT_WIDTH:
		return "ERROR_DMA_INPUT_WIDTH: Invalid width (DRC: 128~8192, FD: 32~8190)";
	case ERROR_DMA_INPUT_HEIGHT:
		return "ERROR_DMA_INPUT_HEIGHT: Invalid height (DRC: 64~8192, FD: 16~8190)";
	case ERROR_DMA_INPUT_FORMAT:
		return "ERROR_DMA_INPUT_FORMAT: Invalid format (DRC: YUV444 or YUV422, FD: YUV444,422,420)";
	case ERROR_DMA_INPUT_BIT_WIDTH:
		return "ERROR_DMA_INPUT_BIT_WIDTH: Invalid bit-width (DRC: 8~12bits, FD: 8bit)";
	case ERROR_DMA_INPUT_ORDER:
		return "ERROR_DMA_INPUT_ORDER: Invalid order(DRC: YYCbCr,YCbYCr,FD:NO,YYCbCr,YCbYCr,CbCr,CrCb)";
	case ERROR_DMA_INPUT_PLANE:
		return "ERROR_DMA_INPUT_PLANE: Invalid palne (DRC: 3, FD: 1, 2, 3)";
	case ERROR_OTF_OUTPUT_WIDTH:
		return "ERROR_OTF_OUTPUT_WIDTH: Invalid width (DRC: 128~8192)";
	case ERROR_OTF_OUTPUT_HEIGHT:
		return "ERROR_OTF_OUTPUT_HEIGHT: Invalid height (DRC: 64~8192)";
	case ERROR_OTF_OUTPUT_FORMAT:
		return "ERROR_OTF_OUTPUT_FORMAT: Invalid format (DRC: YUV444)";
	case ERROR_OTF_OUTPUT_BIT_WIDTH:
		return "ERROR_OTF_OUTPUT_BIT_WIDTH: Invalid bit-width (DRC: 8~12bits, FD: 8bit)";
	case ERROR_DMA_OUTPUT_WIDTH:
		return "ERROR_DMA_OUTPUT_WIDTH";
	case ERROR_DMA_OUTPUT_HEIGHT:
		return "ERROR_DMA_OUTPUT_HEIGHT";
	case ERROR_DMA_OUTPUT_FORMAT:
		return "ERROR_DMA_OUTPUT_FORMAT";
	case ERROR_DMA_OUTPUT_BIT_WIDTH:
		return "ERROR_DMA_OUTPUT_BIT_WIDTH";
	case ERROR_DMA_OUTPUT_PLANE:
		return "ERROR_DMA_OUTPUT_PLANE";
	case ERROR_DMA_OUTPUT_ORDER:
		return "ERROR_DMA_OUTPUT_ORDER";

	/* Sensor Error(100~199) */
	case ERROR_SENSOR_I2C_FAIL:
		return "ERROR_SENSOR_I2C_FAIL";
	case ERROR_SENSOR_INVALID_FRAMERATE:
		return "ERROR_SENSOR_INVALID_FRAMERATE";
	case ERROR_SENSOR_INVALID_EXPOSURETIME:
		return "ERROR_SENSOR_INVALID_EXPOSURETIME";
	case ERROR_SENSOR_INVALID_SIZE:
		return "ERROR_SENSOR_INVALID_SIZE";
	case ERROR_SENSOR_INVALID_SETTING:
		return "ERROR_SENSOR_INVALID_SETTING";
	case ERROR_SENSOR_ACTURATOR_INIT_FAIL:
		return "ERROR_SENSOR_ACTURATOR_INIT_FAIL";
	case ERROR_SENSOR_INVALID_AF_POS:
		return "ERROR_SENSOR_INVALID_AF_POS";
	case ERROR_SENSOR_UNSUPPORT_FUNC:
		return "ERROR_SENSOR_UNSUPPORT_FUNC";
	case ERROR_SENSOR_UNSUPPORT_PERI:
		return "ERROR_SENSOR_UNSUPPORT_PERI";
	case ERROR_SENSOR_UNSUPPORT_AF:
		return "ERROR_SENSOR_UNSUPPORT_AF";

	/* ISP Error (200~299) */
	case ERROR_ISP_AF_BUSY:
		return "ERROR_ISP_AF_BUSY";
	case ERROR_ISP_AF_INVALID_COMMAND:
		return "ERROR_ISP_AF_INVALID_COMMAND";
	case ERROR_ISP_AF_INVALID_MODE:
		return "ERROR_ISP_AF_INVALID_MODE";

	/* DRC Error (300~399) */
	/* FD Error  (400~499) */
	case ERROR_FD_CONFIG_MAX_NUMBER_STATE:
		return "ERROR_FD_CONFIG_MAX_NUMBER_STATE";
	case ERROR_FD_CONFIG_MAX_NUMBER_INVALID:
		return "ERROR_FD_CONFIG_MAX_NUMBER_INVALID";
	case ERROR_FD_CONFIG_YAW_ANGLE_STATE:
		return "ERROR_FD_CONFIG_YAW_ANGLE_STATE";
	case ERROR_FD_CONFIG_YAW_ANGLE_INVALID:
		return "ERROR_FD_CONFIG_YAW_ANGLE_INVALID\n";
	case ERROR_FD_CONFIG_ROLL_ANGLE_STATE:
		return "ERROR_FD_CONFIG_ROLL_ANGLE_STATE";
	case ERROR_FD_CONFIG_ROLL_ANGLE_INVALID:
		return "ERROR_FD_CONFIG_ROLL_ANGLE_INVALID";
	case ERROR_FD_CONFIG_SMILE_MODE_INVALID:
		return "ERROR_FD_CONFIG_SMILE_MODE_INVALID";
	case ERROR_FD_CONFIG_BLINK_MODE_INVALID:
		return "ERROR_FD_CONFIG_BLINK_MODE_INVALID";
	case ERROR_FD_CONFIG_EYES_DETECT_INVALID:
		return "ERROR_FD_CONFIG_EYES_DETECT_INVALID";
	case ERROR_FD_CONFIG_MOUTH_DETECT_INVALID:
		return "ERROR_FD_CONFIG_MOUTH_DETECT_INVALID";
	case ERROR_FD_CONFIG_ORIENTATION_STATE:
		return "ERROR_FD_CONFIG_ORIENTATION_STATE";
	case ERROR_FD_CONFIG_ORIENTATION_INVALID:
		return "ERROR_FD_CONFIG_ORIENTATION_INVALID";
	case ERROR_FD_CONFIG_ORIENTATION_VALUE_INVALID:
		return "ERROR_FD_CONFIG_ORIENTATION_VALUE_INVALID";
	case ERROR_FD_RESULT:
		return "ERROR_FD_RESULT";
	case ERROR_FD_MODE:
		return "ERROR_FD_MODE";
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
          const char * benchRet = fimc_is_param_strerr(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int error = 255;
          const char * benchRet = fimc_is_param_strerr(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int error = 10;
          const char * benchRet = fimc_is_param_strerr(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
