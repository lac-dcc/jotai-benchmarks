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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int numHashBytes; int /*<<< orphan*/  btMode; } ;
struct TYPE_5__ {void* Skip; void* GetMatches; scalar_t__ GetPointerToCurrentPos; scalar_t__ GetNumAvailableBytes; scalar_t__ GetIndexByte; scalar_t__ Init; } ;
typedef  void* Mf_Skip_Func ;
typedef  scalar_t__ Mf_Init_Func ;
typedef  scalar_t__ Mf_GetPointerToCurrentPos_Func ;
typedef  scalar_t__ Mf_GetNumAvailableBytes_Func ;
typedef  void* Mf_GetMatches_Func ;
typedef  scalar_t__ Mf_GetIndexByte_Func ;
typedef  TYPE_1__ IMatchFinder ;
typedef  TYPE_2__ CMatchFinder ;

/* Variables and functions */
 scalar_t__ Bt2_MatchFinder_GetMatches ; 
 scalar_t__ Bt2_MatchFinder_Skip ; 
 scalar_t__ Bt3_MatchFinder_GetMatches ; 
 scalar_t__ Bt3_MatchFinder_Skip ; 
 scalar_t__ Bt4_MatchFinder_GetMatches ; 
 scalar_t__ Bt4_MatchFinder_Skip ; 
 scalar_t__ Hc4_MatchFinder_GetMatches ; 
 scalar_t__ Hc4_MatchFinder_Skip ; 
 scalar_t__ MatchFinder_GetIndexByte ; 
 scalar_t__ MatchFinder_GetNumAvailableBytes ; 
 scalar_t__ MatchFinder_GetPointerToCurrentPos ; 
 scalar_t__ MatchFinder_Init ; 

void MatchFinder_CreateVTable(CMatchFinder *p, IMatchFinder *vTable)
{
  vTable->Init = (Mf_Init_Func)MatchFinder_Init;
  vTable->GetIndexByte = (Mf_GetIndexByte_Func)MatchFinder_GetIndexByte;
  vTable->GetNumAvailableBytes = (Mf_GetNumAvailableBytes_Func)MatchFinder_GetNumAvailableBytes;
  vTable->GetPointerToCurrentPos = (Mf_GetPointerToCurrentPos_Func)MatchFinder_GetPointerToCurrentPos;
  if (!p->btMode)
  {
    vTable->GetMatches = (Mf_GetMatches_Func)Hc4_MatchFinder_GetMatches;
    vTable->Skip = (Mf_Skip_Func)Hc4_MatchFinder_Skip;
  }
  else if (p->numHashBytes == 2)
  {
    vTable->GetMatches = (Mf_GetMatches_Func)Bt2_MatchFinder_GetMatches;
    vTable->Skip = (Mf_Skip_Func)Bt2_MatchFinder_Skip;
  }
  else if (p->numHashBytes == 3)
  {
    vTable->GetMatches = (Mf_GetMatches_Func)Bt3_MatchFinder_GetMatches;
    vTable->Skip = (Mf_Skip_Func)Bt3_MatchFinder_Skip;
  }
  else
  {
    vTable->GetMatches = (Mf_GetMatches_Func)Bt4_MatchFinder_GetMatches;
    vTable->Skip = (Mf_Skip_Func)Bt4_MatchFinder_Skip;
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
          struct TYPE_6__ * p = (struct TYPE_6__ *) malloc(_len_p0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].numHashBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].btMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vTable0 = 1;
          struct TYPE_5__ * vTable = (struct TYPE_5__ *) malloc(_len_vTable0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_vTable0; _i0++) {
            vTable[_i0].GetPointerToCurrentPos = ((-2 * (next_i()%2)) + 1) * next_i();
        vTable[_i0].GetNumAvailableBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        vTable[_i0].GetIndexByte = ((-2 * (next_i()%2)) + 1) * next_i();
        vTable[_i0].Init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MatchFinder_CreateVTable(p,vTable);
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
