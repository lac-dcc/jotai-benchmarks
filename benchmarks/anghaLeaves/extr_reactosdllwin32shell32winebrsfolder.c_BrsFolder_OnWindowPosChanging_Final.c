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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_9__ {TYPE_2__ szMin; TYPE_1__* lpBrowseInfo; } ;
typedef  TYPE_3__ browse_info ;
struct TYPE_10__ {int flags; scalar_t__ cx; scalar_t__ cy; } ;
typedef  TYPE_4__ WINDOWPOS ;
struct TYPE_7__ {int ulFlags; } ;
typedef  int /*<<< orphan*/  LRESULT ;

/* Variables and functions */
 int BIF_NEWDIALOGSTYLE ; 
 int SWP_NOSIZE ; 

__attribute__((used)) static LRESULT BrsFolder_OnWindowPosChanging(browse_info *info, WINDOWPOS *pos)
{
    if ((info->lpBrowseInfo->ulFlags & BIF_NEWDIALOGSTYLE) && !(pos->flags & SWP_NOSIZE))
    {
        if (pos->cx < info->szMin.cx)
            pos->cx = info->szMin.cx;
        if (pos->cy < info->szMin.cy)
            pos->cy = info->szMin.cy;
    }
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
          int _len_info0 = 1;
          struct TYPE_9__ * info = (struct TYPE_9__ *) malloc(_len_info0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].szMin.cx = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].szMin.cy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__lpBrowseInfo0 = 1;
          info[_i0].lpBrowseInfo = (struct TYPE_7__ *) malloc(_len_info__i0__lpBrowseInfo0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_info__i0__lpBrowseInfo0; _j0++) {
            info[_i0].lpBrowseInfo->ulFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pos0 = 1;
          struct TYPE_10__ * pos = (struct TYPE_10__ *) malloc(_len_pos0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pos[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        pos[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BrsFolder_OnWindowPosChanging(info,pos);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].lpBrowseInfo);
          }
          free(info);
          free(pos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
