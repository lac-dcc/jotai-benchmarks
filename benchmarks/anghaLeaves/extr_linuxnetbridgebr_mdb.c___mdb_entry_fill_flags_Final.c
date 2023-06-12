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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct br_mdb_entry {unsigned char state; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  MDB_FLAGS_OFFLOAD ; 
 unsigned char MDB_PG_FLAGS_OFFLOAD ; 
 unsigned char MDB_PG_FLAGS_PERMANENT ; 

__attribute__((used)) static void __mdb_entry_fill_flags(struct br_mdb_entry *e, unsigned char flags)
{
	e->state = flags & MDB_PG_FLAGS_PERMANENT;
	e->flags = 0;
	if (flags & MDB_PG_FLAGS_OFFLOAD)
		e->flags |= MDB_FLAGS_OFFLOAD;
}

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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          unsigned char flags = 100;
        
          int _len_e0 = 1;
          struct br_mdb_entry * e = (struct br_mdb_entry *) malloc(_len_e0*sizeof(struct br_mdb_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __mdb_entry_fill_flags(e,flags);
          free(e);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          unsigned char flags = 255;
        
          int _len_e0 = 65025;
          struct br_mdb_entry * e = (struct br_mdb_entry *) malloc(_len_e0*sizeof(struct br_mdb_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __mdb_entry_fill_flags(e,flags);
          free(e);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          unsigned char flags = 10;
        
          int _len_e0 = 100;
          struct br_mdb_entry * e = (struct br_mdb_entry *) malloc(_len_e0*sizeof(struct br_mdb_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __mdb_entry_fill_flags(e,flags);
          free(e);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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

          unsigned char flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_e0 = 1;
          struct br_mdb_entry * e = (struct br_mdb_entry *) malloc(_len_e0*sizeof(struct br_mdb_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __mdb_entry_fill_flags(e,flags);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
