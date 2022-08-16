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
struct amd64_pvt {scalar_t__ ext_model; int dclr0; scalar_t__ dclr1; } ;

/* Variables and functions */
 scalar_t__ K8_REV_F ; 
 int REVE_WIDTH_128 ; 
 int WIDTH_128 ; 

__attribute__((used)) static int k8_early_channel_count(struct amd64_pvt *pvt)
{
	int flag;

	if (pvt->ext_model >= K8_REV_F)
		/* RevF (NPT) and later */
		flag = pvt->dclr0 & WIDTH_128;
	else
		/* RevE and earlier */
		flag = pvt->dclr0 & REVE_WIDTH_128;

	/* not used */
	pvt->dclr1 = 0;

	return (flag) ? 2 : 1;
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
          int _len_pvt0 = 1;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
            pvt[_i0].ext_model = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].dclr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].dclr1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = k8_early_channel_count(pvt);
          printf("%d\n", benchRet); 
          free(pvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
