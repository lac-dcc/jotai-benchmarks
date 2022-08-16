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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct SiS_Private {unsigned char SiS_VGAINFO; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_4__ {unsigned short Ext_ModeID; } ;
struct TYPE_3__ {unsigned short St_ModeID; } ;

/* Variables and functions */

bool
SiS_SearchModeID(struct SiS_Private *SiS_Pr, unsigned short *ModeNo,
		unsigned short *ModeIdIndex)
{
   unsigned char VGAINFO = SiS_Pr->SiS_VGAINFO;

   if((*ModeNo) <= 0x13) {

      if((*ModeNo) <= 0x05) (*ModeNo) |= 0x01;

      for((*ModeIdIndex) = 0; ;(*ModeIdIndex)++) {
	 if(SiS_Pr->SiS_SModeIDTable[(*ModeIdIndex)].St_ModeID == (*ModeNo)) break;
	 if(SiS_Pr->SiS_SModeIDTable[(*ModeIdIndex)].St_ModeID == 0xFF) return false;
      }

      if((*ModeNo) == 0x07) {
	  if(VGAINFO & 0x10) (*ModeIdIndex)++;   /* 400 lines */
	  /* else 350 lines */
      }
      if((*ModeNo) <= 0x03) {
	 if(!(VGAINFO & 0x80)) (*ModeIdIndex)++;
	 if(VGAINFO & 0x10)    (*ModeIdIndex)++; /* 400 lines  */
	 /* else 350 lines  */
      }
      /* else 200 lines  */

   } else {

      for((*ModeIdIndex) = 0; ;(*ModeIdIndex)++) {
	 if(SiS_Pr->SiS_EModeIDTable[(*ModeIdIndex)].Ext_ModeID == (*ModeNo)) break;
	 if(SiS_Pr->SiS_EModeIDTable[(*ModeIdIndex)].Ext_ModeID == 0xFF) return false;
      }

   }
   return true;
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
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VGAINFO = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_ModeID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_3__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_ModeID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ModeNo0 = 1;
          unsigned short * ModeNo = (unsigned short *) malloc(_len_ModeNo0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ModeNo0; _i0++) {
            ModeNo[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ModeIdIndex0 = 1;
          unsigned short * ModeIdIndex = (unsigned short *) malloc(_len_ModeIdIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ModeIdIndex0; _i0++) {
            ModeIdIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_SearchModeID(SiS_Pr,ModeNo,ModeIdIndex);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_EModeIDTable);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_SModeIDTable);
          }
          free(SiS_Pr);
          free(ModeNo);
          free(ModeIdIndex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
