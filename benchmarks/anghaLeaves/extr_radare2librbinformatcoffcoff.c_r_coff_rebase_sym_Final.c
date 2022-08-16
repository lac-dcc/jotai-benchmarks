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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int f_nscns; } ;
struct r_bin_coff_obj {TYPE_2__* scn_hdrs; TYPE_1__ hdr; } ;
struct coff_symbol {int n_scnum; scalar_t__ n_value; } ;
struct TYPE_7__ {scalar_t__ paddr; } ;
struct TYPE_6__ {scalar_t__ s_scnptr; } ;
typedef  TYPE_3__ RBinAddr ;

/* Variables and functions */

__attribute__((used)) static int r_coff_rebase_sym(struct r_bin_coff_obj *obj, RBinAddr *addr, struct coff_symbol *sym) {
	if (sym->n_scnum < 1 || sym->n_scnum > obj->hdr.f_nscns) {
		return 0;
	}
	addr->paddr = obj->scn_hdrs[sym->n_scnum - 1].s_scnptr + sym->n_value;
	return 1;
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
          int _len_obj0 = 1;
          struct r_bin_coff_obj * obj = (struct r_bin_coff_obj *) malloc(_len_obj0*sizeof(struct r_bin_coff_obj));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__scn_hdrs0 = 1;
          obj[_i0].scn_hdrs = (struct TYPE_6__ *) malloc(_len_obj__i0__scn_hdrs0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_obj__i0__scn_hdrs0; _j0++) {
            obj[_i0].scn_hdrs->s_scnptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        obj[_i0].hdr.f_nscns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 1;
          struct TYPE_7__ * addr = (struct TYPE_7__ *) malloc(_len_addr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].paddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sym0 = 1;
          struct coff_symbol * sym = (struct coff_symbol *) malloc(_len_sym0*sizeof(struct coff_symbol));
          for(int _i0 = 0; _i0 < _len_sym0; _i0++) {
            sym[_i0].n_scnum = ((-2 * (next_i()%2)) + 1) * next_i();
        sym[_i0].n_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r_coff_rebase_sym(obj,addr,sym);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].scn_hdrs);
          }
          free(obj);
          free(addr);
          free(sym);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
