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
struct playlist {int start_seq_no; int n_segments; TYPE_1__** segments; } ;
typedef  scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ first_timestamp; } ;
struct TYPE_4__ {scalar_t__ duration; } ;
typedef  TYPE_2__ HLSContext ;

/* Variables and functions */
 scalar_t__ AV_NOPTS_VALUE ; 

__attribute__((used)) static int find_timestamp_in_playlist(HLSContext *c, struct playlist *pls,
                                      int64_t timestamp, int *seq_no)
{
    int i;
    int64_t pos = c->first_timestamp == AV_NOPTS_VALUE ?
                  0 : c->first_timestamp;

    if (timestamp < pos) {
        *seq_no = pls->start_seq_no;
        return 0;
    }

    for (i = 0; i < pls->n_segments; i++) {
        int64_t diff = pos + pls->segments[i]->duration - timestamp;
        if (diff > 0) {
            *seq_no = pls->start_seq_no + i;
            return 1;
        }
        pos += pls->segments[i]->duration;
    }

    *seq_no = pls->start_seq_no + pls->n_segments - 1;

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
          long timestamp = 100;
          int _len_c0 = 1;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].first_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pls0 = 1;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].start_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].n_segments = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__segments0 = 1;
          pls[_i0].segments = (struct TYPE_4__ **) malloc(_len_pls__i0__segments0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__segments0; _j0++) {
            int _len_pls__i0__segments1 = 1;
            pls[_i0].segments[_j0] = (struct TYPE_4__ *) malloc(_len_pls__i0__segments1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pls__i0__segments1; _j1++) {
              pls[_i0].segments[_j0]->duration = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_seq_no0 = 1;
          int * seq_no = (int *) malloc(_len_seq_no0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_seq_no0; _i0++) {
            seq_no[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_timestamp_in_playlist(c,pls,timestamp,seq_no);
          printf("%d\n", benchRet); 
          free(c);
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].segments));
        free(pls[_aux].segments);
          }
          free(pls);
          free(seq_no);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
