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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_2__ {int vendor_id; int subsystem_id; } ;
struct hda_codec {TYPE_1__ core; } ;

/* Variables and functions */

__attribute__((used)) static bool hp_bnb2011_with_dock(struct hda_codec *codec)
{
	if (codec->core.vendor_id != 0x111d7605 &&
	    codec->core.vendor_id != 0x111d76d1)
		return false;

	switch (codec->core.subsystem_id) {
	case 0x103c1618:
	case 0x103c1619:
	case 0x103c161a:
	case 0x103c161b:
	case 0x103c161c:
	case 0x103c161d:
	case 0x103c161e:
	case 0x103c161f:

	case 0x103c162a:
	case 0x103c162b:

	case 0x103c1630:
	case 0x103c1631:

	case 0x103c1633:
	case 0x103c1634:
	case 0x103c1635:

	case 0x103c3587:
	case 0x103c3588:
	case 0x103c3589:
	case 0x103c358a:

	case 0x103c3667:
	case 0x103c3668:
	case 0x103c3669:

		return true;
	}
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

    // big-arr
    case 0:
    {
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec->core.vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        codec->core.subsystem_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hp_bnb2011_with_dock(codec);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
