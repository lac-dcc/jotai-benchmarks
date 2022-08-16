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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int flags; } ;
struct batadv_tt_local_entry {TYPE_1__ common; } ;
struct TYPE_4__ {int flags; } ;
struct batadv_tt_global_entry {TYPE_2__ common; } ;

/* Variables and functions */
 int BATADV_TT_CLIENT_ISOLA ; 
 int BATADV_TT_CLIENT_WIFI ; 

__attribute__((used)) static bool
_batadv_is_ap_isolated(struct batadv_tt_local_entry *tt_local_entry,
		       struct batadv_tt_global_entry *tt_global_entry)
{
	if (tt_local_entry->common.flags & BATADV_TT_CLIENT_WIFI &&
	    tt_global_entry->common.flags & BATADV_TT_CLIENT_WIFI)
		return true;

	/* check if the two clients are marked as isolated */
	if (tt_local_entry->common.flags & BATADV_TT_CLIENT_ISOLA &&
	    tt_global_entry->common.flags & BATADV_TT_CLIENT_ISOLA)
		return true;

	return false;
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
          int _len_tt_local_entry0 = 1;
          struct batadv_tt_local_entry * tt_local_entry = (struct batadv_tt_local_entry *) malloc(_len_tt_local_entry0*sizeof(struct batadv_tt_local_entry));
          for(int _i0 = 0; _i0 < _len_tt_local_entry0; _i0++) {
            tt_local_entry[_i0].common.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tt_global_entry0 = 1;
          struct batadv_tt_global_entry * tt_global_entry = (struct batadv_tt_global_entry *) malloc(_len_tt_global_entry0*sizeof(struct batadv_tt_global_entry));
          for(int _i0 = 0; _i0 < _len_tt_global_entry0; _i0++) {
            tt_global_entry[_i0].common.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _batadv_is_ap_isolated(tt_local_entry,tt_global_entry);
          printf("%d\n", benchRet); 
          free(tt_local_entry);
          free(tt_global_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
