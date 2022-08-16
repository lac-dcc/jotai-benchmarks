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
struct pp_hwmgr {int dummy; } ;
typedef  int USHORT ;
typedef  int /*<<< orphan*/  PP_StateClassificationFlags ;

/* Variables and functions */
 int ATOM_PPLIB_CLASSIFICATION2_LIMITEDPOWERSOURCE_2 ; 
 int ATOM_PPLIB_CLASSIFICATION2_MVC ; 
 int ATOM_PPLIB_CLASSIFICATION2_ULV ; 
 int ATOM_PPLIB_CLASSIFICATION_3DPERFORMANCE ; 
 int ATOM_PPLIB_CLASSIFICATION_ACPI ; 
 int ATOM_PPLIB_CLASSIFICATION_BOOT ; 
 int ATOM_PPLIB_CLASSIFICATION_FORCED ; 
 int ATOM_PPLIB_CLASSIFICATION_HD2STATE ; 
 int ATOM_PPLIB_CLASSIFICATION_HDSTATE ; 
 int ATOM_PPLIB_CLASSIFICATION_LIMITEDPOWERSOURCE ; 
 int ATOM_PPLIB_CLASSIFICATION_OVERDRIVETEMPLATE ; 
 int ATOM_PPLIB_CLASSIFICATION_REST ; 
 int ATOM_PPLIB_CLASSIFICATION_SDSTATE ; 
 int ATOM_PPLIB_CLASSIFICATION_THERMAL ; 
 int ATOM_PPLIB_CLASSIFICATION_UVDSTATE ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_3DPerformance ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_ACOverdriveTemplate ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_ACPI ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_Boot ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_Forced ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_HD2 ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_LimitedPowerSource ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_LimitedPowerSource_2 ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_Rest ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_Thermal ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_ULV ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_Uvd ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_UvdHD ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_UvdMVC ; 
 int /*<<< orphan*/  PP_StateClassificationFlag_UvdSD ; 

__attribute__((used)) static PP_StateClassificationFlags make_classification_flags(
						   struct pp_hwmgr *hwmgr,
						    USHORT classification,
						   USHORT classification2)
{
	PP_StateClassificationFlags result = 0;

	if (classification & ATOM_PPLIB_CLASSIFICATION_BOOT)
		result |= PP_StateClassificationFlag_Boot;

	if (classification & ATOM_PPLIB_CLASSIFICATION_THERMAL)
		result |= PP_StateClassificationFlag_Thermal;

	if (classification &
			ATOM_PPLIB_CLASSIFICATION_LIMITEDPOWERSOURCE)
		result |= PP_StateClassificationFlag_LimitedPowerSource;

	if (classification & ATOM_PPLIB_CLASSIFICATION_REST)
		result |= PP_StateClassificationFlag_Rest;

	if (classification & ATOM_PPLIB_CLASSIFICATION_FORCED)
		result |= PP_StateClassificationFlag_Forced;

	if (classification & ATOM_PPLIB_CLASSIFICATION_3DPERFORMANCE)
		result |= PP_StateClassificationFlag_3DPerformance;


	if (classification & ATOM_PPLIB_CLASSIFICATION_OVERDRIVETEMPLATE)
		result |= PP_StateClassificationFlag_ACOverdriveTemplate;

	if (classification & ATOM_PPLIB_CLASSIFICATION_UVDSTATE)
		result |= PP_StateClassificationFlag_Uvd;

	if (classification & ATOM_PPLIB_CLASSIFICATION_HDSTATE)
		result |= PP_StateClassificationFlag_UvdHD;

	if (classification & ATOM_PPLIB_CLASSIFICATION_SDSTATE)
		result |= PP_StateClassificationFlag_UvdSD;

	if (classification & ATOM_PPLIB_CLASSIFICATION_HD2STATE)
		result |= PP_StateClassificationFlag_HD2;

	if (classification & ATOM_PPLIB_CLASSIFICATION_ACPI)
		result |= PP_StateClassificationFlag_ACPI;

	if (classification2 & ATOM_PPLIB_CLASSIFICATION2_LIMITEDPOWERSOURCE_2)
		result |= PP_StateClassificationFlag_LimitedPowerSource_2;


	if (classification2 & ATOM_PPLIB_CLASSIFICATION2_ULV)
		result |= PP_StateClassificationFlag_ULV;

	if (classification2 & ATOM_PPLIB_CLASSIFICATION2_MVC)
		result |= PP_StateClassificationFlag_UvdMVC;

	return result;
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
          int classification = 100;
          int classification2 = 100;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = make_classification_flags(hwmgr,classification,classification2);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int classification = 10;
          int classification2 = 10;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = make_classification_flags(hwmgr,classification,classification2);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
