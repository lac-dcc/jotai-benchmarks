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
struct ena_intr_moder_entry {unsigned int intr_moder_interval; } ;
struct ena_com_dev {struct ena_intr_moder_entry* intr_moder_tbl; } ;

/* Variables and functions */
 size_t ENA_INTR_MODER_LOWEST ; 

unsigned int ena_com_get_nonadaptive_moderation_interval_rx(struct ena_com_dev *ena_dev)
{
	struct ena_intr_moder_entry *intr_moder_tbl = ena_dev->intr_moder_tbl;

	if (intr_moder_tbl)
		return intr_moder_tbl[ENA_INTR_MODER_LOWEST].intr_moder_interval;

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
          int _len_ena_dev0 = 1;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              int _len_ena_dev__i0__intr_moder_tbl0 = 1;
          ena_dev[_i0].intr_moder_tbl = (struct ena_intr_moder_entry *) malloc(_len_ena_dev__i0__intr_moder_tbl0*sizeof(struct ena_intr_moder_entry));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__intr_moder_tbl0; _j0++) {
            ena_dev[_i0].intr_moder_tbl->intr_moder_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ena_com_get_nonadaptive_moderation_interval_rx(ena_dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ena_dev0; _aux++) {
          free(ena_dev[_aux].intr_moder_tbl);
          }
          free(ena_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
