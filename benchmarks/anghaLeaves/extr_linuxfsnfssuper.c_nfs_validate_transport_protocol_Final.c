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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int protocol; } ;
struct nfs_parsed_mount_data {TYPE_1__ nfs_server; } ;

/* Variables and functions */
#define  XPRT_TRANSPORT_RDMA 130 
#define  XPRT_TRANSPORT_TCP 129 
#define  XPRT_TRANSPORT_UDP 128 

__attribute__((used)) static void nfs_validate_transport_protocol(struct nfs_parsed_mount_data *mnt)
{
	switch (mnt->nfs_server.protocol) {
	case XPRT_TRANSPORT_UDP:
	case XPRT_TRANSPORT_TCP:
	case XPRT_TRANSPORT_RDMA:
		break;
	default:
		mnt->nfs_server.protocol = XPRT_TRANSPORT_TCP;
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
          int _len_mnt0 = 1;
          struct nfs_parsed_mount_data * mnt = (struct nfs_parsed_mount_data *) malloc(_len_mnt0*sizeof(struct nfs_parsed_mount_data));
          for(int _i0 = 0; _i0 < _len_mnt0; _i0++) {
            mnt[_i0].nfs_server.protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_validate_transport_protocol(mnt);
          free(mnt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_mnt0 = 100;
          struct nfs_parsed_mount_data * mnt = (struct nfs_parsed_mount_data *) malloc(_len_mnt0*sizeof(struct nfs_parsed_mount_data));
          for(int _i0 = 0; _i0 < _len_mnt0; _i0++) {
            mnt[_i0].nfs_server.protocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_validate_transport_protocol(mnt);
          free(mnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
