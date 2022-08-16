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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ os_type; } ;
struct scsi_info {TYPE_1__ client_data; scalar_t__ client_cap; } ;

/* Variables and functions */

__attribute__((used)) static void ibmvscsis_delete_client_info(struct scsi_info *vscsi,
					 bool client_closed)
{
	vscsi->client_cap = 0;

	/*
	 * Some things we don't want to clear if we're closing the queue,
	 * because some clients don't resend the host handshake when they
	 * get a transport event.
	 */
	if (client_closed)
		vscsi->client_data.os_type = 0;
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
          int client_closed = 100;
          int _len_vscsi0 = 1;
          struct scsi_info * vscsi = (struct scsi_info *) malloc(_len_vscsi0*sizeof(struct scsi_info));
          for(int _i0 = 0; _i0 < _len_vscsi0; _i0++) {
            vscsi[_i0].client_data.os_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vscsi[_i0].client_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ibmvscsis_delete_client_info(vscsi,client_closed);
          free(vscsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
