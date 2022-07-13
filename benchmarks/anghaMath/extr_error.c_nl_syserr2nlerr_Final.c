// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
#define  EACCES 149 
#define  EADDRINUSE 148 
#define  EADDRNOTAVAIL 147 
#define  EAFNOSUPPORT 146 
#define  EAGAIN 145 
#define  EBADF 144 
#define  EBUSY 143 
#define  EEXIST 142 
#define  EFAULT 141 
#define  EINTR 140 
#define  EINVAL 139 
#define  ENOBUFS 138 
#define  ENODEV 137 
#define  ENOENT 136 
#define  ENOMEM 135 
#define  ENOPROTOOPT 134 
#define  ENOTSOCK 133 
#define  EOPNOTSUPP 132 
#define  EPERM 131 
#define  EPROTONOSUPPORT 130 
#define  ERANGE 129 
#define  ESRCH 128 
 int NLE_AF_NOSUPPORT ; 
 int NLE_AGAIN ; 
 int NLE_BAD_SOCK ; 
 int NLE_BUSY ; 
 int NLE_EXIST ; 
 int NLE_FAILURE ; 
 int NLE_INTR ; 
 int NLE_INVAL ; 
 int NLE_NOACCESS ; 
 int NLE_NOADDR ; 
 int NLE_NODEV ; 
 int NLE_NOMEM ; 
 int NLE_OBJ_NOTFOUND ; 
 int NLE_OPNOTSUPP ; 
 int NLE_PERM ; 
 int NLE_PROTO_MISMATCH ; 
 int NLE_RANGE ; 

int nl_syserr2nlerr(int error)
{
	error = abs(error);

	switch (error) {
	case EBADF:		return NLE_BAD_SOCK;
	case EADDRINUSE:	return NLE_EXIST;
	case EEXIST:		return NLE_EXIST;
	case EADDRNOTAVAIL:	return NLE_NOADDR;
	case ESRCH:		/* fall through */
	case ENOENT:		return NLE_OBJ_NOTFOUND;
	case EINTR:		return NLE_INTR;
	case EAGAIN:		return NLE_AGAIN;
	case ENOTSOCK:		return NLE_BAD_SOCK;
	case ENOPROTOOPT:	return NLE_INVAL;
	case EFAULT:		return NLE_INVAL;
	case EACCES:		return NLE_NOACCESS;
	case EINVAL:		return NLE_INVAL;
	case ENOBUFS:		return NLE_NOMEM;
	case ENOMEM:		return NLE_NOMEM;
	case EAFNOSUPPORT:	return NLE_AF_NOSUPPORT;
	case EPROTONOSUPPORT:	return NLE_PROTO_MISMATCH;
	case EOPNOTSUPP:	return NLE_OPNOTSUPP;
	case EPERM:		return NLE_PERM;
	case EBUSY:		return NLE_BUSY;
	case ERANGE:		return NLE_RANGE;
	case ENODEV:		return NLE_NODEV;
	default:		return NLE_FAILURE;
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
          int error = 100;
          int benchRet = nl_syserr2nlerr(error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
          int benchRet = nl_syserr2nlerr(error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
          int benchRet = nl_syserr2nlerr(error);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
