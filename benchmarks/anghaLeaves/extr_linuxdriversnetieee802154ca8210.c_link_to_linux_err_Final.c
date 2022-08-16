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
 int EACCES ; 
 int EADDRINUSE ; 
 int EAGAIN ; 
 int EBADMSG ; 
 int EBADSLT ; 
 int EBUSY ; 
 int EDQUOT ; 
 int EFAULT ; 
 int EINVAL ; 
 int EKEYREJECTED ; 
 int EMSGSIZE ; 
 int ENETUNREACH ; 
 int ENOBUFS ; 
 int ENODATA ; 
 int ENOKEY ; 
 int ENXIO ; 
 int EPROTO ; 
 int EREMOTEIO ; 
 int EROFS ; 
 int ETIME ; 
#define  MAC_BEACON_LOST 160 
#define  MAC_CHANNEL_ACCESS_FAILURE 159 
#define  MAC_DENIED 158 
#define  MAC_DISABLE_TRX_FAILURE 157 
#define  MAC_FRAME_TOO_LONG 156 
#define  MAC_IMPROPER_KEY_TYPE 155 
#define  MAC_IMPROPER_SECURITY_LEVEL 154 
#define  MAC_INVALID_ADDRESS 153 
#define  MAC_INVALID_GTS 152 
#define  MAC_INVALID_HANDLE 151 
#define  MAC_INVALID_INDEX 150 
#define  MAC_INVALID_PARAMETER 149 
#define  MAC_LIMIT_REACHED 148 
#define  MAC_NO_ACK 147 
#define  MAC_NO_BEACON 146 
#define  MAC_NO_DATA 145 
#define  MAC_NO_SHORT_ADDRESS 144 
#define  MAC_ON_TIME_TOO_LONG 143 
#define  MAC_OUT_OF_CAP 142 
#define  MAC_PAN_ID_CONFLICT 141 
#define  MAC_PAST_TIME 140 
#define  MAC_READ_ONLY 139 
#define  MAC_REALIGNMENT 138 
#define  MAC_SCAN_IN_PROGRESS 137 
#define  MAC_SUCCESS 136 
#define  MAC_SUPERFRAME_OVERLAP 135 
#define  MAC_TRACKING_OFF 134 
#define  MAC_TRANSACTION_EXPIRED 133 
#define  MAC_TRANSACTION_OVERFLOW 132 
#define  MAC_TX_ACTIVE 131 
#define  MAC_UNAVAILABLE_KEY 130 
#define  MAC_UNSUPPORTED_ATTRIBUTE 129 
#define  MAC_UNSUPPORTED_LEGACY 128 

__attribute__((used)) static int link_to_linux_err(int link_status)
{
	if (link_status < 0) {
		/* status is already a Linux code */
		return link_status;
	}
	switch (link_status) {
	case MAC_SUCCESS:
	case MAC_REALIGNMENT:
		return 0;
	case MAC_IMPROPER_KEY_TYPE:
		return -EKEYREJECTED;
	case MAC_IMPROPER_SECURITY_LEVEL:
	case MAC_UNSUPPORTED_LEGACY:
	case MAC_DENIED:
		return -EACCES;
	case MAC_BEACON_LOST:
	case MAC_NO_ACK:
	case MAC_NO_BEACON:
		return -ENETUNREACH;
	case MAC_CHANNEL_ACCESS_FAILURE:
	case MAC_TX_ACTIVE:
	case MAC_SCAN_IN_PROGRESS:
		return -EBUSY;
	case MAC_DISABLE_TRX_FAILURE:
	case MAC_OUT_OF_CAP:
		return -EAGAIN;
	case MAC_FRAME_TOO_LONG:
		return -EMSGSIZE;
	case MAC_INVALID_GTS:
	case MAC_PAST_TIME:
		return -EBADSLT;
	case MAC_INVALID_HANDLE:
		return -EBADMSG;
	case MAC_INVALID_PARAMETER:
	case MAC_UNSUPPORTED_ATTRIBUTE:
	case MAC_ON_TIME_TOO_LONG:
	case MAC_INVALID_INDEX:
		return -EINVAL;
	case MAC_NO_DATA:
		return -ENODATA;
	case MAC_NO_SHORT_ADDRESS:
		return -EFAULT;
	case MAC_PAN_ID_CONFLICT:
		return -EADDRINUSE;
	case MAC_TRANSACTION_EXPIRED:
		return -ETIME;
	case MAC_TRANSACTION_OVERFLOW:
		return -ENOBUFS;
	case MAC_UNAVAILABLE_KEY:
		return -ENOKEY;
	case MAC_INVALID_ADDRESS:
		return -ENXIO;
	case MAC_TRACKING_OFF:
	case MAC_SUPERFRAME_OVERLAP:
		return -EREMOTEIO;
	case MAC_LIMIT_REACHED:
		return -EDQUOT;
	case MAC_READ_ONLY:
		return -EROFS;
	default:
		return -EPROTO;
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
          int link_status = 100;
          int benchRet = link_to_linux_err(link_status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int link_status = 255;
          int benchRet = link_to_linux_err(link_status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int link_status = 10;
          int benchRet = link_to_linux_err(link_status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
