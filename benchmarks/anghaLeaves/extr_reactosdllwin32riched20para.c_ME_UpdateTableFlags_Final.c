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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int dwMask; int /*<<< orphan*/  wEffects; } ;
struct TYPE_7__ {int nFlags; TYPE_1__ fmt; scalar_t__ pCell; } ;
struct TYPE_8__ {TYPE_2__ para; } ;
struct TYPE_9__ {TYPE_3__ member; } ;
typedef  TYPE_4__ ME_DisplayItem ;

/* Variables and functions */
 int MEPF_CELL ; 
 int MEPF_ROWEND ; 
 int MEPF_ROWSTART ; 
 int /*<<< orphan*/  PFE_TABLE ; 
 int /*<<< orphan*/  PFE_TABLEROWDELIMITER ; 
 int PFM_TABLE ; 
 int PFM_TABLEROWDELIMITER ; 

__attribute__((used)) static void ME_UpdateTableFlags(ME_DisplayItem *para)
{
  para->member.para.fmt.dwMask |= PFM_TABLE|PFM_TABLEROWDELIMITER;
  if (para->member.para.pCell) {
    para->member.para.nFlags |= MEPF_CELL;
  } else {
    para->member.para.nFlags &= ~MEPF_CELL;
  }
  if (para->member.para.nFlags & MEPF_ROWEND) {
    para->member.para.fmt.wEffects |= PFE_TABLEROWDELIMITER;
  } else {
    para->member.para.fmt.wEffects &= ~PFE_TABLEROWDELIMITER;
  }
  if (para->member.para.nFlags & (MEPF_ROWSTART|MEPF_CELL|MEPF_ROWEND))
    para->member.para.fmt.wEffects |= PFE_TABLE;
  else
    para->member.para.fmt.wEffects &= ~PFE_TABLE;
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
          int _len_para0 = 1;
          struct TYPE_9__ * para = (struct TYPE_9__ *) malloc(_len_para0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_para0; _i0++) {
            para[_i0].member.para.nFlags = ((-2 * (next_i()%2)) + 1) * next_i();
        para[_i0].member.para.fmt.dwMask = ((-2 * (next_i()%2)) + 1) * next_i();
        para[_i0].member.para.fmt.wEffects = ((-2 * (next_i()%2)) + 1) * next_i();
        para[_i0].member.para.pCell = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ME_UpdateTableFlags(para);
          free(para);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
