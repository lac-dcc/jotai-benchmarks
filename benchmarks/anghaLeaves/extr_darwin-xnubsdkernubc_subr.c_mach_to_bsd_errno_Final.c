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
typedef  int kern_return_t ;
typedef  int /*<<< orphan*/  errno_t ;

/* Variables and functions */
 int /*<<< orphan*/  EACCES ; 
 int /*<<< orphan*/  EBUSY ; 
 int /*<<< orphan*/  ECONNRESET ; 
 int /*<<< orphan*/  EEXIST ; 
 int /*<<< orphan*/  EINTR ; 
 int /*<<< orphan*/  EINVAL ; 
 int /*<<< orphan*/  EIO ; 
 int /*<<< orphan*/  ENETDOWN ; 
 int /*<<< orphan*/  ENOENT ; 
 int /*<<< orphan*/  ENOMEM ; 
 int /*<<< orphan*/  ENOTSUP ; 
 int /*<<< orphan*/  EPERM ; 
 int /*<<< orphan*/  ETIMEDOUT ; 
#define  KERN_ABORTED 175 
#define  KERN_ALREADY_IN_SET 174 
#define  KERN_ALREADY_WAITING 173 
#define  KERN_CODESIGN_ERROR 172 
#define  KERN_DEFAULT_SET 171 
#define  KERN_EXCEPTION_PROTECTED 170 
#define  KERN_FAILURE 169 
#define  KERN_INVALID_ADDRESS 168 
#define  KERN_INVALID_ARGUMENT 167 
#define  KERN_INVALID_CAPABILITY 166 
#define  KERN_INVALID_HOST 165 
#define  KERN_INVALID_LEDGER 164 
#define  KERN_INVALID_MEMORY_CONTROL 163 
#define  KERN_INVALID_NAME 162 
#define  KERN_INVALID_OBJECT 161 
#define  KERN_INVALID_POLICY 160 
#define  KERN_INVALID_PROCESSOR_SET 159 
#define  KERN_INVALID_RIGHT 158 
#define  KERN_INVALID_SECURITY 157 
#define  KERN_INVALID_TASK 156 
#define  KERN_INVALID_VALUE 155 
#define  KERN_LOCK_OWNED 154 
#define  KERN_LOCK_OWNED_SELF 153 
#define  KERN_LOCK_SET_DESTROYED 152 
#define  KERN_LOCK_UNSTABLE 151 
#define  KERN_MEMORY_ERROR 150 
#define  KERN_MEMORY_FAILURE 149 
#define  KERN_MEMORY_PRESENT 148 
#define  KERN_NAME_EXISTS 147 
#define  KERN_NODE_DOWN 146 
#define  KERN_NOT_DEPRESSED 145 
#define  KERN_NOT_IN_SET 144 
#define  KERN_NOT_RECEIVER 143 
#define  KERN_NOT_SUPPORTED 142 
#define  KERN_NOT_WAITING 141 
#define  KERN_NO_ACCESS 140 
#define  KERN_NO_SPACE 139 
#define  KERN_OPERATION_TIMED_OUT 138 
#define  KERN_POLICY_LIMIT 137 
#define  KERN_POLICY_STATIC 136 
#define  KERN_PROTECTION_FAILURE 135 
#define  KERN_RESOURCE_SHORTAGE 134 
#define  KERN_RIGHT_EXISTS 133 
#define  KERN_RPC_SERVER_TERMINATED 132 
#define  KERN_SEMAPHORE_DESTROYED 131 
#define  KERN_SUCCESS 130 
#define  KERN_TERMINATED 129 
#define  KERN_UREFS_OVERFLOW 128 

errno_t mach_to_bsd_errno(kern_return_t mach_err)
{
	switch (mach_err) {
	case KERN_SUCCESS:
		return 0;

	case KERN_INVALID_ADDRESS:
	case KERN_INVALID_ARGUMENT:
	case KERN_NOT_IN_SET:
	case KERN_INVALID_NAME:
	case KERN_INVALID_TASK:
	case KERN_INVALID_RIGHT:
	case KERN_INVALID_VALUE:
	case KERN_INVALID_CAPABILITY:
	case KERN_INVALID_HOST:
	case KERN_MEMORY_PRESENT:
	case KERN_INVALID_PROCESSOR_SET:
	case KERN_INVALID_POLICY:
	case KERN_ALREADY_WAITING:
	case KERN_DEFAULT_SET:
	case KERN_EXCEPTION_PROTECTED:
	case KERN_INVALID_LEDGER:
	case KERN_INVALID_MEMORY_CONTROL:
	case KERN_INVALID_SECURITY:
	case KERN_NOT_DEPRESSED:
	case KERN_LOCK_OWNED:
	case KERN_LOCK_OWNED_SELF:
		return EINVAL;

	case KERN_PROTECTION_FAILURE:
	case KERN_NOT_RECEIVER:
	case KERN_NO_ACCESS:
	case KERN_POLICY_STATIC:
		return EACCES;

	case KERN_NO_SPACE:
	case KERN_RESOURCE_SHORTAGE:
	case KERN_UREFS_OVERFLOW:
	case KERN_INVALID_OBJECT:
		return ENOMEM;

	case KERN_FAILURE:
		return EIO;

	case KERN_MEMORY_FAILURE:
	case KERN_POLICY_LIMIT:
	case KERN_CODESIGN_ERROR:
		return EPERM;

	case KERN_MEMORY_ERROR:
		return EBUSY;

	case KERN_ALREADY_IN_SET:
	case KERN_NAME_EXISTS:
	case KERN_RIGHT_EXISTS:
		return EEXIST;

	case KERN_ABORTED:
		return EINTR;

	case KERN_TERMINATED:
	case KERN_LOCK_SET_DESTROYED:
	case KERN_LOCK_UNSTABLE:
	case KERN_SEMAPHORE_DESTROYED:
		return ENOENT;

	case KERN_RPC_SERVER_TERMINATED:
		return ECONNRESET;

	case KERN_NOT_SUPPORTED:
		return ENOTSUP;

	case KERN_NODE_DOWN:
		return ENETDOWN;

	case KERN_NOT_WAITING:
		return ENOENT;

	case KERN_OPERATION_TIMED_OUT:
		return ETIMEDOUT;

	default:
		return EIO;
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
          int mach_err = 100;
          int benchRet = mach_to_bsd_errno(mach_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mach_err = 255;
          int benchRet = mach_to_bsd_errno(mach_err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mach_err = 10;
          int benchRet = mach_to_bsd_errno(mach_err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
