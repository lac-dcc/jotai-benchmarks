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
struct sdw_cdns_pdi {int assigned; } ;
struct sdw_cdns {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct sdw_cdns_pdi *cdns_find_pdi(struct sdw_cdns *cdns,
		unsigned int num, struct sdw_cdns_pdi *pdi)
{
	int i;

	for (i = 0; i < num; i++) {
		if (pdi[i].assigned == true)
			continue;
		pdi[i].assigned = true;
		return &pdi[i];
	}

	return NULL;
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
          unsigned int num = 100;
          int _len_cdns0 = 1;
          struct sdw_cdns * cdns = (struct sdw_cdns *) malloc(_len_cdns0*sizeof(struct sdw_cdns));
          for(int _i0 = 0; _i0 < _len_cdns0; _i0++) {
            cdns[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdi0 = 1;
          struct sdw_cdns_pdi * pdi = (struct sdw_cdns_pdi *) malloc(_len_pdi0*sizeof(struct sdw_cdns_pdi));
          for(int _i0 = 0; _i0 < _len_pdi0; _i0++) {
            pdi[_i0].assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sdw_cdns_pdi * benchRet = cdns_find_pdi(cdns,num,pdi);
          printf("%d\n", (*benchRet).assigned);
          free(cdns);
          free(pdi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
