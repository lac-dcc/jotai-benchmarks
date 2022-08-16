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
typedef  int u8 ;

/* Variables and functions */
 int EMSGSIZE ; 
 int ENOSYS ; 
 int EPROTO ; 
#define  ST33ZP24_BADLOCALITY 140 
#define  ST33ZP24_BAD_COMMAND_ORDER 139 
#define  ST33ZP24_CMDRDY_SET_WHEN_PROCESSING_HASH_END 138 
#define  ST33ZP24_DUMMY_BYTES 137 
#define  ST33ZP24_HASH_END_BEFORE_HASH_START 136 
#define  ST33ZP24_INCORECT_RECEIVED_LENGTH 135 
#define  ST33ZP24_LOCALITY_NOT_ACTIVATED 134 
#define  ST33ZP24_OK 133 
#define  ST33ZP24_TISREGISTER_UNKNOWN 132 
#define  ST33ZP24_TPM_FIFO_OVERFLOW 131 
#define  ST33ZP24_UNDEFINED_ERR 130 
#define  ST33ZP24_UNEXPECTED_READ_FIFO 129 
#define  ST33ZP24_UNEXPECTED_WRITE_FIFO 128 

__attribute__((used)) static int st33zp24_status_to_errno(u8 code)
{
	switch (code) {
	case ST33ZP24_OK:
		return 0;
	case ST33ZP24_UNDEFINED_ERR:
	case ST33ZP24_BADLOCALITY:
	case ST33ZP24_TISREGISTER_UNKNOWN:
	case ST33ZP24_LOCALITY_NOT_ACTIVATED:
	case ST33ZP24_HASH_END_BEFORE_HASH_START:
	case ST33ZP24_BAD_COMMAND_ORDER:
	case ST33ZP24_UNEXPECTED_READ_FIFO:
	case ST33ZP24_UNEXPECTED_WRITE_FIFO:
	case ST33ZP24_CMDRDY_SET_WHEN_PROCESSING_HASH_END:
		return -EPROTO;
	case ST33ZP24_INCORECT_RECEIVED_LENGTH:
	case ST33ZP24_TPM_FIFO_OVERFLOW:
		return -EMSGSIZE;
	case ST33ZP24_DUMMY_BYTES:
		return -ENOSYS;
	}
	return code;
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
          int code = 100;
          int benchRet = st33zp24_status_to_errno(code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int code = 255;
          int benchRet = st33zp24_status_to_errno(code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code = 10;
          int benchRet = st33zp24_status_to_errno(code);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
