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
typedef  int u32 ;
struct crypto4xx_device {int sdr_head; int gdr_tail; int sdr_tail; } ;

/* Variables and functions */
 int ERING_WAS_FULL ; 
 int PPC4XX_NUM_SD ; 

__attribute__((used)) static u32 crypto4xx_get_n_sd(struct crypto4xx_device *dev, int n)
{
	u32 retval;
	u32 tmp;

	if (n >= PPC4XX_NUM_SD)
		return ERING_WAS_FULL;

	retval = dev->sdr_head;
	tmp = (dev->sdr_head + n) % PPC4XX_NUM_SD;
	if (dev->sdr_head > dev->gdr_tail) {
		if (tmp < dev->sdr_head && tmp >= dev->sdr_tail)
			return ERING_WAS_FULL;
	} else if (dev->sdr_head < dev->sdr_tail) {
		if (tmp < dev->sdr_head || tmp >= dev->sdr_tail)
			return ERING_WAS_FULL;
	} /* the head = tail, or empty case is already take cared */
	dev->sdr_head = tmp;

	return retval;
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
          int _len_dev0 = 1;
          struct crypto4xx_device * dev = (struct crypto4xx_device *) malloc(_len_dev0*sizeof(struct crypto4xx_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].sdr_head = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].gdr_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].sdr_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = crypto4xx_get_n_sd(dev,n);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
