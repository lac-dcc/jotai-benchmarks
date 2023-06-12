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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct pvc_device {struct net_device* main; struct net_device* ether; } ;
struct net_device {int dummy; } ;

/* Variables and functions */
 int ARPHRD_ETHER ; 

__attribute__((used)) static inline struct net_device **get_dev_p(struct pvc_device *pvc,
					    int type)
{
	if (type == ARPHRD_ETHER)
		return &pvc->ether;
	else
		return &pvc->main;
}

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
          int type = 100;
        
          int _len_pvc0 = 1;
          struct pvc_device * pvc = (struct pvc_device *) malloc(_len_pvc0*sizeof(struct pvc_device));
          for(int _i0 = 0; _i0 < _len_pvc0; _i0++) {
              int _len_pvc__i0__main0 = 1;
          pvc[_i0].main = (struct net_device *) malloc(_len_pvc__i0__main0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__main0; _j0++) {
              pvc[_i0].main->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_pvc__i0__ether0 = 1;
          pvc[_i0].ether = (struct net_device *) malloc(_len_pvc__i0__ether0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__ether0; _j0++) {
              pvc[_i0].ether->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct net_device ** benchRet = get_dev_p(pvc,type);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].main);
          }
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].ether);
          }
          free(pvc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
        
          int _len_pvc0 = 65025;
          struct pvc_device * pvc = (struct pvc_device *) malloc(_len_pvc0*sizeof(struct pvc_device));
          for(int _i0 = 0; _i0 < _len_pvc0; _i0++) {
              int _len_pvc__i0__main0 = 1;
          pvc[_i0].main = (struct net_device *) malloc(_len_pvc__i0__main0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__main0; _j0++) {
              pvc[_i0].main->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_pvc__i0__ether0 = 1;
          pvc[_i0].ether = (struct net_device *) malloc(_len_pvc__i0__ether0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__ether0; _j0++) {
              pvc[_i0].ether->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct net_device ** benchRet = get_dev_p(pvc,type);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].main);
          }
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].ether);
          }
          free(pvc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
        
          int _len_pvc0 = 100;
          struct pvc_device * pvc = (struct pvc_device *) malloc(_len_pvc0*sizeof(struct pvc_device));
          for(int _i0 = 0; _i0 < _len_pvc0; _i0++) {
              int _len_pvc__i0__main0 = 1;
          pvc[_i0].main = (struct net_device *) malloc(_len_pvc__i0__main0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__main0; _j0++) {
              pvc[_i0].main->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_pvc__i0__ether0 = 1;
          pvc[_i0].ether = (struct net_device *) malloc(_len_pvc__i0__ether0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__ether0; _j0++) {
              pvc[_i0].ether->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct net_device ** benchRet = get_dev_p(pvc,type);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].main);
          }
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].ether);
          }
          free(pvc);
        
        break;
    }
    // empty
    case 3:
    {
          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pvc0 = 1;
          struct pvc_device * pvc = (struct pvc_device *) malloc(_len_pvc0*sizeof(struct pvc_device));
          for(int _i0 = 0; _i0 < _len_pvc0; _i0++) {
              int _len_pvc__i0__main0 = 1;
          pvc[_i0].main = (struct net_device *) malloc(_len_pvc__i0__main0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__main0; _j0++) {
              pvc[_i0].main->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_pvc__i0__ether0 = 1;
          pvc[_i0].ether = (struct net_device *) malloc(_len_pvc__i0__ether0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_pvc__i0__ether0; _j0++) {
              pvc[_i0].ether->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct net_device ** benchRet = get_dev_p(pvc,type);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].main);
          }
          for(int _aux = 0; _aux < _len_pvc0; _aux++) {
          free(pvc[_aux].ether);
          }
          free(pvc);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
