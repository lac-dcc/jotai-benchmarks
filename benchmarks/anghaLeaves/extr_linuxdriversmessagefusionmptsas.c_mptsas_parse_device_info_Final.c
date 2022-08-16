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
typedef  int u16 ;
struct sas_identify {int /*<<< orphan*/  device_type; int /*<<< orphan*/  target_port_protocols; int /*<<< orphan*/  initiator_port_protocols; int /*<<< orphan*/  phy_identifier; int /*<<< orphan*/  sas_address; } ;
struct mptsas_devinfo {int device_info; int /*<<< orphan*/  phy_id; int /*<<< orphan*/  sas_address; } ;

/* Variables and functions */
#define  MPI_SAS_DEVICE_INFO_EDGE_EXPANDER 131 
#define  MPI_SAS_DEVICE_INFO_END_DEVICE 130 
#define  MPI_SAS_DEVICE_INFO_FANOUT_EXPANDER 129 
 int MPI_SAS_DEVICE_INFO_MASK_DEVICE_TYPE ; 
#define  MPI_SAS_DEVICE_INFO_NO_DEVICE 128 
 int MPI_SAS_DEVICE_INFO_SATA_DEVICE ; 
 int MPI_SAS_DEVICE_INFO_SATA_HOST ; 
 int MPI_SAS_DEVICE_INFO_SMP_INITIATOR ; 
 int MPI_SAS_DEVICE_INFO_SMP_TARGET ; 
 int MPI_SAS_DEVICE_INFO_SSP_INITIATOR ; 
 int MPI_SAS_DEVICE_INFO_SSP_TARGET ; 
 int MPI_SAS_DEVICE_INFO_STP_INITIATOR ; 
 int MPI_SAS_DEVICE_INFO_STP_TARGET ; 
 int /*<<< orphan*/  SAS_EDGE_EXPANDER_DEVICE ; 
 int /*<<< orphan*/  SAS_END_DEVICE ; 
 int /*<<< orphan*/  SAS_FANOUT_EXPANDER_DEVICE ; 
 int /*<<< orphan*/  SAS_PHY_UNUSED ; 
 int /*<<< orphan*/  SAS_PROTOCOL_SATA ; 
 int /*<<< orphan*/  SAS_PROTOCOL_SMP ; 
 int /*<<< orphan*/  SAS_PROTOCOL_SSP ; 
 int /*<<< orphan*/  SAS_PROTOCOL_STP ; 

__attribute__((used)) static void
mptsas_parse_device_info(struct sas_identify *identify,
		struct mptsas_devinfo *device_info)
{
	u16 protocols;

	identify->sas_address = device_info->sas_address;
	identify->phy_identifier = device_info->phy_id;

	/*
	 * Fill in Phy Initiator Port Protocol.
	 * Bits 6:3, more than one bit can be set, fall through cases.
	 */
	protocols = device_info->device_info & 0x78;
	identify->initiator_port_protocols = 0;
	if (protocols & MPI_SAS_DEVICE_INFO_SSP_INITIATOR)
		identify->initiator_port_protocols |= SAS_PROTOCOL_SSP;
	if (protocols & MPI_SAS_DEVICE_INFO_STP_INITIATOR)
		identify->initiator_port_protocols |= SAS_PROTOCOL_STP;
	if (protocols & MPI_SAS_DEVICE_INFO_SMP_INITIATOR)
		identify->initiator_port_protocols |= SAS_PROTOCOL_SMP;
	if (protocols & MPI_SAS_DEVICE_INFO_SATA_HOST)
		identify->initiator_port_protocols |= SAS_PROTOCOL_SATA;

	/*
	 * Fill in Phy Target Port Protocol.
	 * Bits 10:7, more than one bit can be set, fall through cases.
	 */
	protocols = device_info->device_info & 0x780;
	identify->target_port_protocols = 0;
	if (protocols & MPI_SAS_DEVICE_INFO_SSP_TARGET)
		identify->target_port_protocols |= SAS_PROTOCOL_SSP;
	if (protocols & MPI_SAS_DEVICE_INFO_STP_TARGET)
		identify->target_port_protocols |= SAS_PROTOCOL_STP;
	if (protocols & MPI_SAS_DEVICE_INFO_SMP_TARGET)
		identify->target_port_protocols |= SAS_PROTOCOL_SMP;
	if (protocols & MPI_SAS_DEVICE_INFO_SATA_DEVICE)
		identify->target_port_protocols |= SAS_PROTOCOL_SATA;

	/*
	 * Fill in Attached device type.
	 */
	switch (device_info->device_info &
			MPI_SAS_DEVICE_INFO_MASK_DEVICE_TYPE) {
	case MPI_SAS_DEVICE_INFO_NO_DEVICE:
		identify->device_type = SAS_PHY_UNUSED;
		break;
	case MPI_SAS_DEVICE_INFO_END_DEVICE:
		identify->device_type = SAS_END_DEVICE;
		break;
	case MPI_SAS_DEVICE_INFO_EDGE_EXPANDER:
		identify->device_type = SAS_EDGE_EXPANDER_DEVICE;
		break;
	case MPI_SAS_DEVICE_INFO_FANOUT_EXPANDER:
		identify->device_type = SAS_FANOUT_EXPANDER_DEVICE;
		break;
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
          int _len_identify0 = 1;
          struct sas_identify * identify = (struct sas_identify *) malloc(_len_identify0*sizeof(struct sas_identify));
          for(int _i0 = 0; _i0 < _len_identify0; _i0++) {
            identify[_i0].device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        identify[_i0].target_port_protocols = ((-2 * (next_i()%2)) + 1) * next_i();
        identify[_i0].initiator_port_protocols = ((-2 * (next_i()%2)) + 1) * next_i();
        identify[_i0].phy_identifier = ((-2 * (next_i()%2)) + 1) * next_i();
        identify[_i0].sas_address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_device_info0 = 1;
          struct mptsas_devinfo * device_info = (struct mptsas_devinfo *) malloc(_len_device_info0*sizeof(struct mptsas_devinfo));
          for(int _i0 = 0; _i0 < _len_device_info0; _i0++) {
            device_info[_i0].device_info = ((-2 * (next_i()%2)) + 1) * next_i();
        device_info[_i0].phy_id = ((-2 * (next_i()%2)) + 1) * next_i();
        device_info[_i0].sas_address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mptsas_parse_device_info(identify,device_info);
          free(identify);
          free(device_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
