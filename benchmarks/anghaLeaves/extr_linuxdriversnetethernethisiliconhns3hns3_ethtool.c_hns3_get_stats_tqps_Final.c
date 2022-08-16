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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  void* u64 ;
struct hns3_nic_priv {TYPE_1__* ring_data; } ;
struct hns3_enet_ring {int dummy; } ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; scalar_t__ priv; } ;
struct TYPE_6__ {int stats_offset; } ;
struct TYPE_5__ {int stats_offset; } ;
struct TYPE_4__ {struct hns3_enet_ring* ring; } ;

/* Variables and functions */
 int HNS3_RXQ_STATS_COUNT ; 
 int HNS3_TXQ_STATS_COUNT ; 
 TYPE_3__* hns3_rxq_stats ; 
 TYPE_2__* hns3_txq_stats ; 

__attribute__((used)) static u64 *hns3_get_stats_tqps(struct hnae3_handle *handle, u64 *data)
{
	struct hns3_nic_priv *nic_priv = (struct hns3_nic_priv *)handle->priv;
	struct hnae3_knic_private_info *kinfo = &handle->kinfo;
	struct hns3_enet_ring *ring;
	u8 *stat;
	int i, j;

	/* get stats for Tx */
	for (i = 0; i < kinfo->num_tqps; i++) {
		ring = nic_priv->ring_data[i].ring;
		for (j = 0; j < HNS3_TXQ_STATS_COUNT; j++) {
			stat = (u8 *)ring + hns3_txq_stats[j].stats_offset;
			*data++ = *(u64 *)stat;
		}
	}

	/* get stats for Rx */
	for (i = 0; i < kinfo->num_tqps; i++) {
		ring = nic_priv->ring_data[i + kinfo->num_tqps].ring;
		for (j = 0; j < HNS3_RXQ_STATS_COUNT; j++) {
			stat = (u8 *)ring + hns3_rxq_stats[j].stats_offset;
			*data++ = *(u64 *)stat;
		}
	}

	return data;
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
          int _len_handle0 = 1;
          struct hnae3_handle * handle = (struct hnae3_handle *) malloc(_len_handle0*sizeof(struct hnae3_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].kinfo.num_tqps = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
          void ** benchRet = hns3_get_stats_tqps(handle,data);
          free(handle);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
