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
typedef  int /*<<< orphan*/  TIFFSetGetFieldType ;
typedef  int TIFFDataType ;

/* Variables and functions */
#define  TIFF_ASCII 143 
#define  TIFF_BYTE 142 
#define  TIFF_DOUBLE 141 
#define  TIFF_FLOAT 140 
#define  TIFF_IFD 139 
#define  TIFF_IFD8 138 
#define  TIFF_LONG 137 
#define  TIFF_LONG8 136 
#define  TIFF_RATIONAL 135 
#define  TIFF_SBYTE 134 
 int /*<<< orphan*/  TIFF_SETGET_ASCII ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_ASCII ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_DOUBLE ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_FLOAT ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_IFD8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_SINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_SINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_SINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_SINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_UINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_UINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_UINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_C0_UINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_ASCII ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_DOUBLE ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_FLOAT ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_IFD8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_SINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_SINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_SINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_SINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_UINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_UINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_UINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_C16_UINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_ASCII ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_DOUBLE ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_FLOAT ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_IFD8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_SINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_SINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_SINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_SINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_UINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_UINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_UINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_C32_UINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_DOUBLE ; 
 int /*<<< orphan*/  TIFF_SETGET_FLOAT ; 
 int /*<<< orphan*/  TIFF_SETGET_IFD8 ; 
 int /*<<< orphan*/  TIFF_SETGET_SINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_SINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_SINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_SINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_UINT16 ; 
 int /*<<< orphan*/  TIFF_SETGET_UINT32 ; 
 int /*<<< orphan*/  TIFF_SETGET_UINT64 ; 
 int /*<<< orphan*/  TIFF_SETGET_UINT8 ; 
 int /*<<< orphan*/  TIFF_SETGET_UNDEFINED ; 
#define  TIFF_SHORT 133 
#define  TIFF_SLONG 132 
#define  TIFF_SLONG8 131 
#define  TIFF_SRATIONAL 130 
#define  TIFF_SSHORT 129 
#define  TIFF_UNDEFINED 128 
 short TIFF_VARIABLE ; 
 short TIFF_VARIABLE2 ; 

__attribute__((used)) static TIFFSetGetFieldType
_TIFFSetGetType(TIFFDataType type, short count, unsigned char passcount)
{
	if (type == TIFF_ASCII && count == TIFF_VARIABLE && passcount == 0)
		return TIFF_SETGET_ASCII;

	else if (count == 1 && passcount == 0) {
		switch (type)
		{
			case TIFF_BYTE:
			case TIFF_UNDEFINED:
				return TIFF_SETGET_UINT8;
			case TIFF_ASCII:
				return TIFF_SETGET_ASCII;
			case TIFF_SHORT:
				return TIFF_SETGET_UINT16;
			case TIFF_LONG:
				return TIFF_SETGET_UINT32;
			case TIFF_RATIONAL:
			case TIFF_SRATIONAL:
			case TIFF_FLOAT:
				return TIFF_SETGET_FLOAT;
			case TIFF_SBYTE:
				return TIFF_SETGET_SINT8;
			case TIFF_SSHORT:
				return TIFF_SETGET_SINT16;
			case TIFF_SLONG:
				return TIFF_SETGET_SINT32;
			case TIFF_DOUBLE:
				return TIFF_SETGET_DOUBLE;
			case TIFF_IFD:
			case TIFF_IFD8:
				return TIFF_SETGET_IFD8;
			case TIFF_LONG8:
				return TIFF_SETGET_UINT64;
			case TIFF_SLONG8:
				return TIFF_SETGET_SINT64;
			default:
				return TIFF_SETGET_UNDEFINED;
		}
	}

	else if (count >= 1 && passcount == 0) {
		switch (type)
		{
			case TIFF_BYTE:
			case TIFF_UNDEFINED:
				return TIFF_SETGET_C0_UINT8;
			case TIFF_ASCII:
				return TIFF_SETGET_C0_ASCII;
			case TIFF_SHORT:
				return TIFF_SETGET_C0_UINT16;
			case TIFF_LONG:
				return TIFF_SETGET_C0_UINT32;
			case TIFF_RATIONAL:
			case TIFF_SRATIONAL:
			case TIFF_FLOAT:
				return TIFF_SETGET_C0_FLOAT;
			case TIFF_SBYTE:
				return TIFF_SETGET_C0_SINT8;
			case TIFF_SSHORT:
				return TIFF_SETGET_C0_SINT16;
			case TIFF_SLONG:
				return TIFF_SETGET_C0_SINT32;
			case TIFF_DOUBLE:
				return TIFF_SETGET_C0_DOUBLE;
			case TIFF_IFD:
			case TIFF_IFD8:
				return TIFF_SETGET_C0_IFD8;
			case TIFF_LONG8:
				return TIFF_SETGET_C0_UINT64;
			case TIFF_SLONG8:
				return TIFF_SETGET_C0_SINT64;
			default:
				return TIFF_SETGET_UNDEFINED;
		}
	}

	else if (count == TIFF_VARIABLE && passcount == 1) {
		switch (type)
		{
			case TIFF_BYTE:
			case TIFF_UNDEFINED:
				return TIFF_SETGET_C16_UINT8;
			case TIFF_ASCII:
				return TIFF_SETGET_C16_ASCII;
			case TIFF_SHORT:
				return TIFF_SETGET_C16_UINT16;
			case TIFF_LONG:
				return TIFF_SETGET_C16_UINT32;
			case TIFF_RATIONAL:
			case TIFF_SRATIONAL:
			case TIFF_FLOAT:
				return TIFF_SETGET_C16_FLOAT;
			case TIFF_SBYTE:
				return TIFF_SETGET_C16_SINT8;
			case TIFF_SSHORT:
				return TIFF_SETGET_C16_SINT16;
			case TIFF_SLONG:
				return TIFF_SETGET_C16_SINT32;
			case TIFF_DOUBLE:
				return TIFF_SETGET_C16_DOUBLE;
			case TIFF_IFD:
			case TIFF_IFD8:
				return TIFF_SETGET_C16_IFD8;
			case TIFF_LONG8:
				return TIFF_SETGET_C16_UINT64;
			case TIFF_SLONG8:
				return TIFF_SETGET_C16_SINT64;
			default:
				return TIFF_SETGET_UNDEFINED;
		}
	}

	else if (count == TIFF_VARIABLE2 && passcount == 1) {
		switch (type)
		{
			case TIFF_BYTE:
			case TIFF_UNDEFINED:
				return TIFF_SETGET_C32_UINT8;
			case TIFF_ASCII:
				return TIFF_SETGET_C32_ASCII;
			case TIFF_SHORT:
				return TIFF_SETGET_C32_UINT16;
			case TIFF_LONG:
				return TIFF_SETGET_C32_UINT32;
			case TIFF_RATIONAL:
			case TIFF_SRATIONAL:
			case TIFF_FLOAT:
				return TIFF_SETGET_C32_FLOAT;
			case TIFF_SBYTE:
				return TIFF_SETGET_C32_SINT8;
			case TIFF_SSHORT:
				return TIFF_SETGET_C32_SINT16;
			case TIFF_SLONG:
				return TIFF_SETGET_C32_SINT32;
			case TIFF_DOUBLE:
				return TIFF_SETGET_C32_DOUBLE;
			case TIFF_IFD:
			case TIFF_IFD8:
				return TIFF_SETGET_C32_IFD8;
			case TIFF_LONG8:
				return TIFF_SETGET_C32_UINT64;
			case TIFF_SLONG8:
				return TIFF_SETGET_C32_SINT64;
			default:
				return TIFF_SETGET_UNDEFINED;
		}
	}

	return TIFF_SETGET_UNDEFINED;
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
          int type = 100;
          short count = 100;
          unsigned char passcount = 100;
          int benchRet = _TIFFSetGetType(type,count,passcount);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          short count = 255;
          unsigned char passcount = 255;
          int benchRet = _TIFFSetGetType(type,count,passcount);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          short count = 10;
          unsigned char passcount = 10;
          int benchRet = _TIFFSetGetType(type,count,passcount);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
