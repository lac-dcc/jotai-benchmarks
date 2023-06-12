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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ef4_nic {TYPE_1__* net_dev; } ;
struct TYPE_2__ {scalar_t__ reg_state; } ;

/* Variables and functions */
 scalar_t__ NETREG_REGISTERED ; 

__attribute__((used)) static inline int ef4_dev_registered(struct ef4_nic *efx)
{
	return efx->net_dev->reg_state == NETREG_REGISTERED;
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
          int _len_efx0 = 65025;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__net_dev0 = 1;
          efx[_i0].net_dev = (struct TYPE_2__ *) malloc(_len_efx__i0__net_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__net_dev0; _j0++) {
              efx[_i0].net_dev->reg_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ef4_dev_registered(efx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].net_dev);
          }
          free(efx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_efx0 = 100;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__net_dev0 = 1;
          efx[_i0].net_dev = (struct TYPE_2__ *) malloc(_len_efx__i0__net_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__net_dev0; _j0++) {
              efx[_i0].net_dev->reg_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ef4_dev_registered(efx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].net_dev);
          }
          free(efx);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_efx0 = 1;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__net_dev0 = 1;
          efx[_i0].net_dev = (struct TYPE_2__ *) malloc(_len_efx__i0__net_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__net_dev0; _j0++) {
              efx[_i0].net_dev->reg_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = ef4_dev_registered(efx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].net_dev);
          }
          free(efx);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
