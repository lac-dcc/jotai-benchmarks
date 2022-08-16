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
       1            big-arr-10x\n\
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
typedef  scalar_t__ uint16_t ;
struct bfa_ioim_s {scalar_t__ iotag; } ;
typedef  int /*<<< orphan*/  bfa_boolean_t ;

/* Variables and functions */
 int /*<<< orphan*/  BFA_FALSE ; 
 scalar_t__ BFA_IOIM_RETRY_MAX ; 
 scalar_t__ BFA_IOIM_RETRY_TAG_OFFSET ; 
 int /*<<< orphan*/  BFA_TRUE ; 

__attribute__((used)) static inline bfa_boolean_t
bfa_ioim_maxretry_reached(struct bfa_ioim_s *ioim)
{
	uint16_t k = ioim->iotag >> BFA_IOIM_RETRY_TAG_OFFSET;
	if (k < BFA_IOIM_RETRY_MAX)
		return BFA_FALSE;
	return BFA_TRUE;
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
          int _len_ioim0 = 1;
          struct bfa_ioim_s * ioim = (struct bfa_ioim_s *) malloc(_len_ioim0*sizeof(struct bfa_ioim_s));
          for(int _i0 = 0; _i0 < _len_ioim0; _i0++) {
            ioim[_i0].iotag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bfa_ioim_maxretry_reached(ioim);
          printf("%d\n", benchRet); 
          free(ioim);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ioim0 = 100;
          struct bfa_ioim_s * ioim = (struct bfa_ioim_s *) malloc(_len_ioim0*sizeof(struct bfa_ioim_s));
          for(int _i0 = 0; _i0 < _len_ioim0; _i0++) {
            ioim[_i0].iotag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bfa_ioim_maxretry_reached(ioim);
          printf("%d\n", benchRet); 
          free(ioim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
