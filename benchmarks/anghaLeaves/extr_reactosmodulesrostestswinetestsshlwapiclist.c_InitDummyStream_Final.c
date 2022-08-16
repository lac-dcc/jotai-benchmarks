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
struct TYPE_4__ {scalar_t__ QuadPart; } ;
struct TYPE_3__ {int /*<<< orphan*/ * lpVtbl; } ;
struct dummystream {int ref; TYPE_2__ pos; int /*<<< orphan*/  item; void* failstatcall; scalar_t__ statcalls; scalar_t__ seekcalls; void* failwritesize; void* failwritecall; scalar_t__ writecalls; void* readreturnlarge; void* readbeyondend; void* failreadsize; void* failreadcall; scalar_t__ readcalls; TYPE_1__ IStream_iface; } ;

/* Variables and functions */
 void* FALSE ; 
 int /*<<< orphan*/  SHLWAPI_CLIST_items ; 
 int /*<<< orphan*/  iclvt ; 

__attribute__((used)) static void InitDummyStream(struct dummystream *obj)
{
    obj->IStream_iface.lpVtbl = &iclvt;
    obj->ref = 1;
    obj->readcalls = 0;
    obj->failreadcall = FALSE;
    obj->failreadsize = FALSE;
    obj->readbeyondend = FALSE;
    obj->readreturnlarge = FALSE;
    obj->writecalls = 0;
    obj->failwritecall = FALSE;
    obj->failwritesize = FALSE;
    obj->seekcalls = 0;
    obj->statcalls = 0;
    obj->failstatcall = FALSE;
    obj->item = SHLWAPI_CLIST_items;
    obj->pos.QuadPart = 0;
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
          int _len_obj0 = 1;
          struct dummystream * obj = (struct dummystream *) malloc(_len_obj0*sizeof(struct dummystream));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].pos.QuadPart = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].item = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].statcalls = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].seekcalls = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].writecalls = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].readcalls = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_obj__i0__IStream_iface_lpVtbl0 = 1;
          obj[_i0].IStream_iface.lpVtbl = (int *) malloc(_len_obj__i0__IStream_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_obj__i0__IStream_iface_lpVtbl0; _j0++) {
            obj[_i0].IStream_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          InitDummyStream(obj);
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
