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
struct imx_i2c_struct {unsigned int cur_clk; unsigned int bitrate; unsigned int disable_delay; int /*<<< orphan*/  ifdr; TYPE_1__* hwdata; } ;
struct imx_i2c_clk_pair {unsigned int div; int /*<<< orphan*/  val; } ;
struct TYPE_2__ {int ndivs; struct imx_i2c_clk_pair* clk_div; } ;

/* Variables and functions */

__attribute__((used)) static void i2c_imx_set_clk(struct imx_i2c_struct *i2c_imx,
			    unsigned int i2c_clk_rate)
{
	struct imx_i2c_clk_pair *i2c_clk_div = i2c_imx->hwdata->clk_div;
	unsigned int div;
	int i;

	/* Divider value calculation */
	if (i2c_imx->cur_clk == i2c_clk_rate)
		return;

	i2c_imx->cur_clk = i2c_clk_rate;

	div = (i2c_clk_rate + i2c_imx->bitrate - 1) / i2c_imx->bitrate;
	if (div < i2c_clk_div[0].div)
		i = 0;
	else if (div > i2c_clk_div[i2c_imx->hwdata->ndivs - 1].div)
		i = i2c_imx->hwdata->ndivs - 1;
	else
		for (i = 0; i2c_clk_div[i].div < div; i++)
			;

	/* Store divider value */
	i2c_imx->ifdr = i2c_clk_div[i].val;

	/*
	 * There dummy delay is calculated.
	 * It should be about one I2C clock period long.
	 * This delay is used in I2C bus disable function
	 * to fix chip hardware bug.
	 */
	i2c_imx->disable_delay = (500000U * i2c_clk_div[i].div
		+ (i2c_clk_rate / 2) - 1) / (i2c_clk_rate / 2);

#ifdef CONFIG_I2C_DEBUG_BUS
	dev_dbg(&i2c_imx->adapter.dev, "I2C_CLK=%d, REQ DIV=%d\n",
		i2c_clk_rate, div);
	dev_dbg(&i2c_imx->adapter.dev, "IFDR[IC]=0x%x, REAL DIV=%d\n",
		i2c_clk_div[i].val, i2c_clk_div[i].div);
#endif
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
          unsigned int i2c_clk_rate = 100;
          int _len_i2c_imx0 = 1;
          struct imx_i2c_struct * i2c_imx = (struct imx_i2c_struct *) malloc(_len_i2c_imx0*sizeof(struct imx_i2c_struct));
          for(int _i0 = 0; _i0 < _len_i2c_imx0; _i0++) {
            i2c_imx[_i0].cur_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_imx[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_imx[_i0].disable_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_imx[_i0].ifdr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2c_imx__i0__hwdata0 = 1;
          i2c_imx[_i0].hwdata = (struct TYPE_2__ *) malloc(_len_i2c_imx__i0__hwdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_i2c_imx__i0__hwdata0; _j0++) {
            i2c_imx[_i0].hwdata->ndivs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2c_imx__i0__hwdata_clk_div0 = 1;
          i2c_imx[_i0].hwdata->clk_div = (struct imx_i2c_clk_pair *) malloc(_len_i2c_imx__i0__hwdata_clk_div0*sizeof(struct imx_i2c_clk_pair));
          for(int _j0 = 0; _j0 < _len_i2c_imx__i0__hwdata_clk_div0; _j0++) {
            i2c_imx[_i0].hwdata->clk_div->div = ((-2 * (next_i()%2)) + 1) * next_i();
        i2c_imx[_i0].hwdata->clk_div->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          i2c_imx_set_clk(i2c_imx,i2c_clk_rate);
          for(int _aux = 0; _aux < _len_i2c_imx0; _aux++) {
          free(i2c_imx[_aux].hwdata);
          }
          free(i2c_imx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
