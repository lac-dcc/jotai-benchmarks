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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct st_hba {int /*<<< orphan*/  msi_lock; } ;
struct TYPE_3__ {int event; } ;
typedef  TYPE_1__ pm_message_t ;

/* Variables and functions */
#define  PM_EVENT_HIBERNATE 129 
#define  PM_EVENT_SUSPEND 128 
 int ST_NOTHANDLED ; 
 int ST_S3 ; 
 int ST_S4 ; 

__attribute__((used)) static int stex_choice_sleep_mic(struct st_hba *hba, pm_message_t state)
{
	switch (state.event) {
	case PM_EVENT_SUSPEND:
		return ST_S3;
	case PM_EVENT_HIBERNATE:
		hba->msi_lock = 0;
		return ST_S4;
	default:
		return ST_NOTHANDLED;
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
          int _len_hba0 = 1;
          struct st_hba * hba = (struct st_hba *) malloc(_len_hba0*sizeof(struct st_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].msi_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ state;
        state.event = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = stex_choice_sleep_mic(hba,state);
          printf("%d\n", benchRet); 
          free(hba);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hba0 = 100;
          struct st_hba * hba = (struct st_hba *) malloc(_len_hba0*sizeof(struct st_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].msi_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ state;
        state.event = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = stex_choice_sleep_mic(hba,state);
          printf("%d\n", benchRet); 
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
