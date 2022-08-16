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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct sensor_data {scalar_t__ opal_index; scalar_t__ type; int /*<<< orphan*/  hwmon_index; } ;
struct TYPE_2__ {int /*<<< orphan*/  hwmon_index; } ;

/* Variables and functions */
 scalar_t__ INVALID_INDEX ; 
 TYPE_1__* sensor_groups ; 

__attribute__((used)) static u32 get_sensor_hwmon_index(struct sensor_data *sdata,
				  struct sensor_data *sdata_table, int count)
{
	int i;

	/*
	 * We don't use the OPAL index on newer device trees
	 */
	if (sdata->opal_index != INVALID_INDEX) {
		for (i = 0; i < count; i++)
			if (sdata_table[i].opal_index == sdata->opal_index &&
			    sdata_table[i].type == sdata->type)
				return sdata_table[i].hwmon_index;
	}
	return ++sensor_groups[sdata->type].hwmon_index;
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
          int count = 100;
          int _len_sdata0 = 1;
          struct sensor_data * sdata = (struct sensor_data *) malloc(_len_sdata0*sizeof(struct sensor_data));
          for(int _i0 = 0; _i0 < _len_sdata0; _i0++) {
            sdata[_i0].opal_index = ((-2 * (next_i()%2)) + 1) * next_i();
        sdata[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        sdata[_i0].hwmon_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sdata_table0 = 1;
          struct sensor_data * sdata_table = (struct sensor_data *) malloc(_len_sdata_table0*sizeof(struct sensor_data));
          for(int _i0 = 0; _i0 < _len_sdata_table0; _i0++) {
            sdata_table[_i0].opal_index = ((-2 * (next_i()%2)) + 1) * next_i();
        sdata_table[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        sdata_table[_i0].hwmon_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_sensor_hwmon_index(sdata,sdata_table,count);
          printf("%d\n", benchRet); 
          free(sdata);
          free(sdata_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
