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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct SiS_Private {int SiS_LCDInfo; unsigned short CHTotal; int CModeFlag; unsigned short SiS_VGAHT; unsigned short SiS_HT; int SiS_IF_DEF_LVDS; unsigned short PanelHT; unsigned short SiS_HDE; unsigned short PanelXRes; unsigned short SiS_VGAHDE; scalar_t__ SiS_VGAVDE; scalar_t__ PanelYRes; scalar_t__ PanelVT; scalar_t__ SiS_VGAVT; scalar_t__ SiS_VT; scalar_t__ SiS_VDE; TYPE_3__* SiS_NoScaleData; scalar_t__ Alternate1600x1200; TYPE_2__* SiS_RefIndex; TYPE_1__* SiS_SModeIDTable; scalar_t__ CVTotal; scalar_t__ UseCustomMode; } ;
struct TYPE_6__ {unsigned short VGAHT; unsigned short LCDHT; scalar_t__ LCDVT; scalar_t__ VGAVT; } ;
struct TYPE_5__ {unsigned short Ext_CRT2CRTC_NS; } ;
struct TYPE_4__ {unsigned short St_CRT2CRTC; } ;

/* Variables and functions */
 int DontExpandLCD ; 
 int HalfDCLK ; 
 int LCDPass11 ; 

__attribute__((used)) static void
SiS_CalcPanelLinkTiming(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
		unsigned short ModeIdIndex, unsigned short RefreshRateTableIndex)
{
   unsigned short ResIndex;

   if(SiS_Pr->SiS_LCDInfo & DontExpandLCD) {
      if(SiS_Pr->SiS_LCDInfo & LCDPass11) {
	 if(SiS_Pr->UseCustomMode) {
	    ResIndex = SiS_Pr->CHTotal;
	    if(SiS_Pr->CModeFlag & HalfDCLK) ResIndex <<= 1;
	    SiS_Pr->SiS_VGAHT = SiS_Pr->SiS_HT = ResIndex;
	    SiS_Pr->SiS_VGAVT = SiS_Pr->SiS_VT = SiS_Pr->CVTotal;
	 } else {
	    if(ModeNo < 0x13) {
	       ResIndex = SiS_Pr->SiS_SModeIDTable[ModeIdIndex].St_CRT2CRTC;
	    } else {
	       ResIndex = SiS_Pr->SiS_RefIndex[RefreshRateTableIndex].Ext_CRT2CRTC_NS;
	    }
	    if(ResIndex == 0x09) {
	       if(SiS_Pr->Alternate1600x1200)        ResIndex = 0x20; /* 1600x1200 LCDA */
	       else if(SiS_Pr->SiS_IF_DEF_LVDS == 1) ResIndex = 0x21; /* 1600x1200 LVDS */
	    }
	    SiS_Pr->SiS_VGAHT = SiS_Pr->SiS_NoScaleData[ResIndex].VGAHT;
	    SiS_Pr->SiS_VGAVT = SiS_Pr->SiS_NoScaleData[ResIndex].VGAVT;
	    SiS_Pr->SiS_HT    = SiS_Pr->SiS_NoScaleData[ResIndex].LCDHT;
	    SiS_Pr->SiS_VT    = SiS_Pr->SiS_NoScaleData[ResIndex].LCDVT;
	 }
      } else {
	 SiS_Pr->SiS_VGAHT = SiS_Pr->SiS_HT = SiS_Pr->PanelHT;
	 SiS_Pr->SiS_VGAVT = SiS_Pr->SiS_VT = SiS_Pr->PanelVT;
      }
   } else {
      /* This handles custom modes and custom panels */
      SiS_Pr->SiS_HDE = SiS_Pr->PanelXRes;
      SiS_Pr->SiS_VDE = SiS_Pr->PanelYRes;
      SiS_Pr->SiS_HT  = SiS_Pr->PanelHT;
      SiS_Pr->SiS_VT  = SiS_Pr->PanelVT;
      SiS_Pr->SiS_VGAHT = SiS_Pr->PanelHT - (SiS_Pr->PanelXRes - SiS_Pr->SiS_VGAHDE);
      SiS_Pr->SiS_VGAVT = SiS_Pr->PanelVT - (SiS_Pr->PanelYRes - SiS_Pr->SiS_VGAVDE);
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
          unsigned short ModeNo = 100;
          unsigned short ModeIdIndex = 100;
          unsigned short RefreshRateTableIndex = 100;
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].CHTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].CModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAHT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_HT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_LVDS = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].PanelHT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].PanelXRes = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].PanelYRes = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].PanelVT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VDE = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_NoScaleData0 = 1;
          SiS_Pr[_i0].SiS_NoScaleData = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_NoScaleData0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_NoScaleData0; _j0++) {
            SiS_Pr[_i0].SiS_NoScaleData->VGAHT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_NoScaleData->LCDHT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_NoScaleData->LCDVT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_NoScaleData->VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SiS_Pr[_i0].Alternate1600x1200 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC_NS = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SiS_Pr[_i0].CVTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].UseCustomMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_CalcPanelLinkTiming(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex);
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_NoScaleData);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_SModeIDTable);
          }
          free(SiS_Pr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
