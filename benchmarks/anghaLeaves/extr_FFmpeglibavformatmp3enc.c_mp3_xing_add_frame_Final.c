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
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int seen; int want; size_t pos; int /*<<< orphan*/ * bag; int /*<<< orphan*/  size; int /*<<< orphan*/  frames; } ;
typedef  TYPE_1__ MP3Context ;
typedef  TYPE_2__ AVPacket ;

/* Variables and functions */
 int XING_NUM_BAGS ; 

__attribute__((used)) static void mp3_xing_add_frame(MP3Context *mp3, AVPacket *pkt)
{
    int i;

    mp3->frames++;
    mp3->seen++;
    mp3->size += pkt->size;

    if (mp3->want == mp3->seen) {
        mp3->bag[mp3->pos] = mp3->size;

        if (XING_NUM_BAGS == ++mp3->pos) {
            /* shrink table to half size by throwing away each second bag. */
            for (i = 1; i < XING_NUM_BAGS; i += 2)
                mp3->bag[i >> 1] = mp3->bag[i];

            /* double wanted amount per bag. */
            mp3->want *= 2;
            /* adjust current position to half of table size. */
            mp3->pos = XING_NUM_BAGS / 2;
        }

        mp3->seen = 0;
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
          int _len_mp30 = 1;
          struct TYPE_5__ * mp3 = (struct TYPE_5__ *) malloc(_len_mp30*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mp30; _i0++) {
            mp3[_i0].seen = ((-2 * (next_i()%2)) + 1) * next_i();
        mp3[_i0].want = ((-2 * (next_i()%2)) + 1) * next_i();
        mp3[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mp3__i0__bag0 = 1;
          mp3[_i0].bag = (int *) malloc(_len_mp3__i0__bag0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp3__i0__bag0; _j0++) {
            mp3[_i0].bag[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mp3[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        mp3[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          struct TYPE_6__ * pkt = (struct TYPE_6__ *) malloc(_len_pkt0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp3_xing_add_frame(mp3,pkt);
          for(int _aux = 0; _aux < _len_mp30; _aux++) {
          free(mp3[_aux].bag);
          }
          free(mp3);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
