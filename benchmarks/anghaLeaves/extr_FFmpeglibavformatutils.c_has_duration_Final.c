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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int nb_streams; scalar_t__ duration; TYPE_1__** streams; } ;
struct TYPE_4__ {scalar_t__ duration; } ;
typedef  TYPE_1__ AVStream ;
typedef  TYPE_2__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ AV_NOPTS_VALUE ; 

__attribute__((used)) static int has_duration(AVFormatContext *ic)
{
    int i;
    AVStream *st;

    for (i = 0; i < ic->nb_streams; i++) {
        st = ic->streams[i];
        if (st->duration != AV_NOPTS_VALUE)
            return 1;
    }
    if (ic->duration != AV_NOPTS_VALUE)
        return 1;
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
          int _len_ic0 = 1;
          struct TYPE_5__ * ic = (struct TYPE_5__ *) malloc(_len_ic0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__streams0 = 1;
          ic[_i0].streams = (struct TYPE_4__ **) malloc(_len_ic__i0__streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ic__i0__streams0; _j0++) {
            int _len_ic__i0__streams1 = 1;
            ic[_i0].streams[_j0] = (struct TYPE_4__ *) malloc(_len_ic__i0__streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ic__i0__streams1; _j1++) {
              ic[_i0].streams[_j0]->duration = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = has_duration(ic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(*(ic[_aux].streams));
        free(ic[_aux].streams);
          }
          free(ic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
