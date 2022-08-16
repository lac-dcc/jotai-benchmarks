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

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct pa12203001_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int pa12203001_set_power_state(struct pa12203001_data *data, bool on,
				      u8 mask)
{
#ifdef CONFIG_PM
	int ret;

	if (on && (mask & PA12203001_ALS_EN_MASK)) {
		mutex_lock(&data->lock);
		if (data->px_enabled) {
			ret = pa12203001_als_enable(data,
						    PA12203001_ALS_EN_MASK);
			if (ret < 0)
				goto err;
		} else {
			data->als_needs_enable = true;
		}
		mutex_unlock(&data->lock);
	}

	if (on && (mask & PA12203001_PX_EN_MASK)) {
		mutex_lock(&data->lock);
		if (data->als_enabled) {
			ret = pa12203001_px_enable(data, PA12203001_PX_EN_MASK);
			if (ret < 0)
				goto err;
		} else {
			data->px_needs_enable = true;
		}
		mutex_unlock(&data->lock);
	}

	if (on) {
		ret = pm_runtime_get_sync(&data->client->dev);
		if (ret < 0)
			pm_runtime_put_noidle(&data->client->dev);

	} else {
		pm_runtime_mark_last_busy(&data->client->dev);
		ret = pm_runtime_put_autosuspend(&data->client->dev);
	}

	return ret;

err:
	mutex_unlock(&data->lock);
	return ret;

#endif
	return 0;
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
          int on = 100;
          int mask = 100;
          int _len_data0 = 1;
          struct pa12203001_data * data = (struct pa12203001_data *) malloc(_len_data0*sizeof(struct pa12203001_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pa12203001_set_power_state(data,on,mask);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int on = 10;
          int mask = 10;
          int _len_data0 = 100;
          struct pa12203001_data * data = (struct pa12203001_data *) malloc(_len_data0*sizeof(struct pa12203001_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pa12203001_set_power_state(data,on,mask);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
