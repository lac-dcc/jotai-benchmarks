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
typedef  int /*<<< orphan*/  u8 ;
struct smp_ltk {int type; int /*<<< orphan*/  authenticated; } ;

/* Variables and functions */
 int /*<<< orphan*/  MGMT_LTK_AUTHENTICATED ; 
 int /*<<< orphan*/  MGMT_LTK_P256_AUTH ; 
 int /*<<< orphan*/  MGMT_LTK_P256_DEBUG ; 
 int /*<<< orphan*/  MGMT_LTK_P256_UNAUTH ; 
 int /*<<< orphan*/  MGMT_LTK_UNAUTHENTICATED ; 
#define  SMP_LTK 131 
#define  SMP_LTK_P256 130 
#define  SMP_LTK_P256_DEBUG 129 
#define  SMP_LTK_SLAVE 128 

__attribute__((used)) static u8 mgmt_ltk_type(struct smp_ltk *ltk)
{
	switch (ltk->type) {
	case SMP_LTK:
	case SMP_LTK_SLAVE:
		if (ltk->authenticated)
			return MGMT_LTK_AUTHENTICATED;
		return MGMT_LTK_UNAUTHENTICATED;
	case SMP_LTK_P256:
		if (ltk->authenticated)
			return MGMT_LTK_P256_AUTH;
		return MGMT_LTK_P256_UNAUTH;
	case SMP_LTK_P256_DEBUG:
		return MGMT_LTK_P256_DEBUG;
	}

	return MGMT_LTK_UNAUTHENTICATED;
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
          int _len_ltk0 = 1;
          struct smp_ltk * ltk = (struct smp_ltk *) malloc(_len_ltk0*sizeof(struct smp_ltk));
          for(int _i0 = 0; _i0 < _len_ltk0; _i0++) {
            ltk[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ltk[_i0].authenticated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mgmt_ltk_type(ltk);
          printf("%d\n", benchRet); 
          free(ltk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
