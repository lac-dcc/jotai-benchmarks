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
struct ramoops_context {scalar_t__ pmsg_read_cnt; scalar_t__ ftrace_read_cnt; scalar_t__ console_read_cnt; scalar_t__ dump_read_cnt; } ;
struct pstore_info {struct ramoops_context* data; } ;

/* Variables and functions */

__attribute__((used)) static int ramoops_pstore_open(struct pstore_info *psi)
{
	struct ramoops_context *cxt = psi->data;

	cxt->dump_read_cnt = 0;
	cxt->console_read_cnt = 0;
	cxt->ftrace_read_cnt = 0;
	cxt->pmsg_read_cnt = 0;
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
          int _len_psi0 = 1;
          struct pstore_info * psi = (struct pstore_info *) malloc(_len_psi0*sizeof(struct pstore_info));
          for(int _i0 = 0; _i0 < _len_psi0; _i0++) {
              int _len_psi__i0__data0 = 1;
          psi[_i0].data = (struct ramoops_context *) malloc(_len_psi__i0__data0*sizeof(struct ramoops_context));
          for(int _j0 = 0; _j0 < _len_psi__i0__data0; _j0++) {
            psi[_i0].data->pmsg_read_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        psi[_i0].data->ftrace_read_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        psi[_i0].data->console_read_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        psi[_i0].data->dump_read_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ramoops_pstore_open(psi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_psi0; _aux++) {
          free(psi[_aux].data);
          }
          free(psi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
