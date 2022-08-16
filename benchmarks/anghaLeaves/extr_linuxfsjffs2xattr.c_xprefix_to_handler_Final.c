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
struct xattr_handler {int dummy; } ;

/* Variables and functions */
#define  JFFS2_XPREFIX_TRUSTED 129 
#define  JFFS2_XPREFIX_USER 128 
 struct xattr_handler jffs2_trusted_xattr_handler ; 
 struct xattr_handler jffs2_user_xattr_handler ; 

__attribute__((used)) static const struct xattr_handler *xprefix_to_handler(int xprefix) {
	const struct xattr_handler *ret;

	switch (xprefix) {
	case JFFS2_XPREFIX_USER:
		ret = &jffs2_user_xattr_handler;
		break;
#ifdef CONFIG_JFFS2_FS_SECURITY
	case JFFS2_XPREFIX_SECURITY:
		ret = &jffs2_security_xattr_handler;
		break;
#endif
#ifdef CONFIG_JFFS2_FS_POSIX_ACL
	case JFFS2_XPREFIX_ACL_ACCESS:
		ret = &posix_acl_access_xattr_handler;
		break;
	case JFFS2_XPREFIX_ACL_DEFAULT:
		ret = &posix_acl_default_xattr_handler;
		break;
#endif
	case JFFS2_XPREFIX_TRUSTED:
		ret = &jffs2_trusted_xattr_handler;
		break;
	default:
		ret = NULL;
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

    // int-bounds
    case 0:
    {
          int xprefix = 100;
          const struct xattr_handler * benchRet = xprefix_to_handler(xprefix);
        
        break;
    }
    // big-arr
    case 1:
    {
          int xprefix = 255;
          const struct xattr_handler * benchRet = xprefix_to_handler(xprefix);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int xprefix = 10;
          const struct xattr_handler * benchRet = xprefix_to_handler(xprefix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
