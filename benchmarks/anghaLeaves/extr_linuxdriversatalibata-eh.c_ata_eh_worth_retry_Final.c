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
struct ata_queued_cmd {int err_mask; int flags; } ;

/* Variables and functions */
 int AC_ERR_DEV ; 
 int AC_ERR_INVALID ; 
 int AC_ERR_MEDIA ; 
 int ATA_QCFLAG_IO ; 

__attribute__((used)) static inline int ata_eh_worth_retry(struct ata_queued_cmd *qc)
{
	if (qc->err_mask & AC_ERR_MEDIA)
		return 0;	/* don't retry media errors */
	if (qc->flags & ATA_QCFLAG_IO)
		return 1;	/* otherwise retry anything from fs stack */
	if (qc->err_mask & AC_ERR_INVALID)
		return 0;	/* don't retry these */
	return qc->err_mask != AC_ERR_DEV;  /* retry if not dev error */
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
          int _len_qc0 = 1;
          struct ata_queued_cmd * qc = (struct ata_queued_cmd *) malloc(_len_qc0*sizeof(struct ata_queued_cmd));
          for(int _i0 = 0; _i0 < _len_qc0; _i0++) {
            qc[_i0].err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        qc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ata_eh_worth_retry(qc);
          printf("%d\n", benchRet); 
          free(qc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
