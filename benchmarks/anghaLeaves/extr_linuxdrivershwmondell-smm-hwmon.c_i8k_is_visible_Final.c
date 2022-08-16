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
typedef  int /*<<< orphan*/  umode_t ;
struct kobject {int dummy; } ;
struct attribute {int /*<<< orphan*/  mode; } ;

/* Variables and functions */
 int I8K_HWMON_HAVE_FAN1 ; 
 int I8K_HWMON_HAVE_FAN2 ; 
 int I8K_HWMON_HAVE_FAN3 ; 
 int I8K_HWMON_HAVE_TEMP1 ; 
 int I8K_HWMON_HAVE_TEMP2 ; 
 int I8K_HWMON_HAVE_TEMP3 ; 
 int I8K_HWMON_HAVE_TEMP4 ; 
 scalar_t__ disallow_fan_support ; 
 scalar_t__ disallow_fan_type_call ; 
 int i8k_hwmon_flags ; 

__attribute__((used)) static umode_t i8k_is_visible(struct kobject *kobj, struct attribute *attr,
			      int index)
{
	if (disallow_fan_support && index >= 8)
		return 0;
	if (disallow_fan_type_call &&
	    (index == 9 || index == 12 || index == 15))
		return 0;
	if (index >= 0 && index <= 1 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_TEMP1))
		return 0;
	if (index >= 2 && index <= 3 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_TEMP2))
		return 0;
	if (index >= 4 && index <= 5 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_TEMP3))
		return 0;
	if (index >= 6 && index <= 7 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_TEMP4))
		return 0;
	if (index >= 8 && index <= 10 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_FAN1))
		return 0;
	if (index >= 11 && index <= 13 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_FAN2))
		return 0;
	if (index >= 14 && index <= 16 &&
	    !(i8k_hwmon_flags & I8K_HWMON_HAVE_FAN3))
		return 0;

	return attr->mode;
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
          int index = 100;
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
          int benchRet = i8k_is_visible(kobj,attr,index);
          printf("%d\n", benchRet); 
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
