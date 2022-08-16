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
       1            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  finished; } ;
typedef  TYPE_1__ OutputStream ;
typedef  int /*<<< orphan*/  OSTFinished ;

/* Variables and functions */
 int nb_output_streams ; 
 TYPE_1__** output_streams ; 

__attribute__((used)) static void close_all_output_streams(OutputStream *ost, OSTFinished this_stream, OSTFinished others)
{
    int i;
    for (i = 0; i < nb_output_streams; i++) {
        OutputStream *ost2 = output_streams[i];
        ost2->finished |= ost == ost2 ? this_stream : others;
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
          int this_stream = 100;
          int others = 100;
          int _len_ost0 = 1;
          struct TYPE_4__ * ost = (struct TYPE_4__ *) malloc(_len_ost0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ost0; _i0++) {
            ost[_i0].finished = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          close_all_output_streams(ost,this_stream,others);
          free(ost);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int this_stream = 10;
          int others = 10;
          int _len_ost0 = 100;
          struct TYPE_4__ * ost = (struct TYPE_4__ *) malloc(_len_ost0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ost0; _i0++) {
            ost[_i0].finished = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          close_all_output_streams(ost,this_stream,others);
          free(ost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
