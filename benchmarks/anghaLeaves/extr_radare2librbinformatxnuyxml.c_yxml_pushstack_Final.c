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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int stacklen; int stacksize; unsigned int* stack; } ;
typedef  TYPE_1__ yxml_t ;
typedef  int /*<<< orphan*/  yxml_ret_t ;

/* Variables and functions */
 int /*<<< orphan*/  YXML_ESTACK ; 
 int /*<<< orphan*/  YXML_OK ; 

__attribute__((used)) static yxml_ret_t yxml_pushstack(yxml_t *x, char **res, unsigned ch) {
	if(x->stacklen+2 >= x->stacksize)
		return YXML_ESTACK;
	x->stacklen++;
	*res = (char *)x->stack+x->stacklen;
	x->stack[x->stacklen] = ch;
	x->stacklen++;
	x->stack[x->stacklen] = 0;
	return YXML_OK;
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
          unsigned int ch = 100;
          int _len_x0 = 1;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].stacklen = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].stacksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_x__i0__stack0 = 1;
          x[_i0].stack = (unsigned int *) malloc(_len_x__i0__stack0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_x__i0__stack0; _j0++) {
            x[_i0].stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_res0 = 1;
          char ** res = (char **) malloc(_len_res0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            int _len_res1 = 1;
            res[_i0] = (char *) malloc(_len_res1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_res1; _i1++) {
              res[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = yxml_pushstack(x,res,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].stack);
          }
          free(x);
          for(int i1 = 0; i1 < _len_res0; i1++) {
            int _len_res1 = 1;
              free(res[i1]);
          }
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ch = 255;
          int _len_x0 = 65025;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].stacklen = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].stacksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_x__i0__stack0 = 1;
          x[_i0].stack = (unsigned int *) malloc(_len_x__i0__stack0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_x__i0__stack0; _j0++) {
            x[_i0].stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_res0 = 65025;
          char ** res = (char **) malloc(_len_res0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            int _len_res1 = 1;
            res[_i0] = (char *) malloc(_len_res1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_res1; _i1++) {
              res[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = yxml_pushstack(x,res,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].stack);
          }
          free(x);
          for(int i1 = 0; i1 < _len_res0; i1++) {
            int _len_res1 = 1;
              free(res[i1]);
          }
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ch = 10;
          int _len_x0 = 100;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].stacklen = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].stacksize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_x__i0__stack0 = 1;
          x[_i0].stack = (unsigned int *) malloc(_len_x__i0__stack0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_x__i0__stack0; _j0++) {
            x[_i0].stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_res0 = 100;
          char ** res = (char **) malloc(_len_res0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            int _len_res1 = 1;
            res[_i0] = (char *) malloc(_len_res1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_res1; _i1++) {
              res[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = yxml_pushstack(x,res,ch);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].stack);
          }
          free(x);
          for(int i1 = 0; i1 < _len_res0; i1++) {
            int _len_res1 = 1;
              free(res[i1]);
          }
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
