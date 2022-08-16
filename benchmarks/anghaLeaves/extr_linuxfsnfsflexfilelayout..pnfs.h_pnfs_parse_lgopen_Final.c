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
struct nfs_open_context {int dummy; } ;
struct nfs4_layoutget {int dummy; } ;
struct inode {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void pnfs_parse_lgopen(struct inode *ino,
		struct nfs4_layoutget *lgp,
		struct nfs_open_context *ctx)
{
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
          int _len_ino0 = 1;
          struct inode * ino = (struct inode *) malloc(_len_ino0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_ino0; _i0++) {
            ino[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lgp0 = 1;
          struct nfs4_layoutget * lgp = (struct nfs4_layoutget *) malloc(_len_lgp0*sizeof(struct nfs4_layoutget));
          for(int _i0 = 0; _i0 < _len_lgp0; _i0++) {
            lgp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct nfs_open_context * ctx = (struct nfs_open_context *) malloc(_len_ctx0*sizeof(struct nfs_open_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pnfs_parse_lgopen(ino,lgp,ctx);
          free(ino);
          free(lgp);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
