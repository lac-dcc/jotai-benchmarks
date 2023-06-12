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
struct pci_dev {int dummy; } ;
struct aer_err_info {size_t error_dev_num; struct pci_dev** dev; } ;

/* Variables and functions */
 size_t AER_MAX_MULTI_ERR_DEVICES ; 
 int ENOSPC ; 

__attribute__((used)) static int add_error_device(struct aer_err_info *e_info, struct pci_dev *dev)
{
	if (e_info->error_dev_num < AER_MAX_MULTI_ERR_DEVICES) {
		e_info->dev[e_info->error_dev_num] = dev;
		e_info->error_dev_num++;
		return 0;
	}
	return -ENOSPC;
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
          int _len_e_info0 = 65025;
          struct aer_err_info * e_info = (struct aer_err_info *) malloc(_len_e_info0*sizeof(struct aer_err_info));
          for(int _i0 = 0; _i0 < _len_e_info0; _i0++) {
              e_info[_i0].error_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e_info__i0__dev0 = 1;
          e_info[_i0].dev = (struct pci_dev **) malloc(_len_e_info__i0__dev0*sizeof(struct pci_dev *));
          for(int _j0 = 0; _j0 < _len_e_info__i0__dev0; _j0++) {
            int _len_e_info__i0__dev1 = 1;
            e_info[_i0].dev[_j0] = (struct pci_dev *) malloc(_len_e_info__i0__dev1*sizeof(struct pci_dev));
            for(int _j1 = 0; _j1 < _len_e_info__i0__dev1; _j1++) {
                e_info[_i0].dev[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_dev0 = 65025;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_error_device(e_info,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_e_info0; _aux++) {
          free(*(e_info[_aux].dev));
        free(e_info[_aux].dev);
          }
          free(e_info);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_e_info0 = 100;
          struct aer_err_info * e_info = (struct aer_err_info *) malloc(_len_e_info0*sizeof(struct aer_err_info));
          for(int _i0 = 0; _i0 < _len_e_info0; _i0++) {
              e_info[_i0].error_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e_info__i0__dev0 = 1;
          e_info[_i0].dev = (struct pci_dev **) malloc(_len_e_info__i0__dev0*sizeof(struct pci_dev *));
          for(int _j0 = 0; _j0 < _len_e_info__i0__dev0; _j0++) {
            int _len_e_info__i0__dev1 = 1;
            e_info[_i0].dev[_j0] = (struct pci_dev *) malloc(_len_e_info__i0__dev1*sizeof(struct pci_dev));
            for(int _j1 = 0; _j1 < _len_e_info__i0__dev1; _j1++) {
                e_info[_i0].dev[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_dev0 = 100;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_error_device(e_info,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_e_info0; _aux++) {
          free(*(e_info[_aux].dev));
        free(e_info[_aux].dev);
          }
          free(e_info);
          free(dev);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_e_info0 = 1;
          struct aer_err_info * e_info = (struct aer_err_info *) malloc(_len_e_info0*sizeof(struct aer_err_info));
          for(int _i0 = 0; _i0 < _len_e_info0; _i0++) {
              e_info[_i0].error_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e_info__i0__dev0 = 1;
          e_info[_i0].dev = (struct pci_dev **) malloc(_len_e_info__i0__dev0*sizeof(struct pci_dev *));
          for(int _j0 = 0; _j0 < _len_e_info__i0__dev0; _j0++) {
            int _len_e_info__i0__dev1 = 1;
            e_info[_i0].dev[_j0] = (struct pci_dev *) malloc(_len_e_info__i0__dev1*sizeof(struct pci_dev));
            for(int _j1 = 0; _j1 < _len_e_info__i0__dev1; _j1++) {
                e_info[_i0].dev[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_error_device(e_info,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_e_info0; _aux++) {
          free(*(e_info[_aux].dev));
        free(e_info[_aux].dev);
          }
          free(e_info);
          free(dev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
