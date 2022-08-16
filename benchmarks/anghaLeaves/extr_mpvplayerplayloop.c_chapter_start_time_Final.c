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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct MPContext {int num_chapters; TYPE_1__* chapters; } ;
struct TYPE_2__ {double pts; } ;

/* Variables and functions */
 double MP_NOPTS_VALUE ; 

double chapter_start_time(struct MPContext *mpctx, int chapter)
{
    if (chapter == -1)
        return 0;
    if (chapter >= 0 && chapter < mpctx->num_chapters)
        return mpctx->chapters[chapter].pts;
    return MP_NOPTS_VALUE;
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
          int chapter = 100;
          int _len_mpctx0 = 1;
          struct MPContext * mpctx = (struct MPContext *) malloc(_len_mpctx0*sizeof(struct MPContext));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
            mpctx[_i0].num_chapters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpctx__i0__chapters0 = 1;
          mpctx[_i0].chapters = (struct TYPE_2__ *) malloc(_len_mpctx__i0__chapters0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__chapters0; _j0++) {
            mpctx[_i0].chapters->pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = chapter_start_time(mpctx,chapter);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(mpctx[_aux].chapters);
          }
          free(mpctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
