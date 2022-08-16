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
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  mfxStatus ;
typedef  TYPE_1__* mfxHDL ;
struct TYPE_10__ {int /*<<< orphan*/  NumFrameActual; int /*<<< orphan*/  mids; } ;
typedef  TYPE_2__ mfxFrameAllocResponse ;
struct TYPE_11__ {int Type; } ;
typedef  TYPE_3__ mfxFrameAllocRequest ;
struct TYPE_12__ {int /*<<< orphan*/  nb_mem_ids_out; int /*<<< orphan*/  mem_ids_out; int /*<<< orphan*/  nb_mem_ids_in; int /*<<< orphan*/  mem_ids_in; } ;
struct TYPE_9__ {TYPE_4__* priv; } ;
typedef  TYPE_4__ QSVScaleContext ;
typedef  TYPE_1__ AVFilterContext ;

/* Variables and functions */
 int /*<<< orphan*/  MFX_ERR_NONE ; 
 int /*<<< orphan*/  MFX_ERR_UNSUPPORTED ; 
 int MFX_MEMTYPE_EXTERNAL_FRAME ; 
 int MFX_MEMTYPE_FROM_VPPIN ; 
 int MFX_MEMTYPE_FROM_VPPOUT ; 
 int MFX_MEMTYPE_VIDEO_MEMORY_PROCESSOR_TARGET ; 

__attribute__((used)) static mfxStatus frame_alloc(mfxHDL pthis, mfxFrameAllocRequest *req,
                             mfxFrameAllocResponse *resp)
{
    AVFilterContext *ctx = pthis;
    QSVScaleContext   *s = ctx->priv;

    if (!(req->Type & MFX_MEMTYPE_VIDEO_MEMORY_PROCESSOR_TARGET) ||
        !(req->Type & (MFX_MEMTYPE_FROM_VPPIN | MFX_MEMTYPE_FROM_VPPOUT)) ||
        !(req->Type & MFX_MEMTYPE_EXTERNAL_FRAME))
        return MFX_ERR_UNSUPPORTED;

    if (req->Type & MFX_MEMTYPE_FROM_VPPIN) {
        resp->mids           = s->mem_ids_in;
        resp->NumFrameActual = s->nb_mem_ids_in;
    } else {
        resp->mids           = s->mem_ids_out;
        resp->NumFrameActual = s->nb_mem_ids_out;
    }

    return MFX_ERR_NONE;
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
          int _len_pthis0 = 1;
          struct TYPE_9__ * pthis = (struct TYPE_9__ *) malloc(_len_pthis0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pthis0; _i0++) {
              int _len_pthis__i0__priv0 = 1;
          pthis[_i0].priv = (struct TYPE_12__ *) malloc(_len_pthis__i0__priv0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_pthis__i0__priv0; _j0++) {
            pthis[_i0].priv->nb_mem_ids_out = ((-2 * (next_i()%2)) + 1) * next_i();
        pthis[_i0].priv->mem_ids_out = ((-2 * (next_i()%2)) + 1) * next_i();
        pthis[_i0].priv->nb_mem_ids_in = ((-2 * (next_i()%2)) + 1) * next_i();
        pthis[_i0].priv->mem_ids_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_req0 = 1;
          struct TYPE_11__ * req = (struct TYPE_11__ *) malloc(_len_req0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].Type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp0 = 1;
          struct TYPE_10__ * resp = (struct TYPE_10__ *) malloc(_len_resp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].NumFrameActual = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].mids = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = frame_alloc(pthis,req,resp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pthis0; _aux++) {
          free(pthis[_aux].priv);
          }
          free(pthis);
          free(req);
          free(resp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
