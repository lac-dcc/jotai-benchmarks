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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_2__ {int /*<<< orphan*/  data_ref; int /*<<< orphan*/  data_master; } ;
struct nfp_cpp_explicit {TYPE_1__ cmd; } ;

/* Variables and functions */

int nfp_cpp_explicit_set_data(struct nfp_cpp_explicit *expl,
			      u8 data_master, u16 data_ref)
{
	expl->cmd.data_master = data_master;
	expl->cmd.data_ref = data_ref;

	return 0;
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
          int data_master = 100;
          int data_ref = 100;
          int _len_expl0 = 1;
          struct nfp_cpp_explicit * expl = (struct nfp_cpp_explicit *) malloc(_len_expl0*sizeof(struct nfp_cpp_explicit));
          for(int _i0 = 0; _i0 < _len_expl0; _i0++) {
            expl[_i0].cmd.data_ref = ((-2 * (next_i()%2)) + 1) * next_i();
        expl[_i0].cmd.data_master = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_cpp_explicit_set_data(expl,data_master,data_ref);
          printf("%d\n", benchRet); 
          free(expl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
