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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_3__ {int flags; } ;
typedef  int /*<<< orphan*/  MOVTrack ;
typedef  TYPE_1__ MOVIentry ;

/* Variables and functions */
 int MOV_FRAG_SAMPLE_FLAG_DEPENDS_NO ; 
 int MOV_FRAG_SAMPLE_FLAG_DEPENDS_YES ; 
 int MOV_FRAG_SAMPLE_FLAG_IS_NON_SYNC ; 
 int MOV_SYNC_SAMPLE ; 

__attribute__((used)) static uint32_t get_sample_flags(MOVTrack *track, MOVIentry *entry)
{
    return entry->flags & MOV_SYNC_SAMPLE ? MOV_FRAG_SAMPLE_FLAG_DEPENDS_NO :
           (MOV_FRAG_SAMPLE_FLAG_DEPENDS_YES | MOV_FRAG_SAMPLE_FLAG_IS_NON_SYNC);
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
          int _len_track0 = 1;
          int * track = (int *) malloc(_len_track0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry0 = 1;
          struct TYPE_3__ * entry = (struct TYPE_3__ *) malloc(_len_entry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_sample_flags(track,entry);
          printf("%d\n", benchRet); 
          free(track);
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
