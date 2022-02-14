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
typedef  int uint32_t ;

/* Variables and functions */
 int KAUTH_ACE_GENERIC_EXECUTE ; 
 int KAUTH_ACE_GENERIC_READ ; 
 int KAUTH_ACE_GENERIC_WRITE ; 
 int KAUTH_VNODE_ADD_FILE ; 
 int KAUTH_VNODE_ADD_SUBDIRECTORY ; 
 int KAUTH_VNODE_APPEND_DATA ; 
 int KAUTH_VNODE_CHANGE_OWNER ; 
 int KAUTH_VNODE_DELETE ; 
 int KAUTH_VNODE_DELETE_CHILD ; 
 int KAUTH_VNODE_EXECUTE ; 
 int KAUTH_VNODE_LIST_DIRECTORY ; 
 int KAUTH_VNODE_READ_ATTRIBUTES ; 
 int KAUTH_VNODE_READ_DATA ; 
 int KAUTH_VNODE_READ_EXTATTRIBUTES ; 
 int KAUTH_VNODE_READ_SECURITY ; 
 int KAUTH_VNODE_SYNCHRONIZE ; 
 int KAUTH_VNODE_WRITE_ATTRIBUTES ; 
 int KAUTH_VNODE_WRITE_DATA ; 
 int KAUTH_VNODE_WRITE_EXTATTRIBUTES ; 
 int KAUTH_VNODE_WRITE_SECURITY ; 
 int NFS_ACE_ADD_FILE ; 
 int NFS_ACE_ADD_SUBDIRECTORY ; 
 int NFS_ACE_APPEND_DATA ; 
 int NFS_ACE_DELETE ; 
 int NFS_ACE_DELETE_CHILD ; 
 int NFS_ACE_EXECUTE ; 
 int NFS_ACE_GENERIC_EXECUTE ; 
 int NFS_ACE_GENERIC_READ ; 
 int NFS_ACE_GENERIC_WRITE ; 
 int NFS_ACE_LIST_DIRECTORY ; 
 int NFS_ACE_READ_ACL ; 
 int NFS_ACE_READ_ATTRIBUTES ; 
 int NFS_ACE_READ_DATA ; 
 int NFS_ACE_READ_NAMED_ATTRS ; 
 int NFS_ACE_SYNCHRONIZE ; 
 int NFS_ACE_WRITE_ACL ; 
 int NFS_ACE_WRITE_ATTRIBUTES ; 
 int NFS_ACE_WRITE_DATA ; 
 int NFS_ACE_WRITE_NAMED_ATTRS ; 
 int NFS_ACE_WRITE_OWNER ; 

uint32_t
nfs4_ace_nfsmask_to_vfsrights(uint32_t nfsmask)
{
	uint32_t vfsrights = 0;

	if (nfsmask & NFS_ACE_READ_DATA)
		vfsrights |= KAUTH_VNODE_READ_DATA;
	if (nfsmask & NFS_ACE_LIST_DIRECTORY)
		vfsrights |= KAUTH_VNODE_LIST_DIRECTORY;
	if (nfsmask & NFS_ACE_WRITE_DATA)
		vfsrights |= KAUTH_VNODE_WRITE_DATA;
	if (nfsmask & NFS_ACE_ADD_FILE)
		vfsrights |= KAUTH_VNODE_ADD_FILE;
	if (nfsmask & NFS_ACE_APPEND_DATA)
		vfsrights |= KAUTH_VNODE_APPEND_DATA;
	if (nfsmask & NFS_ACE_ADD_SUBDIRECTORY)
		vfsrights |= KAUTH_VNODE_ADD_SUBDIRECTORY;
	if (nfsmask & NFS_ACE_READ_NAMED_ATTRS)
		vfsrights |= KAUTH_VNODE_READ_EXTATTRIBUTES;
	if (nfsmask & NFS_ACE_WRITE_NAMED_ATTRS)
		vfsrights |= KAUTH_VNODE_WRITE_EXTATTRIBUTES;
	if (nfsmask & NFS_ACE_EXECUTE)
		vfsrights |= KAUTH_VNODE_EXECUTE;
	if (nfsmask & NFS_ACE_DELETE_CHILD)
		vfsrights |= KAUTH_VNODE_DELETE_CHILD;
	if (nfsmask & NFS_ACE_READ_ATTRIBUTES)
		vfsrights |= KAUTH_VNODE_READ_ATTRIBUTES;
	if (nfsmask & NFS_ACE_WRITE_ATTRIBUTES)
		vfsrights |= KAUTH_VNODE_WRITE_ATTRIBUTES;
	if (nfsmask & NFS_ACE_DELETE)
		vfsrights |= KAUTH_VNODE_DELETE;
	if (nfsmask & NFS_ACE_READ_ACL)
		vfsrights |= KAUTH_VNODE_READ_SECURITY;
	if (nfsmask & NFS_ACE_WRITE_ACL)
		vfsrights |= KAUTH_VNODE_WRITE_SECURITY;
	if (nfsmask & NFS_ACE_WRITE_OWNER)
		vfsrights |= KAUTH_VNODE_CHANGE_OWNER;
	if (nfsmask & NFS_ACE_SYNCHRONIZE)
		vfsrights |= KAUTH_VNODE_SYNCHRONIZE;
	if ((nfsmask & NFS_ACE_GENERIC_READ) == NFS_ACE_GENERIC_READ)
		vfsrights |= KAUTH_ACE_GENERIC_READ;
	if ((nfsmask & NFS_ACE_GENERIC_WRITE) == NFS_ACE_GENERIC_WRITE)
		vfsrights |= KAUTH_ACE_GENERIC_WRITE;
	if ((nfsmask & NFS_ACE_GENERIC_EXECUTE) == NFS_ACE_GENERIC_EXECUTE)
		vfsrights |= KAUTH_ACE_GENERIC_EXECUTE;

	return (vfsrights);
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
          int nfsmask = 255;
          int benchRet = nfs4_ace_nfsmask_to_vfsrights(nfsmask);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
