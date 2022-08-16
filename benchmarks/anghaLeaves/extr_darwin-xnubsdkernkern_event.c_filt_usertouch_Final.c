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
typedef  int uint32_t ;
struct knote {int kn_sfflags; scalar_t__ kn_hookid; int /*<<< orphan*/  kn_sdata; } ;
struct kevent_internal_s {int fflags; int /*<<< orphan*/  data; } ;

/* Variables and functions */
 scalar_t__ FILTER_ACTIVE ; 
#define  NOTE_FFAND 131 
#define  NOTE_FFCOPY 130 
 int NOTE_FFCTRLMASK ; 
 int NOTE_FFLAGSMASK ; 
#define  NOTE_FFNOP 129 
#define  NOTE_FFOR 128 
 int NOTE_TRIGGER ; 

__attribute__((used)) static int
filt_usertouch(struct knote *kn, struct kevent_internal_s *kev)
{
	uint32_t ffctrl;
	int fflags;

	ffctrl = kev->fflags & NOTE_FFCTRLMASK;
	fflags = kev->fflags & NOTE_FFLAGSMASK;
	switch (ffctrl) {
	case NOTE_FFNOP:
		break;
	case NOTE_FFAND:
		kn->kn_sfflags &= fflags;
		break;
	case NOTE_FFOR:
		kn->kn_sfflags |= fflags;
		break;
	case NOTE_FFCOPY:
		kn->kn_sfflags = fflags;
		break;
	}
	kn->kn_sdata = kev->data;

	if (kev->fflags & NOTE_TRIGGER) {
		kn->kn_hookid = FILTER_ACTIVE;
	}
	return (int)kn->kn_hookid;
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
          int _len_kn0 = 1;
          struct knote * kn = (struct knote *) malloc(_len_kn0*sizeof(struct knote));
          for(int _i0 = 0; _i0 < _len_kn0; _i0++) {
            kn[_i0].kn_sfflags = ((-2 * (next_i()%2)) + 1) * next_i();
        kn[_i0].kn_hookid = ((-2 * (next_i()%2)) + 1) * next_i();
        kn[_i0].kn_sdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kev0 = 1;
          struct kevent_internal_s * kev = (struct kevent_internal_s *) malloc(_len_kev0*sizeof(struct kevent_internal_s));
          for(int _i0 = 0; _i0 < _len_kev0; _i0++) {
            kev[_i0].fflags = ((-2 * (next_i()%2)) + 1) * next_i();
        kev[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = filt_usertouch(kn,kev);
          printf("%d\n", benchRet); 
          free(kn);
          free(kev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
