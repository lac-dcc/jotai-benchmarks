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
typedef  int u16 ;
struct arm_smmu_smr {int mask; int id; int /*<<< orphan*/  valid; } ;
struct arm_smmu_device {int num_mapping_groups; struct arm_smmu_smr* smrs; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENOSPC ; 

__attribute__((used)) static int arm_smmu_find_sme(struct arm_smmu_device *smmu, u16 id, u16 mask)
{
	struct arm_smmu_smr *smrs = smmu->smrs;
	int i, free_idx = -ENOSPC;

	/* Stream indexing is blissfully easy */
	if (!smrs)
		return id;

	/* Validating SMRs is... less so */
	for (i = 0; i < smmu->num_mapping_groups; ++i) {
		if (!smrs[i].valid) {
			/*
			 * Note the first free entry we come across, which
			 * we'll claim in the end if nothing else matches.
			 */
			if (free_idx < 0)
				free_idx = i;
			continue;
		}
		/*
		 * If the new entry is _entirely_ matched by an existing entry,
		 * then reuse that, with the guarantee that there also cannot
		 * be any subsequent conflicting entries. In normal use we'd
		 * expect simply identical entries for this case, but there's
		 * no harm in accommodating the generalisation.
		 */
		if ((mask & smrs[i].mask) == mask &&
		    !((id ^ smrs[i].id) & ~smrs[i].mask))
			return i;
		/*
		 * If the new entry has any other overlap with an existing one,
		 * though, then there always exists at least one stream ID
		 * which would cause a conflict, and we can't allow that risk.
		 */
		if (!((id ^ smrs[i].id) & ~(smrs[i].mask | mask)))
			return -EINVAL;
	}

	return free_idx;
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
          int id = 100;
        
          int mask = 100;
        
          int _len_smmu0 = 1;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
              smmu[_i0].num_mapping_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__smrs0 = 1;
          smmu[_i0].smrs = (struct arm_smmu_smr *) malloc(_len_smmu__i0__smrs0*sizeof(struct arm_smmu_smr));
          for(int _j0 = 0; _j0 < _len_smmu__i0__smrs0; _j0++) {
              smmu[_i0].smrs->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->id = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = arm_smmu_find_sme(smmu,id,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smmu0; _aux++) {
          free(smmu[_aux].smrs);
          }
          free(smmu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
        
          int mask = 255;
        
          int _len_smmu0 = 65025;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
              smmu[_i0].num_mapping_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__smrs0 = 1;
          smmu[_i0].smrs = (struct arm_smmu_smr *) malloc(_len_smmu__i0__smrs0*sizeof(struct arm_smmu_smr));
          for(int _j0 = 0; _j0 < _len_smmu__i0__smrs0; _j0++) {
              smmu[_i0].smrs->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->id = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = arm_smmu_find_sme(smmu,id,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smmu0; _aux++) {
          free(smmu[_aux].smrs);
          }
          free(smmu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
        
          int mask = 10;
        
          int _len_smmu0 = 100;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
              smmu[_i0].num_mapping_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__smrs0 = 1;
          smmu[_i0].smrs = (struct arm_smmu_smr *) malloc(_len_smmu__i0__smrs0*sizeof(struct arm_smmu_smr));
          for(int _j0 = 0; _j0 < _len_smmu__i0__smrs0; _j0++) {
              smmu[_i0].smrs->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->id = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = arm_smmu_find_sme(smmu,id,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smmu0; _aux++) {
          free(smmu[_aux].smrs);
          }
          free(smmu);
        
        break;
    }
    // empty
    case 3:
    {
          int id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_smmu0 = 1;
          struct arm_smmu_device * smmu = (struct arm_smmu_device *) malloc(_len_smmu0*sizeof(struct arm_smmu_device));
          for(int _i0 = 0; _i0 < _len_smmu0; _i0++) {
              smmu[_i0].num_mapping_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smmu__i0__smrs0 = 1;
          smmu[_i0].smrs = (struct arm_smmu_smr *) malloc(_len_smmu__i0__smrs0*sizeof(struct arm_smmu_smr));
          for(int _j0 = 0; _j0 < _len_smmu__i0__smrs0; _j0++) {
              smmu[_i0].smrs->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->id = ((-2 * (next_i()%2)) + 1) * next_i();
          smmu[_i0].smrs->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = arm_smmu_find_sme(smmu,id,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_smmu0; _aux++) {
          free(smmu[_aux].smrs);
          }
          free(smmu);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
