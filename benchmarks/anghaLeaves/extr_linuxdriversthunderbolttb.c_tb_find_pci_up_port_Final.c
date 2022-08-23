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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int max_port_number; } ;
struct tb_switch {struct tb_port* ports; TYPE_1__ config; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct tb_port {TYPE_2__ config; } ;

/* Variables and functions */
 scalar_t__ TB_TYPE_PCIE_UP ; 

__attribute__((used)) static struct tb_port *tb_find_pci_up_port(struct tb_switch *sw)
{
	int i;
	for (i = 1; i <= sw->config.max_port_number; i++)
		if (sw->ports[i].config.type == TB_TYPE_PCIE_UP)
			return &sw->ports[i];
	return NULL;
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
          int _len_sw0 = 1;
          struct tb_switch * sw = (struct tb_switch *) malloc(_len_sw0*sizeof(struct tb_switch));
          for(int _i0 = 0; _i0 < _len_sw0; _i0++) {
              int _len_sw__i0__ports0 = 1;
          sw[_i0].ports = (struct tb_port *) malloc(_len_sw__i0__ports0*sizeof(struct tb_port));
          for(int _j0 = 0; _j0 < _len_sw__i0__ports0; _j0++) {
            sw[_i0].ports->config.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sw[_i0].config.max_port_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct tb_port * benchRet = tb_find_pci_up_port(sw);
          for(int _aux = 0; _aux < _len_sw0; _aux++) {
          free(sw[_aux].ports);
          }
          free(sw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}