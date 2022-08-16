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
typedef  scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ major; scalar_t__ minor; } ;
struct TYPE_4__ {TYPE_1__ ver; } ;
struct vdc_port {TYPE_2__ vio; } ;

/* Variables and functions */

__attribute__((used)) static inline int vdc_version_supported(struct vdc_port *port,
					u16 major, u16 minor)
{
	return port->vio.ver.major == major && port->vio.ver.minor >= minor;
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
          long major = 100;
          long minor = 100;
          int _len_port0 = 1;
          struct vdc_port * port = (struct vdc_port *) malloc(_len_port0*sizeof(struct vdc_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].vio.ver.major = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].vio.ver.minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vdc_version_supported(port,major,minor);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
