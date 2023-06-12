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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct representation {size_t n_timelines; TYPE_1__** timelines; } ;
typedef  size_t int64_t ;
struct TYPE_2__ {scalar_t__ starttime; size_t duration; int repeat; } ;

/* Variables and functions */

__attribute__((used)) static int64_t get_segment_start_time_based_on_timeline(struct representation *pls, int64_t cur_seq_no)
{
    int64_t start_time = 0;
    int64_t i = 0;
    int64_t j = 0;
    int64_t num = 0;

    if (pls->n_timelines) {
        for (i = 0; i < pls->n_timelines; i++) {
            if (pls->timelines[i]->starttime > 0) {
                start_time = pls->timelines[i]->starttime;
            }
            if (num == cur_seq_no)
                goto finish;

            start_time += pls->timelines[i]->duration;

            if (pls->timelines[i]->repeat == -1) {
                start_time = pls->timelines[i]->duration * cur_seq_no;
                goto finish;
            }

            for (j = 0; j < pls->timelines[i]->repeat; j++) {
                num++;
                if (num == cur_seq_no)
                    goto finish;
                start_time += pls->timelines[i]->duration;
            }
            num++;
        }
    }
finish:
    return start_time;
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
          unsigned long cur_seq_no = 100;
        
          int _len_pls0 = 1;
          struct representation * pls = (struct representation *) malloc(_len_pls0*sizeof(struct representation));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
              pls[_i0].n_timelines = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__timelines0 = 1;
          pls[_i0].timelines = (struct TYPE_2__ **) malloc(_len_pls__i0__timelines0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__timelines0; _j0++) {
            int _len_pls__i0__timelines1 = 1;
            pls[_i0].timelines[_j0] = (struct TYPE_2__ *) malloc(_len_pls__i0__timelines1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_pls__i0__timelines1; _j1++) {
                pls[_i0].timelines[_j0]->starttime = ((-2 * (next_i()%2)) + 1) * next_i();
          pls[_i0].timelines[_j0]->duration = ((-2 * (next_i()%2)) + 1) * next_i();
          pls[_i0].timelines[_j0]->repeat = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          unsigned long benchRet = get_segment_start_time_based_on_timeline(pls,cur_seq_no);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].timelines));
        free(pls[_aux].timelines);
          }
          free(pls);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long cur_seq_no = 255;
        
          int _len_pls0 = 65025;
          struct representation * pls = (struct representation *) malloc(_len_pls0*sizeof(struct representation));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
              pls[_i0].n_timelines = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__timelines0 = 1;
          pls[_i0].timelines = (struct TYPE_2__ **) malloc(_len_pls__i0__timelines0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__timelines0; _j0++) {
            int _len_pls__i0__timelines1 = 1;
            pls[_i0].timelines[_j0] = (struct TYPE_2__ *) malloc(_len_pls__i0__timelines1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_pls__i0__timelines1; _j1++) {
                pls[_i0].timelines[_j0]->starttime = ((-2 * (next_i()%2)) + 1) * next_i();
          pls[_i0].timelines[_j0]->duration = ((-2 * (next_i()%2)) + 1) * next_i();
          pls[_i0].timelines[_j0]->repeat = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          unsigned long benchRet = get_segment_start_time_based_on_timeline(pls,cur_seq_no);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].timelines));
        free(pls[_aux].timelines);
          }
          free(pls);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long cur_seq_no = 10;
        
          int _len_pls0 = 100;
          struct representation * pls = (struct representation *) malloc(_len_pls0*sizeof(struct representation));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
              pls[_i0].n_timelines = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__timelines0 = 1;
          pls[_i0].timelines = (struct TYPE_2__ **) malloc(_len_pls__i0__timelines0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__timelines0; _j0++) {
            int _len_pls__i0__timelines1 = 1;
            pls[_i0].timelines[_j0] = (struct TYPE_2__ *) malloc(_len_pls__i0__timelines1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_pls__i0__timelines1; _j1++) {
                pls[_i0].timelines[_j0]->starttime = ((-2 * (next_i()%2)) + 1) * next_i();
          pls[_i0].timelines[_j0]->duration = ((-2 * (next_i()%2)) + 1) * next_i();
          pls[_i0].timelines[_j0]->repeat = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          unsigned long benchRet = get_segment_start_time_based_on_timeline(pls,cur_seq_no);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].timelines));
        free(pls[_aux].timelines);
          }
          free(pls);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
