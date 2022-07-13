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
       0            big-arr\n\
       1            big-arr-10x\n\
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

/* Type definitions */
typedef  int u8 ;
struct opa_vnic_vema_port {int dummy; } ;
struct opa_vnic_ctrl_port {int num_ports; } ;

/* Variables and functions */

__attribute__((used)) static struct opa_vnic_vema_port *
vema_get_port(struct opa_vnic_ctrl_port *cport, u8 port_num)
{
	struct opa_vnic_vema_port *port = (void *)cport + sizeof(*cport);

	if (port_num > cport->num_ports)
		return NULL;

	return port + (port_num - 1);
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

    // big-arr
    case 0:
    {
          int port_num = 255;
          int _len_cport0 = 65025;
          struct opa_vnic_ctrl_port * cport = (struct opa_vnic_ctrl_port *) malloc(_len_cport0*sizeof(struct opa_vnic_ctrl_port));
          for(int _i0 = 0; _i0 < _len_cport0; _i0++) {
            cport[_i0].num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct opa_vnic_vema_port * benchRet = vema_get_port(cport,port_num);
          printf("%d\n", (*benchRet).dummy);
          free(cport);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int port_num = 10;
          int _len_cport0 = 100;
          struct opa_vnic_ctrl_port * cport = (struct opa_vnic_ctrl_port *) malloc(_len_cport0*sizeof(struct opa_vnic_ctrl_port));
          for(int _i0 = 0; _i0 < _len_cport0; _i0++) {
            cport[_i0].num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct opa_vnic_vema_port * benchRet = vema_get_port(cport,port_num);
          printf("%d\n", (*benchRet).dummy);
          free(cport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
