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
       1            big-arr-10x\n\
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
struct scsi_cmnd {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned
lpfc_cmd_protect(struct scsi_cmnd *sc, int flag)
{
	return 1;
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
          int flag = 100;
          int _len_sc0 = 1;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = lpfc_cmd_protect(sc,flag);
          printf("%u\n", benchRet); 
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flag = 10;
          int _len_sc0 = 100;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = lpfc_cmd_protect(sc,flag);
          printf("%u\n", benchRet); 
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
