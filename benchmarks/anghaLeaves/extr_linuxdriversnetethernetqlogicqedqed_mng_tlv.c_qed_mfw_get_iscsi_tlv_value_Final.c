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
struct qed_mfw_tlv_iscsi {int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  tx_bytes_set; int /*<<< orphan*/  tx_frames; int /*<<< orphan*/  tx_frames_set; int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  rx_bytes_set; int /*<<< orphan*/  rx_frames; int /*<<< orphan*/  rx_frames_set; int /*<<< orphan*/  rx_desc_qdepth; int /*<<< orphan*/  rx_desc_qdepth_set; int /*<<< orphan*/  tx_desc_qdepth; int /*<<< orphan*/  tx_desc_qdepth_set; int /*<<< orphan*/  boot_progress; int /*<<< orphan*/  boot_progress_set; int /*<<< orphan*/  rx_desc_size; int /*<<< orphan*/  rx_desc_size_set; int /*<<< orphan*/  tx_desc_size; int /*<<< orphan*/  tx_desc_size_set; int /*<<< orphan*/  frame_size; int /*<<< orphan*/  frame_size_set; int /*<<< orphan*/  boot_taget_portal; int /*<<< orphan*/  boot_taget_portal_set; int /*<<< orphan*/  auth_method; int /*<<< orphan*/  auth_method_set; int /*<<< orphan*/  data_digest; int /*<<< orphan*/  data_digest_set; int /*<<< orphan*/  header_digest; int /*<<< orphan*/  header_digest_set; int /*<<< orphan*/  target_llmnr; int /*<<< orphan*/  target_llmnr_set; } ;
struct qed_drv_tlv_hdr {int tlv_type; } ;

/* Variables and functions */
#define  DRV_TLV_AUTHENTICATION_METHOD 142 
#define  DRV_TLV_DATA_DIGEST_FLAG_ENABLED 141 
#define  DRV_TLV_HEADER_DIGEST_FLAG_ENABLED 140 
#define  DRV_TLV_ISCSI_BOOT_PROGRESS 139 
#define  DRV_TLV_ISCSI_BOOT_TARGET_PORTAL 138 
#define  DRV_TLV_ISCSI_PDU_RX_BYTES_RECEIVED 137 
#define  DRV_TLV_ISCSI_PDU_RX_FRAMES_RECEIVED 136 
#define  DRV_TLV_ISCSI_PDU_TX_BYTES_SENT 135 
#define  DRV_TLV_ISCSI_PDU_TX_FRAMES_SENT 134 
#define  DRV_TLV_MAX_FRAME_SIZE 133 
#define  DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_AVG_DEPTH 132 
#define  DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_SIZE 131 
#define  DRV_TLV_PDU_TX_DESCRIPTORS_QUEUE_SIZE 130 
#define  DRV_TLV_PDU_TX_DESCRIPTOR_QUEUE_AVG_DEPTH 129 
#define  DRV_TLV_TARGET_LLMNR_ENABLED 128 

__attribute__((used)) static int
qed_mfw_get_iscsi_tlv_value(struct qed_drv_tlv_hdr *p_tlv,
			    struct qed_mfw_tlv_iscsi *p_drv_buf,
			    struct qed_tlv_parsed_buf *p_buf)
{
	switch (p_tlv->tlv_type) {
	case DRV_TLV_TARGET_LLMNR_ENABLED:
		if (p_drv_buf->target_llmnr_set) {
			p_buf->p_val = &p_drv_buf->target_llmnr;
			return sizeof(p_drv_buf->target_llmnr);
		}
		break;
	case DRV_TLV_HEADER_DIGEST_FLAG_ENABLED:
		if (p_drv_buf->header_digest_set) {
			p_buf->p_val = &p_drv_buf->header_digest;
			return sizeof(p_drv_buf->header_digest);
		}
		break;
	case DRV_TLV_DATA_DIGEST_FLAG_ENABLED:
		if (p_drv_buf->data_digest_set) {
			p_buf->p_val = &p_drv_buf->data_digest;
			return sizeof(p_drv_buf->data_digest);
		}
		break;
	case DRV_TLV_AUTHENTICATION_METHOD:
		if (p_drv_buf->auth_method_set) {
			p_buf->p_val = &p_drv_buf->auth_method;
			return sizeof(p_drv_buf->auth_method);
		}
		break;
	case DRV_TLV_ISCSI_BOOT_TARGET_PORTAL:
		if (p_drv_buf->boot_taget_portal_set) {
			p_buf->p_val = &p_drv_buf->boot_taget_portal;
			return sizeof(p_drv_buf->boot_taget_portal);
		}
		break;
	case DRV_TLV_MAX_FRAME_SIZE:
		if (p_drv_buf->frame_size_set) {
			p_buf->p_val = &p_drv_buf->frame_size;
			return sizeof(p_drv_buf->frame_size);
		}
		break;
	case DRV_TLV_PDU_TX_DESCRIPTORS_QUEUE_SIZE:
		if (p_drv_buf->tx_desc_size_set) {
			p_buf->p_val = &p_drv_buf->tx_desc_size;
			return sizeof(p_drv_buf->tx_desc_size);
		}
		break;
	case DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_SIZE:
		if (p_drv_buf->rx_desc_size_set) {
			p_buf->p_val = &p_drv_buf->rx_desc_size;
			return sizeof(p_drv_buf->rx_desc_size);
		}
		break;
	case DRV_TLV_ISCSI_BOOT_PROGRESS:
		if (p_drv_buf->boot_progress_set) {
			p_buf->p_val = &p_drv_buf->boot_progress;
			return sizeof(p_drv_buf->boot_progress);
		}
		break;
	case DRV_TLV_PDU_TX_DESCRIPTOR_QUEUE_AVG_DEPTH:
		if (p_drv_buf->tx_desc_qdepth_set) {
			p_buf->p_val = &p_drv_buf->tx_desc_qdepth;
			return sizeof(p_drv_buf->tx_desc_qdepth);
		}
		break;
	case DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_AVG_DEPTH:
		if (p_drv_buf->rx_desc_qdepth_set) {
			p_buf->p_val = &p_drv_buf->rx_desc_qdepth;
			return sizeof(p_drv_buf->rx_desc_qdepth);
		}
		break;
	case DRV_TLV_ISCSI_PDU_RX_FRAMES_RECEIVED:
		if (p_drv_buf->rx_frames_set) {
			p_buf->p_val = &p_drv_buf->rx_frames;
			return sizeof(p_drv_buf->rx_frames);
		}
		break;
	case DRV_TLV_ISCSI_PDU_RX_BYTES_RECEIVED:
		if (p_drv_buf->rx_bytes_set) {
			p_buf->p_val = &p_drv_buf->rx_bytes;
			return sizeof(p_drv_buf->rx_bytes);
		}
		break;
	case DRV_TLV_ISCSI_PDU_TX_FRAMES_SENT:
		if (p_drv_buf->tx_frames_set) {
			p_buf->p_val = &p_drv_buf->tx_frames;
			return sizeof(p_drv_buf->tx_frames);
		}
		break;
	case DRV_TLV_ISCSI_PDU_TX_BYTES_SENT:
		if (p_drv_buf->tx_bytes_set) {
			p_buf->p_val = &p_drv_buf->tx_bytes;
			return sizeof(p_drv_buf->tx_bytes);
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
          struct qed_mfw_tlv_iscsi * p_drv_buf = (struct qed_mfw_tlv_iscsi *) malloc(_len_p_drv_buf0*sizeof(struct qed_mfw_tlv_iscsi));
          for(int _i0 = 0; _i0 < _len_p_drv_buf0; _i0++) {
            p_drv_buf[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_bytes_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_frames_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_bytes_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_frames_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_desc_qdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_desc_qdepth_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_desc_qdepth = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_desc_qdepth_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].boot_progress = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].boot_progress_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_desc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].rx_desc_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_desc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].tx_desc_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].frame_size_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].boot_taget_portal = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].boot_taget_portal_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].auth_method = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].auth_method_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].data_digest = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].data_digest_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].header_digest = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].header_digest_set = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].target_llmnr = ((-2 * (next_i()%2)) + 1) * next_i();
        p_drv_buf[_i0].target_llmnr_set = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = qed_mfw_get_iscsi_tlv_value(p_tlv,p_drv_buf,p_buf);
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
