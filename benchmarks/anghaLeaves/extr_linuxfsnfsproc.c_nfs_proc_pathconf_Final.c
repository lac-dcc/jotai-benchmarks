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
struct nfs_server {int dummy; } ;
struct nfs_pathconf {int /*<<< orphan*/  max_namelen; scalar_t__ max_link; } ;
struct nfs_fh {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  NFS2_MAXNAMLEN ; 

__attribute__((used)) static int
nfs_proc_pathconf(struct nfs_server *server, struct nfs_fh *fhandle,
		  struct nfs_pathconf *info)
{
	info->max_link = 0;
	info->max_namelen = NFS2_MAXNAMLEN;
	return 0;
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
          int _len_server0 = 1;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fhandle0 = 1;
          struct nfs_fh * fhandle = (struct nfs_fh *) malloc(_len_fhandle0*sizeof(struct nfs_fh));
          for(int _i0 = 0; _i0 < _len_fhandle0; _i0++) {
            fhandle[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct nfs_pathconf * info = (struct nfs_pathconf *) malloc(_len_info0*sizeof(struct nfs_pathconf));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].max_namelen = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfs_proc_pathconf(server,fhandle,info);
          printf("%d\n", benchRet); 
          free(server);
          free(fhandle);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
