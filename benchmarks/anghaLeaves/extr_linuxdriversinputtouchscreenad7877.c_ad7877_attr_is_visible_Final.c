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
typedef  scalar_t__ umode_t ;
struct kobject {int dummy; } ;
struct attribute {scalar_t__ mode; } ;
struct TYPE_4__ {struct attribute attr; } ;
struct TYPE_3__ {struct attribute attr; } ;

/* Variables and functions */
 TYPE_2__ dev_attr_aux3 ; 
 TYPE_1__ dev_attr_gpio3 ; 
 scalar_t__ gpio3 ; 

__attribute__((used)) static umode_t ad7877_attr_is_visible(struct kobject *kobj,
				     struct attribute *attr, int n)
{
	umode_t mode = attr->mode;

	if (attr == &dev_attr_aux3.attr) {
		if (gpio3)
			mode = 0;
	} else if (attr == &dev_attr_gpio3.attr) {
		if (!gpio3)
			mode = 0;
	}

	return mode;
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
          int n = 100;
          int _len_kobj0 = 1;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct attribute * attr = (struct attribute *) malloc(_len_attr0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ad7877_attr_is_visible(kobj,attr,n);
          printf("%ld\n", benchRet); 
          free(kobj);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
