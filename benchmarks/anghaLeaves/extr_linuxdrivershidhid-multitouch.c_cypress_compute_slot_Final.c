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
struct mt_usages {scalar_t__* contactid; } ;
struct mt_application {scalar_t__ num_received; } ;

/* Variables and functions */

__attribute__((used)) static int cypress_compute_slot(struct mt_application *application,
				struct mt_usages *slot)
{
	if (*slot->contactid != 0 || application->num_received == 0)
		return *slot->contactid;
	else
		return -1;
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
          int _len_application0 = 1;
          struct mt_application * application = (struct mt_application *) malloc(_len_application0*sizeof(struct mt_application));
          for(int _i0 = 0; _i0 < _len_application0; _i0++) {
            application[_i0].num_received = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_slot0 = 1;
          struct mt_usages * slot = (struct mt_usages *) malloc(_len_slot0*sizeof(struct mt_usages));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__contactid0 = 1;
          slot[_i0].contactid = (long *) malloc(_len_slot__i0__contactid0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_slot__i0__contactid0; _j0++) {
            slot[_i0].contactid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cypress_compute_slot(application,slot);
          printf("%d\n", benchRet); 
          free(application);
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].contactid);
          }
          free(slot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
