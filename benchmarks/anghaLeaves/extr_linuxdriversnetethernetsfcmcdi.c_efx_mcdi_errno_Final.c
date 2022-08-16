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
 int EALREADY ; 
 int EBUSY ; 
 int EDEADLK ; 
 int EINTR ; 
 int EINVAL ; 
 int ENOBUFS ; 
 int ENOENT ; 
 int ENOSPC ; 
 int ENOSYS ; 
 int EOPNOTSUPP ; 
 int EPERM ; 
 int EPROTO ; 
 int ETIME ; 
#define  MC_CMD_ERR_ALLOC_FAIL 142 
#define  MC_CMD_ERR_EACCES 141 
#define  MC_CMD_ERR_EAGAIN 140 
#define  MC_CMD_ERR_EALREADY 139 
#define  MC_CMD_ERR_EBUSY 138 
#define  MC_CMD_ERR_EDEADLK 137 
#define  MC_CMD_ERR_EINTR 136 
#define  MC_CMD_ERR_EINVAL 135 
#define  MC_CMD_ERR_ENOENT 134 
#define  MC_CMD_ERR_ENOSPC 133 
#define  MC_CMD_ERR_ENOSYS 132 
#define  MC_CMD_ERR_ENOTSUP 131 
#define  MC_CMD_ERR_EPERM 130 
#define  MC_CMD_ERR_ETIME 129 
#define  MC_CMD_ERR_MAC_EXIST 128 

__attribute__((used)) static int efx_mcdi_errno(unsigned int mcdi_err)
{
	switch (mcdi_err) {
	case 0:
		return 0;
#define TRANSLATE_ERROR(name)					\
	case MC_CMD_ERR_ ## name:				\
		return -name;
	TRANSLATE_ERROR(EPERM);
	TRANSLATE_ERROR(ENOENT);
	TRANSLATE_ERROR(EINTR);
	TRANSLATE_ERROR(EAGAIN);
	TRANSLATE_ERROR(EACCES);
	TRANSLATE_ERROR(EBUSY);
	TRANSLATE_ERROR(EINVAL);
	TRANSLATE_ERROR(EDEADLK);
	TRANSLATE_ERROR(ENOSYS);
	TRANSLATE_ERROR(ETIME);
	TRANSLATE_ERROR(EALREADY);
	TRANSLATE_ERROR(ENOSPC);
#undef TRANSLATE_ERROR
	case MC_CMD_ERR_ENOTSUP:
		return -EOPNOTSUPP;
	case MC_CMD_ERR_ALLOC_FAIL:
		return -ENOBUFS;
	case MC_CMD_ERR_MAC_EXIST:
		return -EADDRINUSE;
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
          unsigned int mcdi_err = 100;
          int benchRet = efx_mcdi_errno(mcdi_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int mcdi_err = 255;
          int benchRet = efx_mcdi_errno(mcdi_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int mcdi_err = 10;
          int benchRet = efx_mcdi_errno(mcdi_err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
