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
typedef  enum jpeg_decoding_error_t { ____Placeholder_jpeg_decoding_error_t } jpeg_decoding_error_t ;

/* Variables and functions */
#define  JPEG_DECODER_BAD_COMPONENT_COUNT 157 
#define  JPEG_DECODER_BAD_COUNT_VALUE 156 
#define  JPEG_DECODER_BAD_DHT_MARKER 155 
#define  JPEG_DECODER_BAD_HEADER_LENGTH 154 
#define  JPEG_DECODER_BAD_HWCFG_GP_VERSION_VALUE 153 
#define  JPEG_DECODER_BAD_INDEX_VALUE 152 
#define  JPEG_DECODER_BAD_NUMBER_HUFFMAN_TABLES 151 
#define  JPEG_DECODER_BAD_NUMBER_QUANT_TABLES 150 
#define  JPEG_DECODER_BAD_PARAMETER 149 
#define  JPEG_DECODER_BAD_QUANT_TABLE_LENGTH 148 
#define  JPEG_DECODER_BAD_RESTART_MARKER 147 
#define  JPEG_DECODER_BAD_SOS_SPECTRAL 146 
#define  JPEG_DECODER_BAD_SOS_SUCCESSIVE 145 
#define  JPEG_DECODER_BAD_SUBREGION_PARAMETERS 144 
#define  JPEG_DECODER_BAD_VALUE_FROM_RED 143 
#define  JPEG_DECODER_DECODE_ERROR 142 
#define  JPEG_DECODER_DIVIDE_BY_ZERO_ERROR 141 
#define  JPEG_DECODER_ERROR_FEATURE_NOT_SUPPORTED 140 
#define  JPEG_DECODER_ERROR_TASK_TIMEOUT 139 
#define  JPEG_DECODER_INSUFFICIENT_OUTPUTBUFFER_SIZE 138 
#define  JPEG_DECODER_NON_SUPPORTED_SAMP_FACTORS 137 
#define  JPEG_DECODER_NOT_JPG_IMAGE 136 
#define  JPEG_DECODER_NO_ERROR 135 
#define  JPEG_DECODER_PROGRESSIVE_DECODE_NOT_SUPPORTED 134 
#define  JPEG_DECODER_UNABLE_ALLOCATE_MEMORY 133 
#define  JPEG_DECODER_UNDEFINED_HUFF_TABLE 132 
#define  JPEG_DECODER_UNSUPPORTED_COLORSPACE 131 
#define  JPEG_DECODER_UNSUPPORTED_MARKER 130 
#define  JPEG_DECODER_UNSUPPORTED_ROTATION_ANGLE 129 
#define  JPEG_DECODER_UNSUPPORTED_SCALING 128 

__attribute__((used)) static inline const char *err_str(enum jpeg_decoding_error_t err)
{
	switch (err) {
	case JPEG_DECODER_NO_ERROR:
		return "JPEG_DECODER_NO_ERROR";
	case JPEG_DECODER_UNDEFINED_HUFF_TABLE:
		return "JPEG_DECODER_UNDEFINED_HUFF_TABLE";
	case JPEG_DECODER_UNSUPPORTED_MARKER:
		return "JPEG_DECODER_UNSUPPORTED_MARKER";
	case JPEG_DECODER_UNABLE_ALLOCATE_MEMORY:
		return "JPEG_DECODER_UNABLE_ALLOCATE_MEMORY";
	case JPEG_DECODER_NON_SUPPORTED_SAMP_FACTORS:
		return "JPEG_DECODER_NON_SUPPORTED_SAMP_FACTORS";
	case JPEG_DECODER_BAD_PARAMETER:
		return "JPEG_DECODER_BAD_PARAMETER";
	case JPEG_DECODER_DECODE_ERROR:
		return "JPEG_DECODER_DECODE_ERROR";
	case JPEG_DECODER_BAD_RESTART_MARKER:
		return "JPEG_DECODER_BAD_RESTART_MARKER";
	case JPEG_DECODER_UNSUPPORTED_COLORSPACE:
		return "JPEG_DECODER_UNSUPPORTED_COLORSPACE";
	case JPEG_DECODER_BAD_SOS_SPECTRAL:
		return "JPEG_DECODER_BAD_SOS_SPECTRAL";
	case JPEG_DECODER_BAD_SOS_SUCCESSIVE:
		return "JPEG_DECODER_BAD_SOS_SUCCESSIVE";
	case JPEG_DECODER_BAD_HEADER_LENGTH:
		return "JPEG_DECODER_BAD_HEADER_LENGTH";
	case JPEG_DECODER_BAD_COUNT_VALUE:
		return "JPEG_DECODER_BAD_COUNT_VALUE";
	case JPEG_DECODER_BAD_DHT_MARKER:
		return "JPEG_DECODER_BAD_DHT_MARKER";
	case JPEG_DECODER_BAD_INDEX_VALUE:
		return "JPEG_DECODER_BAD_INDEX_VALUE";
	case JPEG_DECODER_BAD_NUMBER_HUFFMAN_TABLES:
		return "JPEG_DECODER_BAD_NUMBER_HUFFMAN_TABLES";
	case JPEG_DECODER_BAD_QUANT_TABLE_LENGTH:
		return "JPEG_DECODER_BAD_QUANT_TABLE_LENGTH";
	case JPEG_DECODER_BAD_NUMBER_QUANT_TABLES:
		return "JPEG_DECODER_BAD_NUMBER_QUANT_TABLES";
	case JPEG_DECODER_BAD_COMPONENT_COUNT:
		return "JPEG_DECODER_BAD_COMPONENT_COUNT";
	case JPEG_DECODER_DIVIDE_BY_ZERO_ERROR:
		return "JPEG_DECODER_DIVIDE_BY_ZERO_ERROR";
	case JPEG_DECODER_NOT_JPG_IMAGE:
		return "JPEG_DECODER_NOT_JPG_IMAGE";
	case JPEG_DECODER_UNSUPPORTED_ROTATION_ANGLE:
		return "JPEG_DECODER_UNSUPPORTED_ROTATION_ANGLE";
	case JPEG_DECODER_UNSUPPORTED_SCALING:
		return "JPEG_DECODER_UNSUPPORTED_SCALING";
	case JPEG_DECODER_INSUFFICIENT_OUTPUTBUFFER_SIZE:
		return "JPEG_DECODER_INSUFFICIENT_OUTPUTBUFFER_SIZE";
	case JPEG_DECODER_BAD_HWCFG_GP_VERSION_VALUE:
		return "JPEG_DECODER_BAD_HWCFG_GP_VERSION_VALUE";
	case JPEG_DECODER_BAD_VALUE_FROM_RED:
		return "JPEG_DECODER_BAD_VALUE_FROM_RED";
	case JPEG_DECODER_BAD_SUBREGION_PARAMETERS:
		return "JPEG_DECODER_BAD_SUBREGION_PARAMETERS";
	case JPEG_DECODER_PROGRESSIVE_DECODE_NOT_SUPPORTED:
		return "JPEG_DECODER_PROGRESSIVE_DECODE_NOT_SUPPORTED";
	case JPEG_DECODER_ERROR_TASK_TIMEOUT:
		return "JPEG_DECODER_ERROR_TASK_TIMEOUT";
	case JPEG_DECODER_ERROR_FEATURE_NOT_SUPPORTED:
		return "JPEG_DECODER_ERROR_FEATURE_NOT_SUPPORTED";
	default:
		return "!unknown MJPEG error!";
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
          enum jpeg_decoding_error_t err = 0;
          const char * benchRet = err_str(err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
