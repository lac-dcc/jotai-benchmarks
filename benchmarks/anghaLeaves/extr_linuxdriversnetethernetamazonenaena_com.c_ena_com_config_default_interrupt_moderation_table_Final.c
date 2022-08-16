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
struct ena_intr_moder_entry {int /*<<< orphan*/  bytes_per_interval; int /*<<< orphan*/  pkts_per_interval; int /*<<< orphan*/  intr_moder_interval; } ;
struct ena_com_dev {struct ena_intr_moder_entry* intr_moder_tbl; } ;

/* Variables and functions */
 int /*<<< orphan*/  ENA_INTR_HIGHEST_BYTES ; 
 int /*<<< orphan*/  ENA_INTR_HIGHEST_PKTS ; 
 int /*<<< orphan*/  ENA_INTR_HIGHEST_USECS ; 
 int /*<<< orphan*/  ENA_INTR_HIGH_BYTES ; 
 int /*<<< orphan*/  ENA_INTR_HIGH_PKTS ; 
 int /*<<< orphan*/  ENA_INTR_HIGH_USECS ; 
 int /*<<< orphan*/  ENA_INTR_LOWEST_BYTES ; 
 int /*<<< orphan*/  ENA_INTR_LOWEST_PKTS ; 
 int /*<<< orphan*/  ENA_INTR_LOWEST_USECS ; 
 int /*<<< orphan*/  ENA_INTR_LOW_BYTES ; 
 int /*<<< orphan*/  ENA_INTR_LOW_PKTS ; 
 int /*<<< orphan*/  ENA_INTR_LOW_USECS ; 
 int /*<<< orphan*/  ENA_INTR_MID_BYTES ; 
 int /*<<< orphan*/  ENA_INTR_MID_PKTS ; 
 int /*<<< orphan*/  ENA_INTR_MID_USECS ; 
 size_t ENA_INTR_MODER_HIGH ; 
 size_t ENA_INTR_MODER_HIGHEST ; 
 size_t ENA_INTR_MODER_LOW ; 
 size_t ENA_INTR_MODER_LOWEST ; 
 size_t ENA_INTR_MODER_MID ; 

void ena_com_config_default_interrupt_moderation_table(struct ena_com_dev *ena_dev)
{
	struct ena_intr_moder_entry *intr_moder_tbl = ena_dev->intr_moder_tbl;

	if (!intr_moder_tbl)
		return;

	intr_moder_tbl[ENA_INTR_MODER_LOWEST].intr_moder_interval =
		ENA_INTR_LOWEST_USECS;
	intr_moder_tbl[ENA_INTR_MODER_LOWEST].pkts_per_interval =
		ENA_INTR_LOWEST_PKTS;
	intr_moder_tbl[ENA_INTR_MODER_LOWEST].bytes_per_interval =
		ENA_INTR_LOWEST_BYTES;

	intr_moder_tbl[ENA_INTR_MODER_LOW].intr_moder_interval =
		ENA_INTR_LOW_USECS;
	intr_moder_tbl[ENA_INTR_MODER_LOW].pkts_per_interval =
		ENA_INTR_LOW_PKTS;
	intr_moder_tbl[ENA_INTR_MODER_LOW].bytes_per_interval =
		ENA_INTR_LOW_BYTES;

	intr_moder_tbl[ENA_INTR_MODER_MID].intr_moder_interval =
		ENA_INTR_MID_USECS;
	intr_moder_tbl[ENA_INTR_MODER_MID].pkts_per_interval =
		ENA_INTR_MID_PKTS;
	intr_moder_tbl[ENA_INTR_MODER_MID].bytes_per_interval =
		ENA_INTR_MID_BYTES;

	intr_moder_tbl[ENA_INTR_MODER_HIGH].intr_moder_interval =
		ENA_INTR_HIGH_USECS;
	intr_moder_tbl[ENA_INTR_MODER_HIGH].pkts_per_interval =
		ENA_INTR_HIGH_PKTS;
	intr_moder_tbl[ENA_INTR_MODER_HIGH].bytes_per_interval =
		ENA_INTR_HIGH_BYTES;

	intr_moder_tbl[ENA_INTR_MODER_HIGHEST].intr_moder_interval =
		ENA_INTR_HIGHEST_USECS;
	intr_moder_tbl[ENA_INTR_MODER_HIGHEST].pkts_per_interval =
		ENA_INTR_HIGHEST_PKTS;
	intr_moder_tbl[ENA_INTR_MODER_HIGHEST].bytes_per_interval =
		ENA_INTR_HIGHEST_BYTES;
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
            ena_dev[_i0].intr_moder_tbl->bytes_per_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        ena_dev[_i0].intr_moder_tbl->pkts_per_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        ena_dev[_i0].intr_moder_tbl->intr_moder_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ena_com_config_default_interrupt_moderation_table(ena_dev);
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
