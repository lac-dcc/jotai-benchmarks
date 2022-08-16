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
struct net_device_stats {int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  rx_frame_errors; int /*<<< orphan*/  rx_length_errors; int /*<<< orphan*/  rx_over_errors; int /*<<< orphan*/  rx_crc_errors; } ;

/* Variables and functions */
 int ABORT ; 
 int COLON ; 
 int CRCOK ; 
 int LIMIT ; 
 int MIIER ; 
 int NIBON ; 
 int OVRUN ; 
 int SHORT ; 

__attribute__((used)) static inline int sis190_rx_pkt_err(u32 status, struct net_device_stats *stats)
{
#define ErrMask	(OVRUN | SHORT | LIMIT | MIIER | NIBON | COLON | ABORT)

	if ((status & CRCOK) && !(status & ErrMask))
		return 0;

	if (!(status & CRCOK))
		stats->rx_crc_errors++;
	else if (status & OVRUN)
		stats->rx_over_errors++;
	else if (status & (SHORT | LIMIT))
		stats->rx_length_errors++;
	else if (status & (MIIER | NIBON | COLON))
		stats->rx_frame_errors++;

	stats->rx_errors++;
	return -1;
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
          int status = 100;
          int _len_stats0 = 1;
          struct net_device_stats * stats = (struct net_device_stats *) malloc(_len_stats0*sizeof(struct net_device_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_over_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sis190_rx_pkt_err(status,stats);
          printf("%d\n", benchRet); 
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
