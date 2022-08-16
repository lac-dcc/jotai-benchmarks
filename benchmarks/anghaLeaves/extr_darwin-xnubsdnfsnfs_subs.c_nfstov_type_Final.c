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
typedef  int nfstype ;
typedef  enum vtype { ____Placeholder_vtype } vtype ;

/* Variables and functions */
#define  NFATTRDIR 137 
#define  NFBLK 136 
#define  NFCHR 135 
#define  NFDIR 134 
#define  NFFIFO 133 
#define  NFLNK 132 
#define  NFNAMEDATTR 131 
#define  NFNON 130 
#define  NFREG 129 
#define  NFSOCK 128 
 int NFS_VER2 ; 
 int NFS_VER3 ; 
 int VBLK ; 
 int VCHR ; 
 int VDIR ; 
 int VFIFO ; 
 int VLNK ; 
 int VNON ; 
 int VREG ; 
 int VSOCK ; 

enum vtype
nfstov_type(nfstype nvtype, int nfsvers)
{
	switch (nvtype) {
	case NFNON:
		return VNON;
	case NFREG:
		return VREG;
	case NFDIR:
		return VDIR;
	case NFBLK:
		return VBLK;
	case NFCHR:
		return VCHR;
	case NFLNK:
		return VLNK;
	case NFSOCK:
		if (nfsvers > NFS_VER2)
			return VSOCK;
	case NFFIFO:
		if (nfsvers > NFS_VER2)
			return VFIFO;
	case NFATTRDIR:
		if (nfsvers > NFS_VER3)
			return VDIR;
	case NFNAMEDATTR:
		if (nfsvers > NFS_VER3)
			return VREG;
	default:
		return VNON;
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
          int nvtype = 100;
          int nfsvers = 100;
          enum vtype benchRet = nfstov_type(nvtype,nfsvers);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nvtype = 255;
          int nfsvers = 255;
          enum vtype benchRet = nfstov_type(nvtype,nfsvers);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nvtype = 10;
          int nfsvers = 10;
          enum vtype benchRet = nfstov_type(nvtype,nfsvers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
