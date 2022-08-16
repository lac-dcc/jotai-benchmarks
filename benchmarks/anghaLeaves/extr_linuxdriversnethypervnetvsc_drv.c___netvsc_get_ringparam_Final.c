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
typedef  int u32 ;
struct netvsc_device {scalar_t__ nvsp_version; int recv_section_size; int send_section_size; int /*<<< orphan*/  send_section_cnt; int /*<<< orphan*/  recv_section_cnt; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; int /*<<< orphan*/  tx_pending; int /*<<< orphan*/  rx_pending; } ;

/* Variables and functions */
 int NETVSC_RECEIVE_BUFFER_SIZE ; 
 int NETVSC_RECEIVE_BUFFER_SIZE_LEGACY ; 
 int NETVSC_SEND_BUFFER_SIZE ; 
 scalar_t__ NVSP_PROTOCOL_VERSION_2 ; 

__attribute__((used)) static void __netvsc_get_ringparam(struct netvsc_device *nvdev,
				   struct ethtool_ringparam *ring)
{
	u32 max_buf_size;

	ring->rx_pending = nvdev->recv_section_cnt;
	ring->tx_pending = nvdev->send_section_cnt;

	if (nvdev->nvsp_version <= NVSP_PROTOCOL_VERSION_2)
		max_buf_size = NETVSC_RECEIVE_BUFFER_SIZE_LEGACY;
	else
		max_buf_size = NETVSC_RECEIVE_BUFFER_SIZE;

	ring->rx_max_pending = max_buf_size / nvdev->recv_section_size;
	ring->tx_max_pending = NETVSC_SEND_BUFFER_SIZE
		/ nvdev->send_section_size;
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
          int _len_nvdev0 = 1;
          struct netvsc_device * nvdev = (struct netvsc_device *) malloc(_len_nvdev0*sizeof(struct netvsc_device));
          for(int _i0 = 0; _i0 < _len_nvdev0; _i0++) {
            nvdev[_i0].nvsp_version = ((-2 * (next_i()%2)) + 1) * next_i();
        nvdev[_i0].recv_section_size = ((-2 * (next_i()%2)) + 1) * next_i();
        nvdev[_i0].send_section_size = ((-2 * (next_i()%2)) + 1) * next_i();
        nvdev[_i0].send_section_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        nvdev[_i0].recv_section_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring0 = 1;
          struct ethtool_ringparam * ring = (struct ethtool_ringparam *) malloc(_len_ring0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].rx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].tx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].tx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].rx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __netvsc_get_ringparam(nvdev,ring);
          free(nvdev);
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
