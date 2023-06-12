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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ state; int /*<<< orphan*/  cleanup_nonce; int /*<<< orphan*/  get_nonce; int /*<<< orphan*/  cleanup_entropy; int /*<<< orphan*/  get_entropy; int /*<<< orphan*/ * parent; } ;
typedef  int /*<<< orphan*/  RAND_DRBG_get_nonce_fn ;
typedef  int /*<<< orphan*/  RAND_DRBG_get_entropy_fn ;
typedef  int /*<<< orphan*/  RAND_DRBG_cleanup_nonce_fn ;
typedef  int /*<<< orphan*/  RAND_DRBG_cleanup_entropy_fn ;
typedef  TYPE_1__ RAND_DRBG ;

/* Variables and functions */
 scalar_t__ DRBG_UNINITIALISED ; 

int RAND_DRBG_set_callbacks(RAND_DRBG *drbg,
                            RAND_DRBG_get_entropy_fn get_entropy,
                            RAND_DRBG_cleanup_entropy_fn cleanup_entropy,
                            RAND_DRBG_get_nonce_fn get_nonce,
                            RAND_DRBG_cleanup_nonce_fn cleanup_nonce)
{
    if (drbg->state != DRBG_UNINITIALISED
            || drbg->parent != NULL)
        return 0;
    drbg->get_entropy = get_entropy;
    drbg->cleanup_entropy = cleanup_entropy;
    drbg->get_nonce = get_nonce;
    drbg->cleanup_nonce = cleanup_nonce;
    return 1;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int get_entropy = 100;
        
          int cleanup_entropy = 100;
        
          int get_nonce = 100;
        
          int cleanup_nonce = 100;
        
          int _len_drbg0 = 1;
          struct TYPE_3__ * drbg = (struct TYPE_3__ *) malloc(_len_drbg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drbg0; _i0++) {
              drbg[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drbg__i0__parent0 = 1;
          drbg[_i0].parent = (int *) malloc(_len_drbg__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drbg__i0__parent0; _j0++) {
            drbg[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = RAND_DRBG_set_callbacks(drbg,get_entropy,cleanup_entropy,get_nonce,cleanup_nonce);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drbg0; _aux++) {
          free(drbg[_aux].parent);
          }
          free(drbg);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int get_entropy = 255;
        
          int cleanup_entropy = 255;
        
          int get_nonce = 255;
        
          int cleanup_nonce = 255;
        
          int _len_drbg0 = 65025;
          struct TYPE_3__ * drbg = (struct TYPE_3__ *) malloc(_len_drbg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drbg0; _i0++) {
              drbg[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drbg__i0__parent0 = 1;
          drbg[_i0].parent = (int *) malloc(_len_drbg__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drbg__i0__parent0; _j0++) {
            drbg[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = RAND_DRBG_set_callbacks(drbg,get_entropy,cleanup_entropy,get_nonce,cleanup_nonce);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drbg0; _aux++) {
          free(drbg[_aux].parent);
          }
          free(drbg);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int get_entropy = 10;
        
          int cleanup_entropy = 10;
        
          int get_nonce = 10;
        
          int cleanup_nonce = 10;
        
          int _len_drbg0 = 100;
          struct TYPE_3__ * drbg = (struct TYPE_3__ *) malloc(_len_drbg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drbg0; _i0++) {
              drbg[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drbg__i0__parent0 = 1;
          drbg[_i0].parent = (int *) malloc(_len_drbg__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drbg__i0__parent0; _j0++) {
            drbg[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = RAND_DRBG_set_callbacks(drbg,get_entropy,cleanup_entropy,get_nonce,cleanup_nonce);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drbg0; _aux++) {
          free(drbg[_aux].parent);
          }
          free(drbg);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int get_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int cleanup_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int get_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int cleanup_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_drbg0 = 1;
          struct TYPE_3__ * drbg = (struct TYPE_3__ *) malloc(_len_drbg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drbg0; _i0++) {
              drbg[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_nonce = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].cleanup_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          drbg[_i0].get_entropy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drbg__i0__parent0 = 1;
          drbg[_i0].parent = (int *) malloc(_len_drbg__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drbg__i0__parent0; _j0++) {
            drbg[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = RAND_DRBG_set_callbacks(drbg,get_entropy,cleanup_entropy,get_nonce,cleanup_nonce);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drbg0; _aux++) {
          free(drbg[_aux].parent);
          }
          free(drbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
