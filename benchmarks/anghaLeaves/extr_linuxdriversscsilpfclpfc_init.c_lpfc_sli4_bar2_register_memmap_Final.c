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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_2__ {scalar_t__ drbl_regs_memmap_p; scalar_t__ BMBXregaddr; scalar_t__ MQDBregaddr; scalar_t__ CQDBregaddr; scalar_t__ EQDBregaddr; scalar_t__ WQDBregaddr; scalar_t__ RQDBregaddr; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;

/* Variables and functions */
 int ENODEV ; 
 scalar_t__ LPFC_BMBX ; 
 scalar_t__ LPFC_EQCQ_DOORBELL ; 
 scalar_t__ LPFC_MQ_DOORBELL ; 
 scalar_t__ LPFC_ULP0_RQ_DOORBELL ; 
 scalar_t__ LPFC_ULP0_WQ_DOORBELL ; 
 int LPFC_VFR_PAGE_SIZE ; 
 int LPFC_VIR_FUNC_MAX ; 

__attribute__((used)) static int
lpfc_sli4_bar2_register_memmap(struct lpfc_hba *phba, uint32_t vf)
{
	if (vf > LPFC_VIR_FUNC_MAX)
		return -ENODEV;

	phba->sli4_hba.RQDBregaddr = (phba->sli4_hba.drbl_regs_memmap_p +
				vf * LPFC_VFR_PAGE_SIZE +
					LPFC_ULP0_RQ_DOORBELL);
	phba->sli4_hba.WQDBregaddr = (phba->sli4_hba.drbl_regs_memmap_p +
				vf * LPFC_VFR_PAGE_SIZE +
					LPFC_ULP0_WQ_DOORBELL);
	phba->sli4_hba.CQDBregaddr = (phba->sli4_hba.drbl_regs_memmap_p +
				vf * LPFC_VFR_PAGE_SIZE +
					LPFC_EQCQ_DOORBELL);
	phba->sli4_hba.EQDBregaddr = phba->sli4_hba.CQDBregaddr;
	phba->sli4_hba.MQDBregaddr = (phba->sli4_hba.drbl_regs_memmap_p +
				vf * LPFC_VFR_PAGE_SIZE + LPFC_MQ_DOORBELL);
	phba->sli4_hba.BMBXregaddr = (phba->sli4_hba.drbl_regs_memmap_p +
				vf * LPFC_VFR_PAGE_SIZE + LPFC_BMBX);
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
          int vf = 100;
          int _len_phba0 = 1;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].sli4_hba.drbl_regs_memmap_p = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli4_hba.BMBXregaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli4_hba.MQDBregaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli4_hba.CQDBregaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli4_hba.EQDBregaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli4_hba.WQDBregaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli4_hba.RQDBregaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpfc_sli4_bar2_register_memmap(phba,vf);
          printf("%d\n", benchRet); 
          free(phba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
