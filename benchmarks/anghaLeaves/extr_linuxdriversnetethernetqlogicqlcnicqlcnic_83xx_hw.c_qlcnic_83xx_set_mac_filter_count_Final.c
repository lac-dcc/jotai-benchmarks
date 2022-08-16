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
typedef  int u16 ;
struct qlcnic_hardware_context {int total_nic_func; int max_mc_count; int max_uc_count; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;

/* Variables and functions */
 int QLC_83XX_LB_MAX_FILTERS ; 
 int QLC_83XX_MAX_MC_COUNT ; 
 int QLC_83XX_MAX_UC_COUNT ; 

__attribute__((used)) static void qlcnic_83xx_set_mac_filter_count(struct qlcnic_adapter *adapter)
{
	struct qlcnic_hardware_context *ahw = adapter->ahw;
	u16 act_pci_fn = ahw->total_nic_func;
	u16 count;

	ahw->max_mc_count = QLC_83XX_MAX_MC_COUNT;
	if (act_pci_fn <= 2)
		count = (QLC_83XX_MAX_UC_COUNT - QLC_83XX_MAX_MC_COUNT) /
			 act_pci_fn;
	else
		count = (QLC_83XX_LB_MAX_FILTERS - QLC_83XX_MAX_MC_COUNT) /
			 act_pci_fn;
	ahw->max_uc_count = count;
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
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__ahw0 = 1;
          adapter[_i0].ahw = (struct qlcnic_hardware_context *) malloc(_len_adapter__i0__ahw0*sizeof(struct qlcnic_hardware_context));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ahw0; _j0++) {
            adapter[_i0].ahw->total_nic_func = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->max_mc_count = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->max_uc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_83xx_set_mac_filter_count(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].ahw);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
