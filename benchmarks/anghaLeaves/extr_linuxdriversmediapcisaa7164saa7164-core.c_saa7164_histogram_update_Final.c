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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct saa7164_histogram {TYPE_1__* counter1; } ;
struct TYPE_2__ {scalar_t__ val; int /*<<< orphan*/  update_time; int /*<<< orphan*/  count; } ;

/* Variables and functions */
 int /*<<< orphan*/  jiffies ; 

void saa7164_histogram_update(struct saa7164_histogram *hg, u32 val)
{
	int i;
	for (i = 0; i < 64; i++) {
		if (val <= hg->counter1[i].val) {
			hg->counter1[i].count++;
			hg->counter1[i].update_time = jiffies;
			break;
		}
	}
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
          long val = 100;
          int _len_hg0 = 1;
          struct saa7164_histogram * hg = (struct saa7164_histogram *) malloc(_len_hg0*sizeof(struct saa7164_histogram));
          for(int _i0 = 0; _i0 < _len_hg0; _i0++) {
              int _len_hg__i0__counter10 = 1;
          hg[_i0].counter1 = (struct TYPE_2__ *) malloc(_len_hg__i0__counter10*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hg__i0__counter10; _j0++) {
            hg[_i0].counter1->val = ((-2 * (next_i()%2)) + 1) * next_i();
        hg[_i0].counter1->update_time = ((-2 * (next_i()%2)) + 1) * next_i();
        hg[_i0].counter1->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          saa7164_histogram_update(hg,val);
          for(int _aux = 0; _aux < _len_hg0; _aux++) {
          free(hg[_aux].counter1);
          }
          free(hg);
        
        break;
    }
    // big-arr
    case 1:
    {
          long val = 255;
          int _len_hg0 = 65025;
          struct saa7164_histogram * hg = (struct saa7164_histogram *) malloc(_len_hg0*sizeof(struct saa7164_histogram));
          for(int _i0 = 0; _i0 < _len_hg0; _i0++) {
              int _len_hg__i0__counter10 = 1;
          hg[_i0].counter1 = (struct TYPE_2__ *) malloc(_len_hg__i0__counter10*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hg__i0__counter10; _j0++) {
            hg[_i0].counter1->val = ((-2 * (next_i()%2)) + 1) * next_i();
        hg[_i0].counter1->update_time = ((-2 * (next_i()%2)) + 1) * next_i();
        hg[_i0].counter1->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          saa7164_histogram_update(hg,val);
          for(int _aux = 0; _aux < _len_hg0; _aux++) {
          free(hg[_aux].counter1);
          }
          free(hg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long val = 10;
          int _len_hg0 = 100;
          struct saa7164_histogram * hg = (struct saa7164_histogram *) malloc(_len_hg0*sizeof(struct saa7164_histogram));
          for(int _i0 = 0; _i0 < _len_hg0; _i0++) {
              int _len_hg__i0__counter10 = 1;
          hg[_i0].counter1 = (struct TYPE_2__ *) malloc(_len_hg__i0__counter10*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hg__i0__counter10; _j0++) {
            hg[_i0].counter1->val = ((-2 * (next_i()%2)) + 1) * next_i();
        hg[_i0].counter1->update_time = ((-2 * (next_i()%2)) + 1) * next_i();
        hg[_i0].counter1->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          saa7164_histogram_update(hg,val);
          for(int _aux = 0; _aux < _len_hg0; _aux++) {
          free(hg[_aux].counter1);
          }
          free(hg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
