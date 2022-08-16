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
typedef  int u32 ;

/* Variables and functions */
 int /*<<< orphan*/  ACPI_GSBUS_BUFFER_SIZE ; 
#define  AML_FIELD_ATTRIB_BLOCK 137 
#define  AML_FIELD_ATTRIB_BLOCK_CALL 136 
#define  AML_FIELD_ATTRIB_BYTE 135 
#define  AML_FIELD_ATTRIB_MULTIBYTE 134 
#define  AML_FIELD_ATTRIB_QUICK 133 
#define  AML_FIELD_ATTRIB_RAW_BYTES 132 
#define  AML_FIELD_ATTRIB_RAW_PROCESS 131 
#define  AML_FIELD_ATTRIB_SEND_RCV 130 
#define  AML_FIELD_ATTRIB_WORD 129 
#define  AML_FIELD_ATTRIB_WORD_CALL 128 

__attribute__((used)) static u32
acpi_ex_get_serial_access_length(u32 accessor_type, u32 access_length)
{
	u32 length;

	switch (accessor_type) {
	case AML_FIELD_ATTRIB_QUICK:

		length = 0;
		break;

	case AML_FIELD_ATTRIB_SEND_RCV:
	case AML_FIELD_ATTRIB_BYTE:

		length = 1;
		break;

	case AML_FIELD_ATTRIB_WORD:
	case AML_FIELD_ATTRIB_WORD_CALL:

		length = 2;
		break;

	case AML_FIELD_ATTRIB_MULTIBYTE:
	case AML_FIELD_ATTRIB_RAW_BYTES:
	case AML_FIELD_ATTRIB_RAW_PROCESS:

		length = access_length;
		break;

	case AML_FIELD_ATTRIB_BLOCK:
	case AML_FIELD_ATTRIB_BLOCK_CALL:
	default:

		length = ACPI_GSBUS_BUFFER_SIZE - 2;
		break;
	}

	return (length);
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
          int accessor_type = 100;
          int access_length = 100;
          int benchRet = acpi_ex_get_serial_access_length(accessor_type,access_length);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int accessor_type = 255;
          int access_length = 255;
          int benchRet = acpi_ex_get_serial_access_length(accessor_type,access_length);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int accessor_type = 10;
          int access_length = 10;
          int benchRet = acpi_ex_get_serial_access_length(accessor_type,access_length);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
