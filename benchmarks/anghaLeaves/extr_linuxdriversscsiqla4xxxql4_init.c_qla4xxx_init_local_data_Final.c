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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct scsi_qla_host {int /*<<< orphan*/  aen_q_count; } ;

/* Variables and functions */
 int /*<<< orphan*/  MAX_AEN_ENTRIES ; 

__attribute__((used)) static void qla4xxx_init_local_data(struct scsi_qla_host *ha)
{
	/* Initialize aen queue */
	ha->aen_q_count = MAX_AEN_ENTRIES;
}

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
          int _len_ha0 = 65025;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
              ha[_i0].aen_q_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          qla4xxx_init_local_data(ha);
          free(ha);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ha0 = 100;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
              ha[_i0].aen_q_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          qla4xxx_init_local_data(ha);
          free(ha);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ha0 = 1;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
              ha[_i0].aen_q_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          qla4xxx_init_local_data(ha);
          free(ha);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
