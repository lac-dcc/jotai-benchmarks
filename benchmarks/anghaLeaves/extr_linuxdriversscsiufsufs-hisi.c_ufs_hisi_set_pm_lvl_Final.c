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
struct ufs_hba {int /*<<< orphan*/  spm_lvl; int /*<<< orphan*/  rpm_lvl; } ;

/* Variables and functions */
 int /*<<< orphan*/  UFS_PM_LVL_1 ; 
 int /*<<< orphan*/  UFS_PM_LVL_3 ; 

__attribute__((used)) static void ufs_hisi_set_pm_lvl(struct ufs_hba *hba)
{
	hba->rpm_lvl = UFS_PM_LVL_1;
	hba->spm_lvl = UFS_PM_LVL_3;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_hba0 = 65025;
          struct ufs_hba * hba = (struct ufs_hba *) malloc(_len_hba0*sizeof(struct ufs_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
              hba[_i0].spm_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
          hba[_i0].rpm_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ufs_hisi_set_pm_lvl(hba);
          free(hba);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_hba0 = 100;
          struct ufs_hba * hba = (struct ufs_hba *) malloc(_len_hba0*sizeof(struct ufs_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
              hba[_i0].spm_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
          hba[_i0].rpm_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ufs_hisi_set_pm_lvl(hba);
          free(hba);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_hba0 = 1;
          struct ufs_hba * hba = (struct ufs_hba *) malloc(_len_hba0*sizeof(struct ufs_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
              hba[_i0].spm_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
          hba[_i0].rpm_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ufs_hisi_set_pm_lvl(hba);
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
