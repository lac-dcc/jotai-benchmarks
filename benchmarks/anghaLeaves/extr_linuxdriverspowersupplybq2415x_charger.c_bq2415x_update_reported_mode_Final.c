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
struct bq2415x_device {int reported_mode; } ;
typedef  enum bq2415x_mode { ____Placeholder_bq2415x_mode } bq2415x_mode ;

/* Variables and functions */
 int BQ2415X_MODE_DEDICATED_CHARGER ; 
 int BQ2415X_MODE_HOST_CHARGER ; 
 int BQ2415X_MODE_NONE ; 
 int BQ2415X_MODE_OFF ; 

__attribute__((used)) static bool bq2415x_update_reported_mode(struct bq2415x_device *bq, int mA)
{
	enum bq2415x_mode mode;

	if (mA == 0)
		mode = BQ2415X_MODE_OFF;
	else if (mA < 500)
		mode = BQ2415X_MODE_NONE;
	else if (mA < 1800)
		mode = BQ2415X_MODE_HOST_CHARGER;
	else
		mode = BQ2415X_MODE_DEDICATED_CHARGER;

	if (bq->reported_mode == mode)
		return false;

	bq->reported_mode = mode;
	return true;
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
          int mA = 100;
          int _len_bq0 = 1;
          struct bq2415x_device * bq = (struct bq2415x_device *) malloc(_len_bq0*sizeof(struct bq2415x_device));
          for(int _i0 = 0; _i0 < _len_bq0; _i0++) {
            bq[_i0].reported_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq2415x_update_reported_mode(bq,mA);
          printf("%d\n", benchRet); 
          free(bq);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int mA = 10;
          int _len_bq0 = 100;
          struct bq2415x_device * bq = (struct bq2415x_device *) malloc(_len_bq0*sizeof(struct bq2415x_device));
          for(int _i0 = 0; _i0 < _len_bq0; _i0++) {
            bq[_i0].reported_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bq2415x_update_reported_mode(bq,mA);
          printf("%d\n", benchRet); 
          free(bq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
