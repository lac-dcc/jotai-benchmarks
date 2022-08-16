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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct trackpoint_data {scalar_t__ variant_id; } ;
struct psmouse {struct trackpoint_data* private; } ;
struct attribute {int dummy; } ;
struct TYPE_6__ {struct attribute attr; } ;
struct TYPE_8__ {TYPE_2__ dattr; } ;
struct TYPE_5__ {struct attribute attr; } ;
struct TYPE_7__ {TYPE_1__ dattr; } ;

/* Variables and functions */
 scalar_t__ TP_VARIANT_IBM ; 
 TYPE_4__ psmouse_attr_press_to_select ; 
 TYPE_3__ psmouse_attr_sensitivity ; 

__attribute__((used)) static bool trackpoint_is_attr_available(struct psmouse *psmouse,
					 struct attribute *attr)
{
	struct trackpoint_data *tp = psmouse->private;

	return tp->variant_id == TP_VARIANT_IBM ||
		attr == &psmouse_attr_sensitivity.dattr.attr ||
		attr == &psmouse_attr_press_to_select.dattr.attr;
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
          int _len_psmouse0 = 1;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
              int _len_psmouse__i0__private0 = 1;
          psmouse[_i0].private = (struct trackpoint_data *) malloc(_len_psmouse__i0__private0*sizeof(struct trackpoint_data));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private0; _j0++) {
            psmouse[_i0].private->variant_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_attr0 = 1;
          struct attribute * attr = (struct attribute *) malloc(_len_attr0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trackpoint_is_attr_available(psmouse,attr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].private);
          }
          free(psmouse);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
