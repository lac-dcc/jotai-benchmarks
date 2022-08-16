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
typedef  int u8 ;
struct phy_dm_struct {int /*<<< orphan*/  adaptivity; int /*<<< orphan*/  dm_cfo_track; int /*<<< orphan*/  false_alm_cnt; } ;

/* Variables and functions */
#define  PHYDM_ADAPTIVITY 130 
#define  PHYDM_CFOTRACK 129 
#define  PHYDM_FALSEALMCNT 128 

void *phydm_get_structure(struct phy_dm_struct *dm, u8 structure_type)

{
	void *p_struct = NULL;

	switch (structure_type) {
	case PHYDM_FALSEALMCNT:
		p_struct = &dm->false_alm_cnt;
		break;

	case PHYDM_CFOTRACK:
		p_struct = &dm->dm_cfo_track;
		break;

	case PHYDM_ADAPTIVITY:
		p_struct = &dm->adaptivity;
		break;

	default:
		break;
	}

	return p_struct;
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
          int structure_type = 100;
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].adaptivity = ((-2 * (next_i()%2)) + 1) * next_i();
        dm[_i0].dm_cfo_track = ((-2 * (next_i()%2)) + 1) * next_i();
        dm[_i0].false_alm_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = phydm_get_structure(dm,structure_type);
          free(dm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
