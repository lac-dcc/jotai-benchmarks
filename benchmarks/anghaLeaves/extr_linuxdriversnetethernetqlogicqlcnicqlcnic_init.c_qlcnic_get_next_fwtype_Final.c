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
typedef  int u8 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int fw_type; } ;

/* Variables and functions */
 int QLCNIC_FLASH_ROMIMAGE ; 
#define  QLCNIC_UNIFIED_ROMIMAGE 129 
#define  QLCNIC_UNKNOWN_ROMIMAGE 128 

__attribute__((used)) static void
qlcnic_get_next_fwtype(struct qlcnic_adapter *adapter)
{
	u8 fw_type;

	switch (adapter->ahw->fw_type) {
	case QLCNIC_UNKNOWN_ROMIMAGE:
		fw_type = QLCNIC_UNIFIED_ROMIMAGE;
		break;

	case QLCNIC_UNIFIED_ROMIMAGE:
	default:
		fw_type = QLCNIC_FLASH_ROMIMAGE;
		break;
	}

	adapter->ahw->fw_type = fw_type;
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
          adapter[_i0].ahw = (struct TYPE_2__ *) malloc(_len_adapter__i0__ahw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ahw0; _j0++) {
            adapter[_i0].ahw->fw_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_get_next_fwtype(adapter);
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
