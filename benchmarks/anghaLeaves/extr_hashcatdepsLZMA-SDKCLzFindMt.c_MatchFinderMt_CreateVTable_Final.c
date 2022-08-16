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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {void* MixMatchesFunc; TYPE_1__* MatchFinder; int /*<<< orphan*/  GetHeadsFunc; } ;
struct TYPE_7__ {void* Skip; void* GetMatches; scalar_t__ GetPointerToCurrentPos; scalar_t__ GetNumAvailableBytes; scalar_t__ Init; } ;
struct TYPE_6__ {int numHashBytes; int /*<<< orphan*/  bigHash; } ;
typedef  void* Mf_Skip_Func ;
typedef  void* Mf_Mix_Matches ;
typedef  scalar_t__ Mf_Init_Func ;
typedef  scalar_t__ Mf_GetPointerToCurrentPos_Func ;
typedef  scalar_t__ Mf_GetNumAvailableBytes_Func ;
typedef  void* Mf_GetMatches_Func ;
typedef  TYPE_2__ IMatchFinder ;
typedef  TYPE_3__ CMatchFinderMt ;

/* Variables and functions */
 int /*<<< orphan*/  GetHeads2 ; 
 int /*<<< orphan*/  GetHeads3 ; 
 int /*<<< orphan*/  GetHeads4 ; 
 int /*<<< orphan*/  GetHeads4b ; 
 int /*<<< orphan*/  MatchFinderMt0_Skip ; 
 scalar_t__ MatchFinderMt2_GetMatches ; 
 int /*<<< orphan*/  MatchFinderMt2_Skip ; 
 int /*<<< orphan*/  MatchFinderMt3_Skip ; 
 scalar_t__ MatchFinderMt_GetMatches ; 
 scalar_t__ MatchFinderMt_GetNumAvailableBytes ; 
 scalar_t__ MatchFinderMt_GetPointerToCurrentPos ; 
 scalar_t__ MatchFinderMt_Init ; 
 int /*<<< orphan*/  MixMatches2 ; 
 int /*<<< orphan*/  MixMatches3 ; 

void MatchFinderMt_CreateVTable(CMatchFinderMt *p, IMatchFinder *vTable)
{
  vTable->Init = (Mf_Init_Func)MatchFinderMt_Init;
  vTable->GetNumAvailableBytes = (Mf_GetNumAvailableBytes_Func)MatchFinderMt_GetNumAvailableBytes;
  vTable->GetPointerToCurrentPos = (Mf_GetPointerToCurrentPos_Func)MatchFinderMt_GetPointerToCurrentPos;
  vTable->GetMatches = (Mf_GetMatches_Func)MatchFinderMt_GetMatches;
  
  switch (p->MatchFinder->numHashBytes)
  {
    case 2:
      p->GetHeadsFunc = GetHeads2;
      p->MixMatchesFunc = (Mf_Mix_Matches)NULL;
      vTable->Skip = (Mf_Skip_Func)MatchFinderMt0_Skip;
      vTable->GetMatches = (Mf_GetMatches_Func)MatchFinderMt2_GetMatches;
      break;
    case 3:
      p->GetHeadsFunc = GetHeads3;
      p->MixMatchesFunc = (Mf_Mix_Matches)MixMatches2;
      vTable->Skip = (Mf_Skip_Func)MatchFinderMt2_Skip;
      break;
    default:
    /* case 4: */
      p->GetHeadsFunc = p->MatchFinder->bigHash ? GetHeads4b : GetHeads4;
      p->MixMatchesFunc = (Mf_Mix_Matches)MixMatches3;
      vTable->Skip = (Mf_Skip_Func)MatchFinderMt3_Skip;
      break;
    /*
    default:
      p->GetHeadsFunc = GetHeads5;
      p->MixMatchesFunc = (Mf_Mix_Matches)MixMatches4;
      vTable->Skip = (Mf_Skip_Func)MatchFinderMt4_Skip;
      break;
    */
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
          int _len_p0 = 1;
          struct TYPE_8__ * p = (struct TYPE_8__ *) malloc(_len_p0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__MatchFinder0 = 1;
          p[_i0].MatchFinder = (struct TYPE_6__ *) malloc(_len_p__i0__MatchFinder0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_p__i0__MatchFinder0; _j0++) {
            p[_i0].MatchFinder->numHashBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].MatchFinder->bigHash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].GetHeadsFunc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vTable0 = 1;
          struct TYPE_7__ * vTable = (struct TYPE_7__ *) malloc(_len_vTable0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_vTable0; _i0++) {
            vTable[_i0].GetPointerToCurrentPos = ((-2 * (next_i()%2)) + 1) * next_i();
        vTable[_i0].GetNumAvailableBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        vTable[_i0].Init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MatchFinderMt_CreateVTable(p,vTable);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].MatchFinder);
          }
          free(p);
          free(vTable);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
