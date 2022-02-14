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
typedef  int /*<<< orphan*/  nfstype ;
typedef  enum vtype { ____Placeholder_vtype } vtype ;

/* Variables and functions */
 int /*<<< orphan*/  NFBLK ; 
 int /*<<< orphan*/  NFCHR ; 
 int /*<<< orphan*/  NFDIR ; 
 int /*<<< orphan*/  NFFIFO ; 
 int /*<<< orphan*/  NFLNK ; 
 int /*<<< orphan*/  NFNON ; 
 int /*<<< orphan*/  NFREG ; 
 int /*<<< orphan*/  NFSOCK ; 
 int NFS_VER2 ; 
#define  VBAD 138 
#define  VBLK 137 
#define  VCHR 136 
#define  VCPLX 135 
#define  VDIR 134 
#define  VFIFO 133 
#define  VLNK 132 
#define  VNON 131 
#define  VREG 130 
#define  VSOCK 129 
#define  VSTR 128 

nfstype
vtonfs_type(enum vtype vtype, int nfsvers)
{
	switch (vtype) {
	case VNON:
		return NFNON;
	case VREG:
		return NFREG;
	case VDIR:
		return NFDIR;
	case VBLK:
		return NFBLK;
	case VCHR:
		return NFCHR;
	case VLNK:
		return NFLNK;
	case VSOCK:
		if (nfsvers > NFS_VER2)
			return NFSOCK;
	case VFIFO:
		if (nfsvers > NFS_VER2)
			return NFFIFO;
	case VBAD:
	case VSTR:
	case VCPLX:
	default:
		return NFNON;
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
          enum vtype vtype = 0;
          int nfsvers = 255;
          int benchRet = vtonfs_type(vtype,nfsvers);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
