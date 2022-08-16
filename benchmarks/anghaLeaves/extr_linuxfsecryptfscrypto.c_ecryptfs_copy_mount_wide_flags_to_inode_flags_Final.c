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
struct ecryptfs_mount_crypt_stat {int flags; } ;
struct ecryptfs_crypt_stat {int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  ECRYPTFS_ENCFN_USE_FEK ; 
 int /*<<< orphan*/  ECRYPTFS_ENCFN_USE_MOUNT_FNEK ; 
 int ECRYPTFS_ENCRYPTED_VIEW_ENABLED ; 
 int /*<<< orphan*/  ECRYPTFS_ENCRYPT_FILENAMES ; 
 int ECRYPTFS_GLOBAL_ENCFN_USE_FEK ; 
 int ECRYPTFS_GLOBAL_ENCFN_USE_MOUNT_FNEK ; 
 int ECRYPTFS_GLOBAL_ENCRYPT_FILENAMES ; 
 int /*<<< orphan*/  ECRYPTFS_METADATA_IN_XATTR ; 
 int /*<<< orphan*/  ECRYPTFS_VIEW_AS_ENCRYPTED ; 
 int ECRYPTFS_XATTR_METADATA_ENABLED ; 

__attribute__((used)) static void ecryptfs_copy_mount_wide_flags_to_inode_flags(
	struct ecryptfs_crypt_stat *crypt_stat,
	struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
{
	if (mount_crypt_stat->flags & ECRYPTFS_XATTR_METADATA_ENABLED)
		crypt_stat->flags |= ECRYPTFS_METADATA_IN_XATTR;
	if (mount_crypt_stat->flags & ECRYPTFS_ENCRYPTED_VIEW_ENABLED)
		crypt_stat->flags |= ECRYPTFS_VIEW_AS_ENCRYPTED;
	if (mount_crypt_stat->flags & ECRYPTFS_GLOBAL_ENCRYPT_FILENAMES) {
		crypt_stat->flags |= ECRYPTFS_ENCRYPT_FILENAMES;
		if (mount_crypt_stat->flags
		    & ECRYPTFS_GLOBAL_ENCFN_USE_MOUNT_FNEK)
			crypt_stat->flags |= ECRYPTFS_ENCFN_USE_MOUNT_FNEK;
		else if (mount_crypt_stat->flags
			 & ECRYPTFS_GLOBAL_ENCFN_USE_FEK)
			crypt_stat->flags |= ECRYPTFS_ENCFN_USE_FEK;
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
          int _len_crypt_stat0 = 1;
          struct ecryptfs_crypt_stat * crypt_stat = (struct ecryptfs_crypt_stat *) malloc(_len_crypt_stat0*sizeof(struct ecryptfs_crypt_stat));
          for(int _i0 = 0; _i0 < _len_crypt_stat0; _i0++) {
            crypt_stat[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mount_crypt_stat0 = 1;
          struct ecryptfs_mount_crypt_stat * mount_crypt_stat = (struct ecryptfs_mount_crypt_stat *) malloc(_len_mount_crypt_stat0*sizeof(struct ecryptfs_mount_crypt_stat));
          for(int _i0 = 0; _i0 < _len_mount_crypt_stat0; _i0++) {
            mount_crypt_stat[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ecryptfs_copy_mount_wide_flags_to_inode_flags(crypt_stat,mount_crypt_stat);
          free(crypt_stat);
          free(mount_crypt_stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
