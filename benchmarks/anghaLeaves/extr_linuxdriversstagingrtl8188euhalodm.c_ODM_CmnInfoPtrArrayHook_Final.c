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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  size_t u16 ;
struct sta_info {int dummy; } ;
struct odm_dm_struct {struct sta_info** pODM_StaInfo; } ;
typedef  enum odm_common_info_def { ____Placeholder_odm_common_info_def } odm_common_info_def ;

/* Variables and functions */
#define  ODM_CMNINFO_STA_STATUS 128 

void ODM_CmnInfoPtrArrayHook(struct odm_dm_struct *pDM_Odm, enum odm_common_info_def CmnInfo, u16 Index, void *pValue)
{
	/*  Hook call by reference pointer. */
	switch	(CmnInfo) {
	/*  Dynamic call by reference pointer. */
	case	ODM_CMNINFO_STA_STATUS:
		pDM_Odm->pODM_StaInfo[Index] = (struct sta_info *)pValue;
		break;
	/* To remove the compiler warning, must add an empty default statement to handle the other values. */
	default:
		/* do nothing */
		break;
	}
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
          enum odm_common_info_def CmnInfo = 0;
          unsigned long Index = 100;
          int _len_pDM_Odm0 = 1;
          struct odm_dm_struct * pDM_Odm = (struct odm_dm_struct *) malloc(_len_pDM_Odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (struct sta_info **) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(struct sta_info *));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            int _len_pDM_Odm__i0__pODM_StaInfo1 = 1;
            pDM_Odm[_i0].pODM_StaInfo[_j0] = (struct sta_info *) malloc(_len_pDM_Odm__i0__pODM_StaInfo1*sizeof(struct sta_info));
            for(int _j1 = 0; _j1 < _len_pDM_Odm__i0__pODM_StaInfo1; _j1++) {
              pDM_Odm[_i0].pODM_StaInfo[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          void * pValue;
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(*(pDM_Odm[_aux].pODM_StaInfo));
        free(pDM_Odm[_aux].pODM_StaInfo);
          }
          free(pDM_Odm);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum odm_common_info_def CmnInfo = 0;
          unsigned long Index = 255;
          int _len_pDM_Odm0 = 65025;
          struct odm_dm_struct * pDM_Odm = (struct odm_dm_struct *) malloc(_len_pDM_Odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (struct sta_info **) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(struct sta_info *));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            int _len_pDM_Odm__i0__pODM_StaInfo1 = 1;
            pDM_Odm[_i0].pODM_StaInfo[_j0] = (struct sta_info *) malloc(_len_pDM_Odm__i0__pODM_StaInfo1*sizeof(struct sta_info));
            for(int _j1 = 0; _j1 < _len_pDM_Odm__i0__pODM_StaInfo1; _j1++) {
              pDM_Odm[_i0].pODM_StaInfo[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          void * pValue;
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(*(pDM_Odm[_aux].pODM_StaInfo));
        free(pDM_Odm[_aux].pODM_StaInfo);
          }
          free(pDM_Odm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum odm_common_info_def CmnInfo = 0;
          unsigned long Index = 10;
          int _len_pDM_Odm0 = 100;
          struct odm_dm_struct * pDM_Odm = (struct odm_dm_struct *) malloc(_len_pDM_Odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (struct sta_info **) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(struct sta_info *));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            int _len_pDM_Odm__i0__pODM_StaInfo1 = 1;
            pDM_Odm[_i0].pODM_StaInfo[_j0] = (struct sta_info *) malloc(_len_pDM_Odm__i0__pODM_StaInfo1*sizeof(struct sta_info));
            for(int _j1 = 0; _j1 < _len_pDM_Odm__i0__pODM_StaInfo1; _j1++) {
              pDM_Odm[_i0].pODM_StaInfo[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          void * pValue;
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(*(pDM_Odm[_aux].pODM_StaInfo));
        free(pDM_Odm[_aux].pODM_StaInfo);
          }
          free(pDM_Odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
