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
struct rpr0521_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int rpr0521_set_power_state(struct rpr0521_data *data, bool on,
				   u8 device_mask)
{
#ifdef CONFIG_PM
	int ret;

	if (device_mask & RPR0521_MODE_ALS_MASK) {
		data->als_ps_need_en = on;
		data->als_need_dis = !on;
	}

	if (device_mask & RPR0521_MODE_PXS_MASK) {
		data->pxs_ps_need_en = on;
		data->pxs_need_dis = !on;
	}

	/*
	 * On: _resume() is called only when we are suspended
	 * Off: _suspend() is called after delay if _resume() is not
	 * called before that.
	 * Note: If either measurement is re-enabled before _suspend(),
	 * both stay enabled until _suspend().
	 */
	if (on) {
		ret = pm_runtime_get_sync(&data->client->dev);
	} else {
		pm_runtime_mark_last_busy(&data->client->dev);
		ret = pm_runtime_put_autosuspend(&data->client->dev);
	}
	if (ret < 0) {
		dev_err(&data->client->dev,
			"Failed: rpr0521_set_power_state for %d, ret %d\n",
			on, ret);
		if (on)
			pm_runtime_put_noidle(&data->client->dev);

		return ret;
	}

	if (on) {
		/* If _resume() was not called, enable measurement now. */
		if (data->als_ps_need_en) {
			ret = rpr0521_als_enable(data, RPR0521_MODE_ALS_ENABLE);
			if (ret)
				return ret;
			data->als_ps_need_en = false;
		}

		if (data->pxs_ps_need_en) {
			ret = rpr0521_pxs_enable(data, RPR0521_MODE_PXS_ENABLE);
			if (ret)
				return ret;
			data->pxs_ps_need_en = false;
		}
	}
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
          int device_mask = 100;
          int _len_data0 = 1;
          struct rpr0521_data * data = (struct rpr0521_data *) malloc(_len_data0*sizeof(struct rpr0521_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rpr0521_set_power_state(data,on,device_mask);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int on = 10;
          int device_mask = 10;
          int _len_data0 = 100;
          struct rpr0521_data * data = (struct rpr0521_data *) malloc(_len_data0*sizeof(struct rpr0521_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rpr0521_set_power_state(data,on,device_mask);
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
