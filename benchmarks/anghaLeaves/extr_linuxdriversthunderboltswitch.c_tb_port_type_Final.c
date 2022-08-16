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
struct tb_regs_port_header {int type; } ;

/* Variables and functions */

__attribute__((used)) static const char *tb_port_type(struct tb_regs_port_header *port)
{
	switch (port->type >> 16) {
	case 0:
		switch ((u8) port->type) {
		case 0:
			return "Inactive";
		case 1:
			return "Port";
		case 2:
			return "NHI";
		default:
			return "unknown";
		}
	case 0x2:
		return "Ethernet";
	case 0x8:
		return "SATA";
	case 0xe:
		return "DP/HDMI";
	case 0x10:
		return "PCIe";
	case 0x20:
		return "USB";
	default:
		return "unknown";
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
          int _len_port0 = 1;
          struct tb_regs_port_header * port = (struct tb_regs_port_header *) malloc(_len_port0*sizeof(struct tb_regs_port_header));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = tb_port_type(port);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(port);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_port0 = 100;
          struct tb_regs_port_header * port = (struct tb_regs_port_header *) malloc(_len_port0*sizeof(struct tb_regs_port_header));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = tb_port_type(port);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
