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
struct xattr_handler {int dummy; } ;

/* Variables and functions */
 int SQUASHFS_XATTR_PREFIX_MASK ; 
#define  SQUASHFS_XATTR_SECURITY 130 
#define  SQUASHFS_XATTR_TRUSTED 129 
#define  SQUASHFS_XATTR_USER 128 
 int SQUASHFS_XATTR_VALUE_OOL ; 
 struct xattr_handler const squashfs_xattr_security_handler ; 
 struct xattr_handler const squashfs_xattr_trusted_handler ; 
 struct xattr_handler const squashfs_xattr_user_handler ; 

__attribute__((used)) static const struct xattr_handler *squashfs_xattr_handler(int type)
{
	if (type & ~(SQUASHFS_XATTR_PREFIX_MASK | SQUASHFS_XATTR_VALUE_OOL))
		/* ignore unrecognised type */
		return NULL;

	switch (type & SQUASHFS_XATTR_PREFIX_MASK) {
	case SQUASHFS_XATTR_USER:
		return &squashfs_xattr_user_handler;
	case SQUASHFS_XATTR_TRUSTED:
		return &squashfs_xattr_trusted_handler;
	case SQUASHFS_XATTR_SECURITY:
		return &squashfs_xattr_security_handler;
	default:
		/* ignore unrecognised type */
		return NULL;
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

    // big-arr
    case 0:
    {
          int type = 255;
          const struct xattr_handler * benchRet = squashfs_xattr_handler(type);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
