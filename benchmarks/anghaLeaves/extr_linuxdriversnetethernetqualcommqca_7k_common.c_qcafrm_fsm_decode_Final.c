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
typedef  int u8 ;
typedef  int u16 ;
struct qcafrm_handle {int state; int init; int offset; } ;
typedef  size_t s32 ;
typedef  enum qcafrm_state { ____Placeholder_qcafrm_state } qcafrm_state ;

/* Variables and functions */
 size_t QCAFRM_GATHER ; 
#define  QCAFRM_HW_LEN0 141 
#define  QCAFRM_HW_LEN1 140 
#define  QCAFRM_HW_LEN2 139 
#define  QCAFRM_HW_LEN3 138 
 size_t QCAFRM_INVLEN ; 
 int QCAFRM_MIN_LEN ; 
 size_t QCAFRM_NOHEAD ; 
 size_t QCAFRM_NOTAIL ; 
#define  QCAFRM_WAIT_551 137 
#define  QCAFRM_WAIT_552 136 
#define  QCAFRM_WAIT_AA1 135 
#define  QCAFRM_WAIT_AA2 134 
#define  QCAFRM_WAIT_AA3 133 
#define  QCAFRM_WAIT_AA4 132 
#define  QCAFRM_WAIT_LEN_BYTE0 131 
#define  QCAFRM_WAIT_LEN_BYTE1 130 
#define  QCAFRM_WAIT_RSVD_BYTE1 129 
#define  QCAFRM_WAIT_RSVD_BYTE2 128 

s32
qcafrm_fsm_decode(struct qcafrm_handle *handle, u8 *buf, u16 buf_len, u8 recv_byte)
{
	s32 ret = QCAFRM_GATHER;
	u16 len;

	switch (handle->state) {
	case QCAFRM_HW_LEN0:
	case QCAFRM_HW_LEN1:
		/* by default, just go to next state */
		handle->state--;

		if (recv_byte != 0x00) {
			/* first two bytes of length must be 0 */
			handle->state = handle->init;
		}
		break;
	case QCAFRM_HW_LEN2:
	case QCAFRM_HW_LEN3:
		handle->state--;
		break;
	/* 4 bytes header pattern */
	case QCAFRM_WAIT_AA1:
	case QCAFRM_WAIT_AA2:
	case QCAFRM_WAIT_AA3:
	case QCAFRM_WAIT_AA4:
		if (recv_byte != 0xAA) {
			ret = QCAFRM_NOHEAD;
			handle->state = handle->init;
		} else {
			handle->state--;
		}
		break;
		/* 2 bytes length. */
		/* Borrow offset field to hold length for now. */
	case QCAFRM_WAIT_LEN_BYTE0:
		handle->offset = recv_byte;
		handle->state = QCAFRM_WAIT_LEN_BYTE1;
		break;
	case QCAFRM_WAIT_LEN_BYTE1:
		handle->offset = handle->offset | (recv_byte << 8);
		handle->state = QCAFRM_WAIT_RSVD_BYTE1;
		break;
	case QCAFRM_WAIT_RSVD_BYTE1:
		handle->state = QCAFRM_WAIT_RSVD_BYTE2;
		break;
	case QCAFRM_WAIT_RSVD_BYTE2:
		len = handle->offset;
		if (len > buf_len || len < QCAFRM_MIN_LEN) {
			ret = QCAFRM_INVLEN;
			handle->state = handle->init;
		} else {
			handle->state = (enum qcafrm_state)(len + 1);
			/* Remaining number of bytes. */
			handle->offset = 0;
		}
		break;
	default:
		/* Receiving Ethernet frame itself. */
		buf[handle->offset] = recv_byte;
		handle->offset++;
		handle->state--;
		break;
	case QCAFRM_WAIT_551:
		if (recv_byte != 0x55) {
			ret = QCAFRM_NOTAIL;
			handle->state = handle->init;
		} else {
			handle->state = QCAFRM_WAIT_552;
		}
		break;
	case QCAFRM_WAIT_552:
		if (recv_byte != 0x55) {
			ret = QCAFRM_NOTAIL;
			handle->state = handle->init;
		} else {
			ret = handle->offset;
			/* Frame is fully received. */
			handle->state = handle->init;
		}
		break;
	}

	return ret;
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
          int buf_len = 255;
          int recv_byte = 255;
          int _len_handle0 = 65025;
          struct qcafrm_handle * handle = (struct qcafrm_handle *) malloc(_len_handle0*sizeof(struct qcafrm_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].init = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = qcafrm_fsm_decode(handle,buf,buf_len,recv_byte);
          printf("%lu\n", benchRet); 
          free(handle);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
