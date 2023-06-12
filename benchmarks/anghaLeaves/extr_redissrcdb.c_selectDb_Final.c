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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * db; } ;
typedef  TYPE_1__ client ;
struct TYPE_5__ {int dbnum; int /*<<< orphan*/ * db; } ;

/* Variables and functions */
 int C_ERR ; 
 int C_OK ; 
 TYPE_2__ server ; 

int selectDb(client *c, int id) {
    if (id < 0 || id >= server.dbnum)
        return C_ERR;
    c->db = &server.db[id];
    return C_OK;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int id = 100;
        
          int _len_c0 = 1;
          struct TYPE_4__ * c = (struct TYPE_4__ *) malloc(_len_c0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__db0 = 1;
          c[_i0].db = (int *) malloc(_len_c__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__db0; _j0++) {
            c[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = selectDb(c,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].db);
          }
          free(c);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int id = 255;
        
          int _len_c0 = 65025;
          struct TYPE_4__ * c = (struct TYPE_4__ *) malloc(_len_c0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__db0 = 1;
          c[_i0].db = (int *) malloc(_len_c__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__db0; _j0++) {
            c[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = selectDb(c,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].db);
          }
          free(c);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int id = 10;
        
          int _len_c0 = 100;
          struct TYPE_4__ * c = (struct TYPE_4__ *) malloc(_len_c0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__db0 = 1;
          c[_i0].db = (int *) malloc(_len_c__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__db0; _j0++) {
            c[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = selectDb(c,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].db);
          }
          free(c);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_c0 = 1;
          struct TYPE_4__ * c = (struct TYPE_4__ *) malloc(_len_c0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__db0 = 1;
          c[_i0].db = (int *) malloc(_len_c__i0__db0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__db0; _j0++) {
            c[_i0].db[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = selectDb(c,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].db);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
