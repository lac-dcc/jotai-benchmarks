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
       1            big-arr-10x\n\
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
struct afs_vnode {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void afs_get_inode_cache(struct afs_vnode *vnode)
{
#ifdef CONFIG_AFS_FSCACHE
	struct {
		u32 vnode_id;
		u32 unique;
		u32 vnode_id_ext[2];	/* Allow for a 96-bit key */
	} __packed key;
	struct afs_vnode_cache_aux aux;

	if (vnode->status.type == AFS_FTYPE_DIR) {
		vnode->cache = NULL;
		return;
	}

	key.vnode_id		= vnode->fid.vnode;
	key.unique		= vnode->fid.unique;
	key.vnode_id_ext[0]	= 0;
	key.vnode_id_ext[1]	= 0;
	aux.data_version	= vnode->status.data_version;

	vnode->cache = fscache_acquire_cookie(vnode->volume->cache,
					      &afs_vnode_cache_index_def,
					      &key, sizeof(key),
					      &aux, sizeof(aux),
					      vnode, vnode->status.size, true);
#endif
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
          int _len_vnode0 = 1;
          struct afs_vnode * vnode = (struct afs_vnode *) malloc(_len_vnode0*sizeof(struct afs_vnode));
          for(int _i0 = 0; _i0 < _len_vnode0; _i0++) {
            vnode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          afs_get_inode_cache(vnode);
          free(vnode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vnode0 = 100;
          struct afs_vnode * vnode = (struct afs_vnode *) malloc(_len_vnode0*sizeof(struct afs_vnode));
          for(int _i0 = 0; _i0 < _len_vnode0; _i0++) {
            vnode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          afs_get_inode_cache(vnode);
          free(vnode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
