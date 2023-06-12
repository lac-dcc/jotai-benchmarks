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
       0            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
typedef  int /*<<< orphan*/  sqlite3 ;
struct TYPE_3__ {scalar_t__ szMalloc; int /*<<< orphan*/  flags; int /*<<< orphan*/ * db; } ;
typedef  TYPE_1__ Mem ;

/* Variables and functions */

__attribute__((used)) static void initMemArray(Mem *p, int N, sqlite3 *db, u16 flags){
  while( (N--)>0 ){
    p->db = db;
    p->flags = flags;
    p->szMalloc = 0;
#ifdef SQLITE_DEBUG
    p->pScopyFrom = 0;
#endif
    p++;
  }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int N = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].szMalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__db0 = 1;
          p[_i0].db = (int *) malloc(_len_p__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__db0; _j0++) {
            p[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_db0 = 1;
          int * db = (int *) malloc(_len_db0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          initMemArray(p,N,db,flags);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].db);
          }
          free(p);
          free(db);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
