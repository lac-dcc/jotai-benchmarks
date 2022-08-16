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
struct qed_tlv_parsed_buf {int /*<<< orphan*/ * p_val; } ;
struct qed_mfw_tlv_eth {int /*<<< orphan*/  num_rxqs_full; int /*<<< orphan*/  num_rxqs_full_set; int /*<<< orphan*/  num_txqs_full; int /*<<< orphan*/  num_txqs_full_set; int /*<<< orphan*/  rxqs_empty; int /*<<< orphan*/  rxqs_empty_set; int /*<<< orphan*/  txqs_empty; int /*<<< orphan*/  txqs_empty_set; int /*<<< orphan*/  iov_offload; int /*<<< orphan*/  iov_offload_set; int /*<<< orphan*/  rx_descr_qdepth; int /*<<< orphan*/  rx_descr_qdepth_set; int /*<<< orphan*/  tx_descr_qdepth; int /*<<< orphan*/  tx_descr_qdepth_set; int /*<<< orphan*/  tcp6_offloads; int /*<<< orphan*/  tcp6_offloads_set; int /*<<< orphan*/  tcp4_offloads; int /*<<< orphan*/  tcp4_offloads_set; int /*<<< orphan*/  netq_count; int /*<<< orphan*/  netq_count_set; int /*<<< orphan*/  rx_descr_size; int /*<<< orphan*/  rx_descr_size_set; int /*<<< orphan*/  tx_descr_size; int /*<<< orphan*/  tx_descr_size_set; int /*<<< orphan*/  prom_mode; int /*<<< orphan*/  prom_mode_set; int /*<<< orphan*/  lso_minseg_size; int /*<<< orphan*/  lso_minseg_size_set; int /*<<< orphan*/  lso_maxoff_size; int /*<<< orphan*/  lso_maxoff_size_set; } ;
struct qed_drv_tlv_hdr {int tlv_type; } ;

/* Variables and functions */
#define  DRV_TLV_IOV_OFFLOAD 142 
#define  DRV_TLV_LSO_MAX_OFFLOAD_SIZE 141 
#define  DRV_TLV_LSO_MIN_SEGMENT_COUNT 140 
#define  DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV4 139 
#define  DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV6 138 
#define  DRV_TLV_NUM_OF_NET_QUEUE_VMQ_CFG 137 
#define  DRV_TLV_PROMISCUOUS_MODE 136 
#define  DRV_TLV_RX_DESCRIPTORS_QUEUE_AVG_DEPTH 135 
#define  DRV_TLV_RX_DESCRIPTORS_QUEUE_SIZE 134 
#define  DRV_TLV_RX_QUEUES_EMPTY 133 
#define  DRV_TLV_RX_QUEUES_FULL 132 
#define  DRV_TLV_TX_DESCRIPTORS_QUEUE_SIZE 131 
#define  DRV_TLV_TX_DESCRIPTOR_QUEUE_AVG_DEPTH 130 
#define  DRV_TLV_TX_QUEUES_EMPTY 129 
#define  DRV_TLV_TX_QUEUES_FULL 128 

__attribute__((used)) static int
qed_mfw_get_eth_tlv_value(struct qed_drv_tlv_hdr *p_tlv,
			  struct qed_mfw_tlv_eth *p_drv_buf,
			  struct qed_tlv_parsed_buf *p_buf)
{
	switch (p_tlv->tlv_type) {
	case DRV_TLV_LSO_MAX_OFFLOAD_SIZE:
		if (p_drv_buf->lso_maxoff_size_set) {
			p_buf->p_val = &p_drv_buf->lso_maxoff_size;
			return sizeof(p_drv_buf->lso_maxoff_size);
		}
		break;
	case DRV_TLV_LSO_MIN_SEGMENT_COUNT:
		if (p_drv_buf->lso_minseg_size_set) {
			p_buf->p_val = &p_drv_buf->lso_minseg_size;
			return sizeof(p_drv_buf->lso_minseg_size);
		}
		break;
	case DRV_TLV_PROMISCUOUS_MODE:
		if (p_drv_buf->prom_mode_set) {
			p_buf->p_val = &p_drv_buf->prom_mode;
			return sizeof(p_drv_buf->prom_mode);
		}
		break;
	case DRV_TLV_TX_DESCRIPTORS_QUEUE_SIZE:
		if (p_drv_buf->tx_descr_size_set) {
			p_buf->p_val = &p_drv_buf->tx_descr_size;
			return sizeof(p_drv_buf->tx_descr_size);
		}
		break;
	case DRV_TLV_RX_DESCRIPTORS_QUEUE_SIZE:
		if (p_drv_buf->rx_descr_size_set) {
			p_buf->p_val = &p_drv_buf->rx_descr_size;
			return sizeof(p_drv_buf->rx_descr_size);
		}
		break;
	case DRV_TLV_NUM_OF_NET_QUEUE_VMQ_CFG:
		if (p_drv_buf->netq_count_set) {
			p_buf->p_val = &p_drv_buf->netq_count;
			return sizeof(p_drv_buf->netq_count);
		}
		break;
	case DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV4:
		if (p_drv_buf->tcp4_offloads_set) {
			p_buf->p_val = &p_drv_buf->tcp4_offloads;
			return sizeof(p_drv_buf->tcp4_offloads);
		}
		break;
	case DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV6:
		if (p_drv_buf->tcp6_offloads_set) {
			p_buf->p_val = &p_drv_buf->tcp6_offloads;
			return sizeof(p_drv_buf->tcp6_offloads);
		}
		break;
	case DRV_TLV_TX_DESCRIPTOR_QUEUE_AVG_DEPTH:
		if (p_drv_buf->tx_descr_qdepth_set) {
			p_buf->p_val = &p_drv_buf->tx_descr_qdepth;
			return sizeof(p_drv_buf->tx_descr_qdepth);
		}
		break;
	case DRV_TLV_RX_DESCRIPTORS_QUEUE_AVG_DEPTH:
		if (p_drv_buf->rx_descr_qdepth_set) {
			p_buf->p_val = &p_drv_buf->rx_descr_qdepth;
			return sizeof(p_drv_buf->rx_descr_qdepth);
		}
		break;
	case DRV_TLV_IOV_OFFLOAD:
		if (p_drv_buf->iov_offload_set) {
			p_buf->p_val = &p_drv_buf->iov_offload;
			return sizeof(p_drv_buf->iov_offload);
		}
		break;
	case DRV_TLV_TX_QUEUES_EMPTY:
		if (p_drv_buf->txqs_empty_set) {
			p_buf->p_val = &p_drv_buf->txqs_empty;
			return sizeof(p_drv_buf->txqs_empty);
		}
		break;
	case DRV_TLV_RX_QUEUES_EMPTY:
		if (p_drv_buf->rxqs_empty_set) {
			p_buf->p_val = &p_drv_buf->rxqs_empty;
			return sizeof(p_drv_buf->rxqs_empty);
		}
		break;
	case DRV_TLV_TX_QUEUES_FULL:
		if (p_drv_buf->num_txqs_full_set) {
			p_buf->p_val = &p_drv_buf->num_txqs_full;
			return sizeof(p_drv_buf->num_txqs_full);
		}
		break;
	case DRV_TLV_RX_QUEUES_FULL:
		if (p_drv_buf->num_rxqs_full_set) {
			p_buf->p_val = &p_drv_buf->num_rxqs_full;
			return sizeof(p_drv_buf->num_rxqs_full);
		}
		break;
	default:
		break;
	}

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
          int _len_p_tlv0 = 1;
          struct qed_drv_tlv_hdr * p_tlv = (struct qed_drv_tlv_hdr *) malloc(_len_p_tlv0*sizeof(struct qed_drv_tlv_hdr));
          for(int _i0 = 0; _i0 < _len_p_tlv0; _i0++) {
            p_tlv[_i0].tlv_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_drv_buf0 = 1;
          struct qed_mfw_tlv_eth * p_drv_buf = (struct qed_mfw_tlv_eth *) malloc(_len_p_drv_buf0*sizeof(struct qed_mfw_tlv_eth));
          for(int _i0 = 0; _i0 < _len_p_drv_buf0; _i0++) {
            p_drv_buf[_i0].num_rxqs_full = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].num_rxqs_full_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].num_txqs_full = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].num_txqs_full_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rxqs_empty = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rxqs_empty_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].txqs_empty = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].txqs_empty_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].iov_offload = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].iov_offload_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_descr_qdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_descr_qdepth_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_descr_qdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_descr_qdepth_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tcp6_offloads = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tcp6_offloads_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tcp4_offloads = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tcp4_offloads_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].netq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].netq_count_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_descr_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_descr_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_descr_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_descr_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].prom_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].prom_mode_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].lso_minseg_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].lso_minseg_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].lso_maxoff_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].lso_maxoff_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_buf0 = 1;
          struct qed_tlv_parsed_buf * p_buf = (struct qed_tlv_parsed_buf *) malloc(_len_p_buf0*sizeof(struct qed_tlv_parsed_buf));
          for(int _i0 = 0; _i0 < _len_p_buf0; _i0++) {
              int _len_p_buf__i0__p_val0 = 1;
          p_buf[_i0].p_val = (int *) malloc(_len_p_buf__i0__p_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p_buf__i0__p_val0; _j0++) {
            p_buf[_i0].p_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qed_mfw_get_eth_tlv_value(p_tlv,p_drv_buf,p_buf);
          printf("%d\n", benchRet); 
          free(p_tlv);
          free(p_drv_buf);
          for(int _aux = 0; _aux < _len_p_buf0; _aux++) {
          free(p_buf[_aux].p_val);
          }
          free(p_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
