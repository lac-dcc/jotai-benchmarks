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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  void* uint64_t ;
struct debug_reg {int /*<<< orphan*/  dbcr0; void* iac2; void* iac1; } ;

/* Variables and functions */
 int /*<<< orphan*/  DBCR0_IAC1 ; 
 int /*<<< orphan*/  DBCR0_IAC2 ; 
 int /*<<< orphan*/  DBCR0_IDM ; 
 int EINVAL ; 

__attribute__((used)) static int kvmppc_booke_add_breakpoint(struct debug_reg *dbg_reg,
				       uint64_t addr, int index)
{
	switch (index) {
	case 0:
		dbg_reg->dbcr0 |= DBCR0_IAC1;
		dbg_reg->iac1 = addr;
		break;
	case 1:
		dbg_reg->dbcr0 |= DBCR0_IAC2;
		dbg_reg->iac2 = addr;
		break;
#if CONFIG_PPC_ADV_DEBUG_IACS > 2
	case 2:
		dbg_reg->dbcr0 |= DBCR0_IAC3;
		dbg_reg->iac3 = addr;
		break;
	case 3:
		dbg_reg->dbcr0 |= DBCR0_IAC4;
		dbg_reg->iac4 = addr;
		break;
#endif
	default:
		return -EINVAL;
	}

	dbg_reg->dbcr0 |= DBCR0_IDM;
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
          int index = 100;
          int _len_dbg_reg0 = 1;
          struct debug_reg * dbg_reg = (struct debug_reg *) malloc(_len_dbg_reg0*sizeof(struct debug_reg));
          for(int _i0 = 0; _i0 < _len_dbg_reg0; _i0++) {
            dbg_reg[_i0].dbcr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * addr;
          int benchRet = kvmppc_booke_add_breakpoint(dbg_reg,addr,index);
          printf("%d\n", benchRet); 
          free(dbg_reg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_dbg_reg0 = 65025;
          struct debug_reg * dbg_reg = (struct debug_reg *) malloc(_len_dbg_reg0*sizeof(struct debug_reg));
          for(int _i0 = 0; _i0 < _len_dbg_reg0; _i0++) {
            dbg_reg[_i0].dbcr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * addr;
          int benchRet = kvmppc_booke_add_breakpoint(dbg_reg,addr,index);
          printf("%d\n", benchRet); 
          free(dbg_reg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_dbg_reg0 = 100;
          struct debug_reg * dbg_reg = (struct debug_reg *) malloc(_len_dbg_reg0*sizeof(struct debug_reg));
          for(int _i0 = 0; _i0 < _len_dbg_reg0; _i0++) {
            dbg_reg[_i0].dbcr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * addr;
          int benchRet = kvmppc_booke_add_breakpoint(dbg_reg,addr,index);
          printf("%d\n", benchRet); 
          free(dbg_reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
