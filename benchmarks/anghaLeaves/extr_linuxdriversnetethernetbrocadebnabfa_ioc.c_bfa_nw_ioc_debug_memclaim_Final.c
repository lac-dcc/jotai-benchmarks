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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ auto_recover; } ;
struct bfa_ioc {TYPE_1__ iocpf; int /*<<< orphan*/  dbg_fwsave_len; void* dbg_fwsave; } ;

/* Variables and functions */
 int /*<<< orphan*/  BNA_DBG_FWTRC_LEN ; 

void
bfa_nw_ioc_debug_memclaim(struct bfa_ioc *ioc, void *dbg_fwsave)
{
	ioc->dbg_fwsave = dbg_fwsave;
	ioc->dbg_fwsave_len = ioc->iocpf.auto_recover ? BNA_DBG_FWTRC_LEN : 0;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_ioc0 = 65025;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              ioc[_i0].iocpf.auto_recover = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ioc[_i0].dbg_fwsave_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dbg_fwsave;
        
          bfa_nw_ioc_debug_memclaim(ioc,dbg_fwsave);
          free(ioc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_ioc0 = 100;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              ioc[_i0].iocpf.auto_recover = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ioc[_i0].dbg_fwsave_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dbg_fwsave;
        
          bfa_nw_ioc_debug_memclaim(ioc,dbg_fwsave);
          free(ioc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_ioc0 = 1;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              ioc[_i0].iocpf.auto_recover = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ioc[_i0].dbg_fwsave_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dbg_fwsave;
        
          bfa_nw_ioc_debug_memclaim(ioc,dbg_fwsave);
          free(ioc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
