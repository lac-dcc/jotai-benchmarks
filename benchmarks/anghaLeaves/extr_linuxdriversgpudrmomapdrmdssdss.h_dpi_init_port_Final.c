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
struct platform_device {int dummy; } ;
struct dss_device {int dummy; } ;
struct device_node {int dummy; } ;
typedef  enum dss_model { ____Placeholder_dss_model } dss_model ;

/* Variables and functions */

__attribute__((used)) static inline int dpi_init_port(struct dss_device *dss,
				struct platform_device *pdev,
				struct device_node *port,
				enum dss_model dss_model)
{
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
          enum dss_model dss_model = 0;
          int _len_dss0 = 1;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
            dss[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdev0 = 1;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port0 = 1;
          struct device_node * port = (struct device_node *) malloc(_len_port0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dpi_init_port(dss,pdev,port,dss_model);
          printf("%d\n", benchRet); 
          free(dss);
          free(pdev);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
