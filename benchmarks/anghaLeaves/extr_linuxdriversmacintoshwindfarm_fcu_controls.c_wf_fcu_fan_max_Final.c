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

/* Type definitions */
struct wf_fcu_fan {int /*<<< orphan*/  max; } ;
struct wf_control {struct wf_fcu_fan* priv; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */

__attribute__((used)) static s32 wf_fcu_fan_max(struct wf_control *ct)
{
	struct wf_fcu_fan *fan = ct->priv;

	return fan->max;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ct0 = 65025;
          struct wf_control * ct = (struct wf_control *) malloc(_len_ct0*sizeof(struct wf_control));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
              int _len_ct__i0__priv0 = 1;
          ct[_i0].priv = (struct wf_fcu_fan *) malloc(_len_ct__i0__priv0*sizeof(struct wf_fcu_fan));
          for(int _j0 = 0; _j0 < _len_ct__i0__priv0; _j0++) {
              ct[_i0].priv->max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = wf_fcu_fan_max(ct);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ct0; _aux++) {
          free(ct[_aux].priv);
          }
          free(ct);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ct0 = 100;
          struct wf_control * ct = (struct wf_control *) malloc(_len_ct0*sizeof(struct wf_control));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
              int _len_ct__i0__priv0 = 1;
          ct[_i0].priv = (struct wf_fcu_fan *) malloc(_len_ct__i0__priv0*sizeof(struct wf_fcu_fan));
          for(int _j0 = 0; _j0 < _len_ct__i0__priv0; _j0++) {
              ct[_i0].priv->max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = wf_fcu_fan_max(ct);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ct0; _aux++) {
          free(ct[_aux].priv);
          }
          free(ct);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ct0 = 1;
          struct wf_control * ct = (struct wf_control *) malloc(_len_ct0*sizeof(struct wf_control));
          for(int _i0 = 0; _i0 < _len_ct0; _i0++) {
              int _len_ct__i0__priv0 = 1;
          ct[_i0].priv = (struct wf_fcu_fan *) malloc(_len_ct__i0__priv0*sizeof(struct wf_fcu_fan));
          for(int _j0 = 0; _j0 < _len_ct__i0__priv0; _j0++) {
              ct[_i0].priv->max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = wf_fcu_fan_max(ct);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ct0; _aux++) {
          free(ct[_aux].priv);
          }
          free(ct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
