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
typedef  int I_32 ;

/* Variables and functions */
 int HYPORT_ERROR_SOCKET_ARGSINVALID ; 
 int HYPORT_ERROR_SOCKET_BADAF ; 
 int HYPORT_ERROR_SOCKET_BADDESC ; 
 int HYPORT_ERROR_SOCKET_BADPROTO ; 
 int HYPORT_ERROR_SOCKET_CONNECTION_REFUSED ; 
 int HYPORT_ERROR_SOCKET_CONNRESET ; 
 int HYPORT_ERROR_SOCKET_EACCES ; 
 int HYPORT_ERROR_SOCKET_ENETUNREACH ; 
 int HYPORT_ERROR_SOCKET_INTERRUPTED ; 
 int HYPORT_ERROR_SOCKET_NOBUFFERS ; 
 int HYPORT_ERROR_SOCKET_NOTCONNECTED ; 
 int HYPORT_ERROR_SOCKET_NOTSOCK ; 
 int HYPORT_ERROR_SOCKET_OPFAILED ; 
 int HYPORT_ERROR_SOCKET_OPNOTSUPP ; 
 int HYPORT_ERROR_SOCKET_OPTUNSUPP ; 
 int HYPORT_ERROR_SOCKET_SOCKLEVELINVALID ; 
 int HYPORT_ERROR_SOCKET_TIMEOUT ; 
#define  HYPORT_ERROR_SOCKET_UNIX_CONNREFUSED 144 
#define  HYPORT_ERROR_SOCKET_UNIX_CONNRESET 143 
#define  HYPORT_ERROR_SOCKET_UNIX_EACCES 142 
#define  HYPORT_ERROR_SOCKET_UNIX_EAFNOSUPPORT 141 
#define  HYPORT_ERROR_SOCKET_UNIX_EAGAIN 140 
#define  HYPORT_ERROR_SOCKET_UNIX_EBADF 139 
#define  HYPORT_ERROR_SOCKET_UNIX_EFAULT 138 
#define  HYPORT_ERROR_SOCKET_UNIX_EINTR 137 
#define  HYPORT_ERROR_SOCKET_UNIX_EINVAL 136 
#define  HYPORT_ERROR_SOCKET_UNIX_ENETUNREACH 135 
#define  HYPORT_ERROR_SOCKET_UNIX_ENOBUFS 134 
#define  HYPORT_ERROR_SOCKET_UNIX_ENOPROTOOPT 133 
#define  HYPORT_ERROR_SOCKET_UNIX_ENOTCONN 132 
#define  HYPORT_ERROR_SOCKET_UNIX_ENOTSOCK 131 
#define  HYPORT_ERROR_SOCKET_UNIX_EOPNOTSUP 130 
#define  HYPORT_ERROR_SOCKET_UNIX_EPROTONOSUPPORT 129 
#define  HYPORT_ERROR_SOCKET_UNIX_ETIMEDOUT 128 
 int HYPORT_ERROR_SOCKET_WOULDBLOCK ; 

__attribute__((used)) static I_32 findError (I_32 errorCode)
{
    switch (errorCode)
    {
        case HYPORT_ERROR_SOCKET_UNIX_EBADF:
            return HYPORT_ERROR_SOCKET_BADDESC;
        case HYPORT_ERROR_SOCKET_UNIX_ENOBUFS:
            return HYPORT_ERROR_SOCKET_NOBUFFERS;
        case HYPORT_ERROR_SOCKET_UNIX_EOPNOTSUP:
            return HYPORT_ERROR_SOCKET_OPNOTSUPP;
        case HYPORT_ERROR_SOCKET_UNIX_ENOPROTOOPT:
            return HYPORT_ERROR_SOCKET_OPTUNSUPP;
        case HYPORT_ERROR_SOCKET_UNIX_EINVAL:
            return HYPORT_ERROR_SOCKET_SOCKLEVELINVALID;
        case HYPORT_ERROR_SOCKET_UNIX_ENOTSOCK:
            return HYPORT_ERROR_SOCKET_NOTSOCK;
        case HYPORT_ERROR_SOCKET_UNIX_EINTR:
            return HYPORT_ERROR_SOCKET_INTERRUPTED;
        case HYPORT_ERROR_SOCKET_UNIX_ENOTCONN:
            return HYPORT_ERROR_SOCKET_NOTCONNECTED;
        case HYPORT_ERROR_SOCKET_UNIX_EAFNOSUPPORT:
            return HYPORT_ERROR_SOCKET_BADAF;
            /* note: HYPORT_ERROR_SOCKET_UNIX_ECONNRESET not included because it has the same
             * value as HYPORT_ERROR_SOCKET_UNIX_CONNRESET and they both map to HYPORT_ERROR_SOCKET_CONNRESET */
        case HYPORT_ERROR_SOCKET_UNIX_CONNRESET:
            return HYPORT_ERROR_SOCKET_CONNRESET;
        case HYPORT_ERROR_SOCKET_UNIX_EAGAIN:
            return HYPORT_ERROR_SOCKET_WOULDBLOCK;
        case HYPORT_ERROR_SOCKET_UNIX_EPROTONOSUPPORT:
            return HYPORT_ERROR_SOCKET_BADPROTO;
        case HYPORT_ERROR_SOCKET_UNIX_EFAULT:
            return HYPORT_ERROR_SOCKET_ARGSINVALID;
        case HYPORT_ERROR_SOCKET_UNIX_ETIMEDOUT:
            return HYPORT_ERROR_SOCKET_TIMEOUT;
        case HYPORT_ERROR_SOCKET_UNIX_CONNREFUSED:
            return HYPORT_ERROR_SOCKET_CONNECTION_REFUSED;
        case HYPORT_ERROR_SOCKET_UNIX_ENETUNREACH:
            return HYPORT_ERROR_SOCKET_ENETUNREACH;
        case HYPORT_ERROR_SOCKET_UNIX_EACCES:
            return HYPORT_ERROR_SOCKET_EACCES;
        default:
            return HYPORT_ERROR_SOCKET_OPFAILED;
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
          int errorCode = 100;
          int benchRet = findError(errorCode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int errorCode = 255;
          int benchRet = findError(errorCode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int errorCode = 10;
          int benchRet = findError(errorCode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
