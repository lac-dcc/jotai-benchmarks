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
typedef  int /*<<< orphan*/  u8 ;
struct scsi_cmnd {int prot_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_SIG_CHECK_GUARD ; 
 int /*<<< orphan*/  IB_SIG_CHECK_REFTAG ; 
 int SCSI_PROT_GUARD_CHECK ; 
 int SCSI_PROT_REF_CHECK ; 

__attribute__((used)) static inline void
iser_set_prot_checks(struct scsi_cmnd *sc, u8 *mask)
{
	*mask = 0;
	if (sc->prot_flags & SCSI_PROT_REF_CHECK)
		*mask |= IB_SIG_CHECK_REFTAG;
	if (sc->prot_flags & SCSI_PROT_GUARD_CHECK)
		*mask |= IB_SIG_CHECK_GUARD;
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
          int _len_sc0 = 1;
          struct scsi_cmnd * sc = (struct scsi_cmnd *) malloc(_len_sc0*sizeof(struct scsi_cmnd));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].prot_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 1;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iser_set_prot_checks(sc,mask);
          free(sc);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
