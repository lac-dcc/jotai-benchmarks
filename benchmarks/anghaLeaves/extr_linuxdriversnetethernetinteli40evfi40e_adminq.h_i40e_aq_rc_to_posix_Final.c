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
typedef  int /*<<< orphan*/  aq_to_posix ;

/* Variables and functions */
 int E2BIG ; 
 int EACCES ; 
 int EAGAIN ; 
 int EBUSY ; 
 int EEXIST ; 
 int EFAULT ; 
 int EFBIG ; 
 int EINTR ; 
 int EINVAL ; 
 int EIO ; 
 int ENOENT ; 
 int ENOMEM ; 
 int ENOSPC ; 
 int ENOSYS ; 
 int ENOTTY ; 
 int ENXIO ; 
 int EPERM ; 
 int EPIPE ; 
 int ERANGE ; 
 int EROFS ; 
 int ESPIPE ; 
 int ESRCH ; 
 int I40E_ERR_ADMIN_QUEUE_TIMEOUT ; 

__attribute__((used)) static inline int i40e_aq_rc_to_posix(int aq_ret, int aq_rc)
{
	int aq_to_posix[] = {
		0,           /* I40E_AQ_RC_OK */
		-EPERM,      /* I40E_AQ_RC_EPERM */
		-ENOENT,     /* I40E_AQ_RC_ENOENT */
		-ESRCH,      /* I40E_AQ_RC_ESRCH */
		-EINTR,      /* I40E_AQ_RC_EINTR */
		-EIO,        /* I40E_AQ_RC_EIO */
		-ENXIO,      /* I40E_AQ_RC_ENXIO */
		-E2BIG,      /* I40E_AQ_RC_E2BIG */
		-EAGAIN,     /* I40E_AQ_RC_EAGAIN */
		-ENOMEM,     /* I40E_AQ_RC_ENOMEM */
		-EACCES,     /* I40E_AQ_RC_EACCES */
		-EFAULT,     /* I40E_AQ_RC_EFAULT */
		-EBUSY,      /* I40E_AQ_RC_EBUSY */
		-EEXIST,     /* I40E_AQ_RC_EEXIST */
		-EINVAL,     /* I40E_AQ_RC_EINVAL */
		-ENOTTY,     /* I40E_AQ_RC_ENOTTY */
		-ENOSPC,     /* I40E_AQ_RC_ENOSPC */
		-ENOSYS,     /* I40E_AQ_RC_ENOSYS */
		-ERANGE,     /* I40E_AQ_RC_ERANGE */
		-EPIPE,      /* I40E_AQ_RC_EFLUSHED */
		-ESPIPE,     /* I40E_AQ_RC_BAD_ADDR */
		-EROFS,      /* I40E_AQ_RC_EMODE */
		-EFBIG,      /* I40E_AQ_RC_EFBIG */
	};

	/* aq_rc is invalid if AQ timed out */
	if (aq_ret == I40E_ERR_ADMIN_QUEUE_TIMEOUT)
		return -EAGAIN;

	if (!((u32)aq_rc < (sizeof(aq_to_posix) / sizeof((aq_to_posix)[0]))))
		return -ERANGE;

	return aq_to_posix[aq_rc];
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
          int aq_ret = 100;
          int aq_rc = 100;
          int benchRet = i40e_aq_rc_to_posix(aq_ret,aq_rc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int aq_ret = 255;
          int aq_rc = 255;
          int benchRet = i40e_aq_rc_to_posix(aq_ret,aq_rc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int aq_ret = 10;
          int aq_rc = 10;
          int benchRet = i40e_aq_rc_to_posix(aq_ret,aq_rc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
