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
struct TYPE_4__ {struct hpt_iop_request_get_config* config; } ;
struct TYPE_5__ {TYPE_1__ mvfrey; } ;
struct hptiop_hba {TYPE_2__ u; } ;
struct TYPE_6__ {int size; scalar_t__ type; } ;
struct hpt_iop_request_get_config {int /*<<< orphan*/  sdram_size; int /*<<< orphan*/  max_devices; int /*<<< orphan*/  alignment_mask; int /*<<< orphan*/  data_transfer_length; int /*<<< orphan*/  max_sg_count; int /*<<< orphan*/  request_size; int /*<<< orphan*/  max_requests; int /*<<< orphan*/  firmware_version; int /*<<< orphan*/  interface_version; TYPE_3__ header; } ;

/* Variables and functions */
 scalar_t__ IOP_REQUEST_TYPE_GET_CONFIG ; 

__attribute__((used)) static int iop_get_config_mvfrey(struct hptiop_hba *hba,
				struct hpt_iop_request_get_config *config)
{
	struct hpt_iop_request_get_config *info = hba->u.mvfrey.config;

	if (info->header.size != sizeof(struct hpt_iop_request_get_config) ||
			info->header.type != IOP_REQUEST_TYPE_GET_CONFIG)
		return -1;

	config->interface_version = info->interface_version;
	config->firmware_version = info->firmware_version;
	config->max_requests = info->max_requests;
	config->request_size = info->request_size;
	config->max_sg_count = info->max_sg_count;
	config->data_transfer_length = info->data_transfer_length;
	config->alignment_mask = info->alignment_mask;
	config->max_devices = info->max_devices;
	config->sdram_size = info->sdram_size;

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
          int _len_hba0 = 1;
          struct hptiop_hba * hba = (struct hptiop_hba *) malloc(_len_hba0*sizeof(struct hptiop_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
              int _len_hba__i0__u_mvfrey_config0 = 1;
          hba[_i0].u.mvfrey.config = (struct hpt_iop_request_get_config *) malloc(_len_hba__i0__u_mvfrey_config0*sizeof(struct hpt_iop_request_get_config));
          for(int _j0 = 0; _j0 < _len_hba__i0__u_mvfrey_config0; _j0++) {
            hba[_i0].u.mvfrey.config->sdram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->max_devices = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->alignment_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->data_transfer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->max_sg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->request_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->max_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->firmware_version = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->interface_version = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->header.size = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].u.mvfrey.config->header.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_config0 = 1;
          struct hpt_iop_request_get_config * config = (struct hpt_iop_request_get_config *) malloc(_len_config0*sizeof(struct hpt_iop_request_get_config));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].sdram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].max_devices = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].alignment_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].data_transfer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].max_sg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].request_size = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].max_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].firmware_version = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].interface_version = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].header.size = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].header.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iop_get_config_mvfrey(hba,config);
          printf("%d\n", benchRet); 
          free(hba);
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
