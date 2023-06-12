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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u16 ;
struct TYPE_3__ {int /*<<< orphan*/ * pODM_StaInfo; } ;
typedef  int /*<<< orphan*/  PSTA_INFO_T ;
typedef  TYPE_1__* PDM_ODM_T ;
typedef  int ODM_CMNINFO_E ;

/* Variables and functions */
#define  ODM_CMNINFO_STA_STATUS 128 

void ODM_CmnInfoPtrArrayHook(
	PDM_ODM_T pDM_Odm,
	ODM_CMNINFO_E CmnInfo,
	u16 Index,
	void *pValue
)
{
	/*  */
	/*  Hook call by reference pointer. */
	/*  */
	switch (CmnInfo) {
	/*  */
	/*  Dynamic call by reference pointer. */
	/*  */
	case ODM_CMNINFO_STA_STATUS:
		pDM_Odm->pODM_StaInfo[Index] = (PSTA_INFO_T)pValue;
		break;
	/* To remove the compiler warning, must add an empty default statement to handle the other values. */
	default:
		/* do nothing */
		break;
	}

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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 3
          // dynamic_instructions_O1 : 3
          // ------------------------------- 
          // static_instructions_O2 : 3
          // dynamic_instructions_O2 : 3
          // ------------------------------- 
          // static_instructions_O3 : 3
          // dynamic_instructions_O3 : 3
          // ------------------------------- 
          // static_instructions_Ofast : 3
          // dynamic_instructions_Ofast : 3
          // ------------------------------- 
          // static_instructions_Os : 3
          // dynamic_instructions_Os : 3
          // ------------------------------- 
          // static_instructions_Oz : 3
          // dynamic_instructions_Oz : 3
          // ------------------------------- 

          int CmnInfo = 100;
        
          unsigned long Index = 100;
        
          int _len_pDM_Odm0 = 1;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (int *) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            pDM_Odm[_i0].pODM_StaInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * pValue;
        
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(pDM_Odm[_aux].pODM_StaInfo);
          }
          free(pDM_Odm);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 3
          // dynamic_instructions_O1 : 3
          // ------------------------------- 
          // static_instructions_O2 : 3
          // dynamic_instructions_O2 : 3
          // ------------------------------- 
          // static_instructions_O3 : 3
          // dynamic_instructions_O3 : 3
          // ------------------------------- 
          // static_instructions_Ofast : 3
          // dynamic_instructions_Ofast : 3
          // ------------------------------- 
          // static_instructions_Os : 3
          // dynamic_instructions_Os : 3
          // ------------------------------- 
          // static_instructions_Oz : 3
          // dynamic_instructions_Oz : 3
          // ------------------------------- 

          int CmnInfo = 255;
        
          unsigned long Index = 255;
        
          int _len_pDM_Odm0 = 65025;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (int *) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            pDM_Odm[_i0].pODM_StaInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * pValue;
        
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(pDM_Odm[_aux].pODM_StaInfo);
          }
          free(pDM_Odm);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 3
          // dynamic_instructions_O1 : 3
          // ------------------------------- 
          // static_instructions_O2 : 3
          // dynamic_instructions_O2 : 3
          // ------------------------------- 
          // static_instructions_O3 : 3
          // dynamic_instructions_O3 : 3
          // ------------------------------- 
          // static_instructions_Ofast : 3
          // dynamic_instructions_Ofast : 3
          // ------------------------------- 
          // static_instructions_Os : 3
          // dynamic_instructions_Os : 3
          // ------------------------------- 
          // static_instructions_Oz : 3
          // dynamic_instructions_Oz : 3
          // ------------------------------- 

          int CmnInfo = 10;
        
          unsigned long Index = 10;
        
          int _len_pDM_Odm0 = 100;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (int *) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            pDM_Odm[_i0].pODM_StaInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * pValue;
        
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
          free(pDM_Odm[_aux].pODM_StaInfo);
          }
          free(pDM_Odm);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 3
          // dynamic_instructions_O1 : 3
          // ------------------------------- 
          // static_instructions_O2 : 3
          // dynamic_instructions_O2 : 3
          // ------------------------------- 
          // static_instructions_O3 : 3
          // dynamic_instructions_O3 : 3
          // ------------------------------- 
          // static_instructions_Ofast : 3
          // dynamic_instructions_Ofast : 3
          // ------------------------------- 
          // static_instructions_Os : 3
          // dynamic_instructions_Os : 3
          // ------------------------------- 
          // static_instructions_Oz : 3
          // dynamic_instructions_Oz : 3
          // ------------------------------- 

          int CmnInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long Index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pDM_Odm0 = 1;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
              int _len_pDM_Odm__i0__pODM_StaInfo0 = 1;
          pDM_Odm[_i0].pODM_StaInfo = (int *) malloc(_len_pDM_Odm__i0__pODM_StaInfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__pODM_StaInfo0; _j0++) {
            pDM_Odm[_i0].pODM_StaInfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          void * pValue;
        
          ODM_CmnInfoPtrArrayHook(pDM_Odm,CmnInfo,Index,pValue);
          for(int _aux = 0; _aux < _len_pDM_Odm0; _aux++) {
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
