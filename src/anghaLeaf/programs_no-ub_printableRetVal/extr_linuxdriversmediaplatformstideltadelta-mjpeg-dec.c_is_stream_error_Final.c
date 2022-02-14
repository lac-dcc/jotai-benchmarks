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
typedef  enum jpeg_decoding_error_t { ____Placeholder_jpeg_decoding_error_t } jpeg_decoding_error_t ;

/* Variables and functions */
#define  JPEG_DECODER_BAD_COMPONENT_COUNT 139 
#define  JPEG_DECODER_BAD_COUNT_VALUE 138 
#define  JPEG_DECODER_BAD_DHT_MARKER 137 
#define  JPEG_DECODER_BAD_HEADER_LENGTH 136 
#define  JPEG_DECODER_BAD_INDEX_VALUE 135 
#define  JPEG_DECODER_BAD_NUMBER_HUFFMAN_TABLES 134 
#define  JPEG_DECODER_BAD_NUMBER_QUANT_TABLES 133 
#define  JPEG_DECODER_BAD_QUANT_TABLE_LENGTH 132 
#define  JPEG_DECODER_BAD_RESTART_MARKER 131 
#define  JPEG_DECODER_BAD_SOS_SPECTRAL 130 
#define  JPEG_DECODER_BAD_SOS_SUCCESSIVE 129 
#define  JPEG_DECODER_UNDEFINED_HUFF_TABLE 128 

__attribute__((used)) static inline bool is_stream_error(enum jpeg_decoding_error_t err)
{
	switch (err) {
	case JPEG_DECODER_UNDEFINED_HUFF_TABLE:
	case JPEG_DECODER_BAD_RESTART_MARKER:
	case JPEG_DECODER_BAD_SOS_SPECTRAL:
	case JPEG_DECODER_BAD_SOS_SUCCESSIVE:
	case JPEG_DECODER_BAD_HEADER_LENGTH:
	case JPEG_DECODER_BAD_COUNT_VALUE:
	case JPEG_DECODER_BAD_DHT_MARKER:
	case JPEG_DECODER_BAD_INDEX_VALUE:
	case JPEG_DECODER_BAD_NUMBER_HUFFMAN_TABLES:
	case JPEG_DECODER_BAD_QUANT_TABLE_LENGTH:
	case JPEG_DECODER_BAD_NUMBER_QUANT_TABLES:
	case JPEG_DECODER_BAD_COMPONENT_COUNT:
		return true;
	default:
		return false;
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

    // big-arr
    case 0:
    {
          enum jpeg_decoding_error_t err = 0;
          int benchRet = is_stream_error(err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
