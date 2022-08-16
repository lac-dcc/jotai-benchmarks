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

/* Type definitions */
struct ws_interval {int next; scalar_t__ ts_start; scalar_t__ ts_end; int /*<<< orphan*/  amp0; int /*<<< orphan*/  amp; int /*<<< orphan*/  dphi0; int /*<<< orphan*/  dphi; int /*<<< orphan*/  phi0; int /*<<< orphan*/  phi; } ;
struct wavesynth_context {int cur_inter; int next_inter; int nb_inter; scalar_t__ next_ts; struct ws_interval* inter; } ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */
 scalar_t__ INF_TS ; 

__attribute__((used)) static void wavesynth_enter_intervals(struct wavesynth_context *ws, int64_t ts)
{
    int *last, i;
    struct ws_interval *in;

    last = &ws->cur_inter;
    for (i = ws->cur_inter; i >= 0; i = ws->inter[i].next)
        last = &ws->inter[i].next;
    for (i = ws->next_inter; i < ws->nb_inter; i++) {
        in = &ws->inter[i];
        if (ts < in->ts_start)
            break;
        if (ts >= in->ts_end)
            continue;
        *last = i;
        last = &in->next;
        in->phi = in->phi0;
        in->dphi = in->dphi0;
        in->amp = in->amp0;
    }
    ws->next_inter = i;
    ws->next_ts = i < ws->nb_inter ? ws->inter[i].ts_start : INF_TS;
    *last = -1;
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
          long ts = 100;
          int _len_ws0 = 1;
          struct wavesynth_context * ws = (struct wavesynth_context *) malloc(_len_ws0*sizeof(struct wavesynth_context));
          for(int _i0 = 0; _i0 < _len_ws0; _i0++) {
            ws[_i0].cur_inter = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].next_inter = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].nb_inter = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].next_ts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ws__i0__inter0 = 1;
          ws[_i0].inter = (struct ws_interval *) malloc(_len_ws__i0__inter0*sizeof(struct ws_interval));
          for(int _j0 = 0; _j0 < _len_ws__i0__inter0; _j0++) {
            ws[_i0].inter->next = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->ts_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->ts_end = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->amp0 = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->amp = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->dphi0 = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->dphi = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->phi0 = ((-2 * (next_i()%2)) + 1) * next_i();
        ws[_i0].inter->phi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          wavesynth_enter_intervals(ws,ts);
          for(int _aux = 0; _aux < _len_ws0; _aux++) {
          free(ws[_aux].inter);
          }
          free(ws);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
