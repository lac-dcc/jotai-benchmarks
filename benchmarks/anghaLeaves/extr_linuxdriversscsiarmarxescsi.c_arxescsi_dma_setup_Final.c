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
struct scsi_pointer {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef  int /*<<< orphan*/  fasdmatype_t ;
typedef  int /*<<< orphan*/  fasdmadir_t ;

/* Variables and functions */
 int /*<<< orphan*/  fasdma_pseudo ; 

__attribute__((used)) static fasdmatype_t
arxescsi_dma_setup(struct Scsi_Host *host, struct scsi_pointer *SCp,
		       fasdmadir_t direction, fasdmatype_t min_type)
{
	/*
	 * We don't do real DMA
	 */
	return fasdma_pseudo;
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
          int direction = 100;
          int min_type = 100;
          int _len_host0 = 1;
          struct Scsi_Host * host = (struct Scsi_Host *) malloc(_len_host0*sizeof(struct Scsi_Host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SCp0 = 1;
          struct scsi_pointer * SCp = (struct scsi_pointer *) malloc(_len_SCp0*sizeof(struct scsi_pointer));
          for(int _i0 = 0; _i0 < _len_SCp0; _i0++) {
            SCp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arxescsi_dma_setup(host,SCp,direction,min_type);
          printf("%d\n", benchRet); 
          free(host);
          free(SCp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
