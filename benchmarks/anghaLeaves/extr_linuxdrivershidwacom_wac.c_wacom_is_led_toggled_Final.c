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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int count; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ features; } ;
struct wacom {TYPE_3__ led; TYPE_2__ wacom_wac; } ;

/* Variables and functions */
 scalar_t__ WACOM_21UX2 ; 

__attribute__((used)) static bool wacom_is_led_toggled(struct wacom *wacom, int button_count,
				 int mask, int group)
{
	int button_per_group;

	/*
	 * 21UX2 has LED group 1 to the left and LED group 0
	 * to the right. We need to reverse the group to match this
	 * historical behavior.
	 */
	if (wacom->wacom_wac.features.type == WACOM_21UX2)
		group = 1 - group;

	button_per_group = button_count/wacom->led.count;

	return mask & (1 << (group * button_per_group));
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
          int button_count = 100;
          int mask = 100;
          int group = 100;
          int _len_wacom0 = 1;
          struct wacom * wacom = (struct wacom *) malloc(_len_wacom0*sizeof(struct wacom));
          for(int _i0 = 0; _i0 < _len_wacom0; _i0++) {
            wacom[_i0].led.count = ((-2 * (next_i()%2)) + 1) * next_i();
        wacom[_i0].wacom_wac.features.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wacom_is_led_toggled(wacom,button_count,mask,group);
          printf("%d\n", benchRet); 
          free(wacom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
