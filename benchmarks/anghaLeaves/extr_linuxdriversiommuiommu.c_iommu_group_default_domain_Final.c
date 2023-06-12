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
struct iommu_group {struct iommu_domain* default_domain; } ;
struct iommu_domain {int dummy; } ;

/* Variables and functions */

struct iommu_domain *iommu_group_default_domain(struct iommu_group *group)
{
	return group->default_domain;
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
          int _len_group0 = 65025;
          struct iommu_group * group = (struct iommu_group *) malloc(_len_group0*sizeof(struct iommu_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__default_domain0 = 1;
          group[_i0].default_domain = (struct iommu_domain *) malloc(_len_group__i0__default_domain0*sizeof(struct iommu_domain));
          for(int _j0 = 0; _j0 < _len_group__i0__default_domain0; _j0++) {
              group[_i0].default_domain->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct iommu_domain * benchRet = iommu_group_default_domain(group);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].default_domain);
          }
          free(group);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_group0 = 100;
          struct iommu_group * group = (struct iommu_group *) malloc(_len_group0*sizeof(struct iommu_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__default_domain0 = 1;
          group[_i0].default_domain = (struct iommu_domain *) malloc(_len_group__i0__default_domain0*sizeof(struct iommu_domain));
          for(int _j0 = 0; _j0 < _len_group__i0__default_domain0; _j0++) {
              group[_i0].default_domain->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct iommu_domain * benchRet = iommu_group_default_domain(group);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].default_domain);
          }
          free(group);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_group0 = 1;
          struct iommu_group * group = (struct iommu_group *) malloc(_len_group0*sizeof(struct iommu_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__default_domain0 = 1;
          group[_i0].default_domain = (struct iommu_domain *) malloc(_len_group__i0__default_domain0*sizeof(struct iommu_domain));
          for(int _j0 = 0; _j0 < _len_group__i0__default_domain0; _j0++) {
              group[_i0].default_domain->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct iommu_domain * benchRet = iommu_group_default_domain(group);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].default_domain);
          }
          free(group);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
