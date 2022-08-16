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
struct kstatfs {int /*<<< orphan*/  f_namelen; int /*<<< orphan*/  f_ffree; int /*<<< orphan*/  f_files; int /*<<< orphan*/  f_bavail; int /*<<< orphan*/  f_bfree; int /*<<< orphan*/  f_blocks; int /*<<< orphan*/  f_frsize; int /*<<< orphan*/  f_bsize; int /*<<< orphan*/  f_type; } ;
struct fuse_kstatfs {int /*<<< orphan*/  namelen; int /*<<< orphan*/  ffree; int /*<<< orphan*/  files; int /*<<< orphan*/  bavail; int /*<<< orphan*/  bfree; int /*<<< orphan*/  blocks; int /*<<< orphan*/  frsize; int /*<<< orphan*/  bsize; } ;

/* Variables and functions */
 int /*<<< orphan*/  FUSE_SUPER_MAGIC ; 

__attribute__((used)) static void convert_fuse_statfs(struct kstatfs *stbuf, struct fuse_kstatfs *attr)
{
	stbuf->f_type    = FUSE_SUPER_MAGIC;
	stbuf->f_bsize   = attr->bsize;
	stbuf->f_frsize  = attr->frsize;
	stbuf->f_blocks  = attr->blocks;
	stbuf->f_bfree   = attr->bfree;
	stbuf->f_bavail  = attr->bavail;
	stbuf->f_files   = attr->files;
	stbuf->f_ffree   = attr->ffree;
	stbuf->f_namelen = attr->namelen;
	/* fsid is left zero */
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
          int _len_stbuf0 = 1;
          struct kstatfs * stbuf = (struct kstatfs *) malloc(_len_stbuf0*sizeof(struct kstatfs));
          for(int _i0 = 0; _i0 < _len_stbuf0; _i0++) {
            stbuf[_i0].f_namelen = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_ffree = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_files = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_bavail = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_bfree = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_frsize = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_bsize = ((-2 * (next_i()%2)) + 1) * next_i();
        stbuf[_i0].f_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct fuse_kstatfs * attr = (struct fuse_kstatfs *) malloc(_len_attr0*sizeof(struct fuse_kstatfs));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].ffree = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].files = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].bavail = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].bfree = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].frsize = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].bsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_fuse_statfs(stbuf,attr);
          free(stbuf);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
