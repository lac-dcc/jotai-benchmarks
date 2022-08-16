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
struct demuxer {int num_chapters; TYPE_1__* chapters; } ;
struct TYPE_2__ {double pts; } ;

/* Variables and functions */

__attribute__((used)) static double demuxer_chapter_time(struct demuxer *demuxer, int n)
{
    if (n < 0 || n >= demuxer->num_chapters)
        return -1;
    return demuxer->chapters[n].pts;
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
          int n = 100;
          int _len_demuxer0 = 1;
          struct demuxer * demuxer = (struct demuxer *) malloc(_len_demuxer0*sizeof(struct demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].num_chapters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__chapters0 = 1;
          demuxer[_i0].chapters = (struct TYPE_2__ *) malloc(_len_demuxer__i0__chapters0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__chapters0; _j0++) {
            demuxer[_i0].chapters->pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = demuxer_chapter_time(demuxer,n);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].chapters);
          }
          free(demuxer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
