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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  scalar_t__ ulong ;
typedef  scalar_t__ u32 ;
struct rndis_per_packet_info {scalar_t__ type; scalar_t__ ppi_offset; scalar_t__ size; } ;
struct rndis_packet {scalar_t__ per_pkt_info_offset; int per_pkt_info_len; } ;

/* Variables and functions */

__attribute__((used)) static inline void *rndis_get_ppi(struct rndis_packet *rpkt, u32 type)
{
	struct rndis_per_packet_info *ppi;
	int len;

	if (rpkt->per_pkt_info_offset == 0)
		return NULL;

	ppi = (struct rndis_per_packet_info *)((ulong)rpkt +
		rpkt->per_pkt_info_offset);
	len = rpkt->per_pkt_info_len;

	while (len > 0) {
		if (ppi->type == type)
			return (void *)((ulong)ppi + ppi->ppi_offset);
		len -= ppi->size;
		ppi = (struct rndis_per_packet_info *)((ulong)ppi + ppi->size);
	}

	return NULL;
}

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
          long type = 100;
        
          int _len_rpkt0 = 1;
          struct rndis_packet * rpkt = (struct rndis_packet *) malloc(_len_rpkt0*sizeof(struct rndis_packet));
          for(int _i0 = 0; _i0 < _len_rpkt0; _i0++) {
              rpkt[_i0].per_pkt_info_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          rpkt[_i0].per_pkt_info_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rndis_get_ppi(rpkt,type);
          free(rpkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
        
          int _len_rpkt0 = 65025;
          struct rndis_packet * rpkt = (struct rndis_packet *) malloc(_len_rpkt0*sizeof(struct rndis_packet));
          for(int _i0 = 0; _i0 < _len_rpkt0; _i0++) {
              rpkt[_i0].per_pkt_info_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          rpkt[_i0].per_pkt_info_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rndis_get_ppi(rpkt,type);
          free(rpkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
        
          int _len_rpkt0 = 100;
          struct rndis_packet * rpkt = (struct rndis_packet *) malloc(_len_rpkt0*sizeof(struct rndis_packet));
          for(int _i0 = 0; _i0 < _len_rpkt0; _i0++) {
              rpkt[_i0].per_pkt_info_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          rpkt[_i0].per_pkt_info_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rndis_get_ppi(rpkt,type);
          free(rpkt);
        
        break;
    }
    // empty
    case 3:
    {
          long type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rpkt0 = 1;
          struct rndis_packet * rpkt = (struct rndis_packet *) malloc(_len_rpkt0*sizeof(struct rndis_packet));
          for(int _i0 = 0; _i0 < _len_rpkt0; _i0++) {
              rpkt[_i0].per_pkt_info_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          rpkt[_i0].per_pkt_info_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = rndis_get_ppi(rpkt,type);
          free(rpkt);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
