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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct nfp_eth_table_port {scalar_t__ interface; scalar_t__ media; int /*<<< orphan*/  port_type; } ;
struct nfp_cpp {int dummy; } ;

/* Variables and functions */
 scalar_t__ NFP_INTERFACE_NONE ; 
 scalar_t__ NFP_MEDIA_FIBRE ; 
 int /*<<< orphan*/  PORT_DA ; 
 int /*<<< orphan*/  PORT_FIBRE ; 
 int /*<<< orphan*/  PORT_NONE ; 

__attribute__((used)) static void
nfp_eth_calc_port_type(struct nfp_cpp *cpp, struct nfp_eth_table_port *entry)
{
	if (entry->interface == NFP_INTERFACE_NONE) {
		entry->port_type = PORT_NONE;
		return;
	}

	if (entry->media == NFP_MEDIA_FIBRE)
		entry->port_type = PORT_FIBRE;
	else
		entry->port_type = PORT_DA;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_cpp0 = 65025;
          struct nfp_cpp * cpp = (struct nfp_cpp *) malloc(_len_cpp0*sizeof(struct nfp_cpp));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
              cpp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_entry0 = 65025;
          struct nfp_eth_table_port * entry = (struct nfp_eth_table_port *) malloc(_len_entry0*sizeof(struct nfp_eth_table_port));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].interface = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].port_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nfp_eth_calc_port_type(cpp,entry);
          free(cpp);
          free(entry);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_cpp0 = 100;
          struct nfp_cpp * cpp = (struct nfp_cpp *) malloc(_len_cpp0*sizeof(struct nfp_cpp));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
              cpp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_entry0 = 100;
          struct nfp_eth_table_port * entry = (struct nfp_eth_table_port *) malloc(_len_entry0*sizeof(struct nfp_eth_table_port));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].interface = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].port_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nfp_eth_calc_port_type(cpp,entry);
          free(cpp);
          free(entry);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_cpp0 = 1;
          struct nfp_cpp * cpp = (struct nfp_cpp *) malloc(_len_cpp0*sizeof(struct nfp_cpp));
          for(int _i0 = 0; _i0 < _len_cpp0; _i0++) {
              cpp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_entry0 = 1;
          struct nfp_eth_table_port * entry = (struct nfp_eth_table_port *) malloc(_len_entry0*sizeof(struct nfp_eth_table_port));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
              entry[_i0].interface = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].media = ((-2 * (next_i()%2)) + 1) * next_i();
          entry[_i0].port_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nfp_eth_calc_port_type(cpp,entry);
          free(cpp);
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
