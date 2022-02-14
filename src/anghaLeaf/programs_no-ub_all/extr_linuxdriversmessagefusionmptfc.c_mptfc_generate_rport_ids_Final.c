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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct fc_rport_identifiers {int node_name; int port_name; int /*<<< orphan*/  roles; int /*<<< orphan*/  port_id; } ;
struct TYPE_6__ {scalar_t__ Low; scalar_t__ High; } ;
struct TYPE_5__ {scalar_t__ Low; scalar_t__ High; } ;
struct TYPE_7__ {int Flags; int Protocol; int /*<<< orphan*/  PortIdentifier; TYPE_2__ WWPN; TYPE_1__ WWNN; } ;
typedef  TYPE_3__ FCDevicePage0_t ;

/* Variables and functions */
 int /*<<< orphan*/  FC_RPORT_ROLE_UNKNOWN ; 
 int MPI_FC_DEVICE_PAGE0_FLAGS_PLOGI_INVALID ; 
 int MPI_FC_DEVICE_PAGE0_FLAGS_PRLI_INVALID ; 
 int MPI_FC_DEVICE_PAGE0_FLAGS_TARGETID_BUS_VALID ; 
 int MPI_FC_DEVICE_PAGE0_PROT_FCP_TARGET ; 

__attribute__((used)) static int
mptfc_generate_rport_ids(FCDevicePage0_t *pg0, struct fc_rport_identifiers *rid)
{
	/* not currently usable */
	if (pg0->Flags & (MPI_FC_DEVICE_PAGE0_FLAGS_PLOGI_INVALID |
			  MPI_FC_DEVICE_PAGE0_FLAGS_PRLI_INVALID))
		return -1;

	if (!(pg0->Flags & MPI_FC_DEVICE_PAGE0_FLAGS_TARGETID_BUS_VALID))
		return -1;

	if (!(pg0->Protocol & MPI_FC_DEVICE_PAGE0_PROT_FCP_TARGET))
		return -1;

	/*
	 * board data structure already normalized to platform endianness
	 * shifted to avoid unaligned access on 64 bit architecture
	 */
	rid->node_name = ((u64)pg0->WWNN.High) << 32 | (u64)pg0->WWNN.Low;
	rid->port_name = ((u64)pg0->WWPN.High) << 32 | (u64)pg0->WWPN.Low;
	rid->port_id =   pg0->PortIdentifier;
	rid->roles = FC_RPORT_ROLE_UNKNOWN;

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

    // big-arr
    case 0:
    {
          int _len_pg00 = 1;
          struct TYPE_7__ * pg0 = (struct TYPE_7__ *) malloc(_len_pg00*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pg00; _i0++) {
            pg0->Flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pg0->Protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        pg0->PortIdentifier = ((-2 * (next_i()%2)) + 1) * next_i();
        pg0->WWPN.Low = ((-2 * (next_i()%2)) + 1) * next_i();
        pg0->WWPN.High = ((-2 * (next_i()%2)) + 1) * next_i();
        pg0->WWNN.Low = ((-2 * (next_i()%2)) + 1) * next_i();
        pg0->WWNN.High = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rid0 = 1;
          struct fc_rport_identifiers * rid = (struct fc_rport_identifiers *) malloc(_len_rid0*sizeof(struct fc_rport_identifiers));
          for(int _i0 = 0; _i0 < _len_rid0; _i0++) {
            rid->node_name = ((-2 * (next_i()%2)) + 1) * next_i();
        rid->port_name = ((-2 * (next_i()%2)) + 1) * next_i();
        rid->roles = ((-2 * (next_i()%2)) + 1) * next_i();
        rid->port_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mptfc_generate_rport_ids(pg0,rid);
          printf("%d\n", benchRet); 
          free(pg0);
          free(rid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
