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
struct ipr_resource_entry {int /*<<< orphan*/  ata_class; } ;

/* Variables and functions */
 int /*<<< orphan*/  ATA_DEV_ATA ; 
 int /*<<< orphan*/  ATA_DEV_ATAPI ; 
 int /*<<< orphan*/  ATA_DEV_UNKNOWN ; 
#define  IPR_PROTO_SAS_STP 131 
#define  IPR_PROTO_SAS_STP_ATAPI 130 
#define  IPR_PROTO_SATA 129 
#define  IPR_PROTO_SATA_ATAPI 128 

__attribute__((used)) static void ipr_update_ata_class(struct ipr_resource_entry *res, unsigned int proto)
{
	switch (proto) {
	case IPR_PROTO_SATA:
	case IPR_PROTO_SAS_STP:
		res->ata_class = ATA_DEV_ATA;
		break;
	case IPR_PROTO_SATA_ATAPI:
	case IPR_PROTO_SAS_STP_ATAPI:
		res->ata_class = ATA_DEV_ATAPI;
		break;
	default:
		res->ata_class = ATA_DEV_UNKNOWN;
		break;
	};
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
          unsigned int proto = 100;
        
          int _len_res0 = 1;
          struct ipr_resource_entry * res = (struct ipr_resource_entry *) malloc(_len_res0*sizeof(struct ipr_resource_entry));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].ata_class = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ipr_update_ata_class(res,proto);
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int proto = 255;
        
          int _len_res0 = 65025;
          struct ipr_resource_entry * res = (struct ipr_resource_entry *) malloc(_len_res0*sizeof(struct ipr_resource_entry));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].ata_class = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ipr_update_ata_class(res,proto);
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int proto = 10;
        
          int _len_res0 = 100;
          struct ipr_resource_entry * res = (struct ipr_resource_entry *) malloc(_len_res0*sizeof(struct ipr_resource_entry));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].ata_class = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ipr_update_ata_class(res,proto);
          free(res);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int proto = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_res0 = 1;
          struct ipr_resource_entry * res = (struct ipr_resource_entry *) malloc(_len_res0*sizeof(struct ipr_resource_entry));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].ata_class = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ipr_update_ata_class(res,proto);
          free(res);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
