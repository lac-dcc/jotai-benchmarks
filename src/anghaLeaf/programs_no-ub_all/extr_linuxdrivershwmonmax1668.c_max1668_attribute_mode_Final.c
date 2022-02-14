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
typedef  struct TYPE_40__   TYPE_9__ ;
typedef  struct TYPE_39__   TYPE_8__ ;
typedef  struct TYPE_38__   TYPE_7__ ;
typedef  struct TYPE_37__   TYPE_6__ ;
typedef  struct TYPE_36__   TYPE_5__ ;
typedef  struct TYPE_35__   TYPE_4__ ;
typedef  struct TYPE_34__   TYPE_3__ ;
typedef  struct TYPE_33__   TYPE_2__ ;
typedef  struct TYPE_32__   TYPE_20__ ;
typedef  struct TYPE_31__   TYPE_1__ ;
typedef  struct TYPE_30__   TYPE_19__ ;
typedef  struct TYPE_29__   TYPE_18__ ;
typedef  struct TYPE_28__   TYPE_17__ ;
typedef  struct TYPE_27__   TYPE_16__ ;
typedef  struct TYPE_26__   TYPE_15__ ;
typedef  struct TYPE_25__   TYPE_14__ ;
typedef  struct TYPE_24__   TYPE_13__ ;
typedef  struct TYPE_23__   TYPE_12__ ;
typedef  struct TYPE_22__   TYPE_11__ ;
typedef  struct TYPE_21__   TYPE_10__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  umode_t ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_40__ {struct attribute attr; } ;
struct TYPE_39__ {struct attribute attr; } ;
struct TYPE_38__ {struct attribute attr; } ;
struct TYPE_37__ {struct attribute attr; } ;
struct TYPE_36__ {struct attribute attr; } ;
struct TYPE_35__ {struct attribute attr; } ;
struct TYPE_34__ {struct attribute attr; } ;
struct TYPE_33__ {struct attribute attr; } ;
struct TYPE_31__ {struct attribute attr; } ;
struct TYPE_32__ {TYPE_1__ dev_attr; } ;
struct TYPE_30__ {TYPE_6__ dev_attr; } ;
struct TYPE_29__ {TYPE_2__ dev_attr; } ;
struct TYPE_28__ {TYPE_7__ dev_attr; } ;
struct TYPE_27__ {TYPE_3__ dev_attr; } ;
struct TYPE_26__ {TYPE_8__ dev_attr; } ;
struct TYPE_25__ {TYPE_4__ dev_attr; } ;
struct TYPE_24__ {TYPE_9__ dev_attr; } ;
struct TYPE_23__ {TYPE_5__ dev_attr; } ;
struct TYPE_21__ {struct attribute attr; } ;
struct TYPE_22__ {TYPE_10__ dev_attr; } ;

/* Variables and functions */
 int /*<<< orphan*/  S_IRUGO ; 
 int /*<<< orphan*/  S_IWUSR ; 
 scalar_t__ read_only ; 
 TYPE_20__ sensor_dev_attr_temp1_max ; 
 TYPE_19__ sensor_dev_attr_temp1_min ; 
 TYPE_18__ sensor_dev_attr_temp2_max ; 
 TYPE_17__ sensor_dev_attr_temp2_min ; 
 TYPE_16__ sensor_dev_attr_temp3_max ; 
 TYPE_15__ sensor_dev_attr_temp3_min ; 
 TYPE_14__ sensor_dev_attr_temp4_max ; 
 TYPE_13__ sensor_dev_attr_temp4_min ; 
 TYPE_12__ sensor_dev_attr_temp5_max ; 
 TYPE_11__ sensor_dev_attr_temp5_min ; 

__attribute__((used)) static umode_t max1668_attribute_mode(struct kobject *kobj,
				     struct attribute *attr, int index)
{
	umode_t ret = S_IRUGO;
	if (read_only)
		return ret;
	if (attr == &sensor_dev_attr_temp1_max.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp2_max.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp3_max.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp4_max.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp5_max.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp1_min.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp2_min.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp3_min.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp4_min.dev_attr.attr ||
	    attr == &sensor_dev_attr_temp5_min.dev_attr.attr)
		ret |= S_IWUSR;
	return ret;
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
          int index = 255;
          int _len_kobj0 = 1;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct attribute * attr = (struct attribute *) malloc(_len_attr0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max1668_attribute_mode(kobj,attr,index);
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
