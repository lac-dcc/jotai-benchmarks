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
       0            big-arr-10x\n\
       1            empty\n\
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
typedef  size_t u_int ;
struct input_param {scalar_t__ type; int num; } ;
struct input_ctx {size_t param_list_len; struct input_param* param_list; } ;

/* Variables and functions */
 scalar_t__ INPUT_MISSING ; 
 scalar_t__ INPUT_STRING ; 

__attribute__((used)) static int
input_get(struct input_ctx *ictx, u_int validx, int minval, int defval)
{
	struct input_param	*ip;
	int			 retval;

	if (validx >= ictx->param_list_len)
	    return (defval);
	ip = &ictx->param_list[validx];
	if (ip->type == INPUT_MISSING)
		return (defval);
	if (ip->type == INPUT_STRING)
		return (-1);
	retval = ip->num;
	if (retval < minval)
		return (minval);
	return (retval);
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned long validx = 10;
        
          int minval = 10;
        
          int defval = 10;
        
          int _len_ictx0 = 100;
          struct input_ctx * ictx = (struct input_ctx *) malloc(_len_ictx0*sizeof(struct input_ctx));
          for(int _i0 = 0; _i0 < _len_ictx0; _i0++) {
              ictx[_i0].param_list_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ictx__i0__param_list0 = 1;
          ictx[_i0].param_list = (struct input_param *) malloc(_len_ictx__i0__param_list0*sizeof(struct input_param));
          for(int _j0 = 0; _j0 < _len_ictx__i0__param_list0; _j0++) {
              ictx[_i0].param_list->type = ((-2 * (next_i()%2)) + 1) * next_i();
          ictx[_i0].param_list->num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = input_get(ictx,validx,minval,defval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ictx0; _aux++) {
          free(ictx[_aux].param_list);
          }
          free(ictx);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned long validx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int minval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int defval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ictx0 = 1;
          struct input_ctx * ictx = (struct input_ctx *) malloc(_len_ictx0*sizeof(struct input_ctx));
          for(int _i0 = 0; _i0 < _len_ictx0; _i0++) {
              ictx[_i0].param_list_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ictx__i0__param_list0 = 1;
          ictx[_i0].param_list = (struct input_param *) malloc(_len_ictx__i0__param_list0*sizeof(struct input_param));
          for(int _j0 = 0; _j0 < _len_ictx__i0__param_list0; _j0++) {
              ictx[_i0].param_list->type = ((-2 * (next_i()%2)) + 1) * next_i();
          ictx[_i0].param_list->num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = input_get(ictx,validx,minval,defval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ictx0; _aux++) {
          free(ictx[_aux].param_list);
          }
          free(ictx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
