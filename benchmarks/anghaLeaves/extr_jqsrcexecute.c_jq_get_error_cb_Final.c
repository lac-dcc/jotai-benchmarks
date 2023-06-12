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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* err_cb_data; int /*<<< orphan*/  err_cb; } ;
typedef  TYPE_1__ jq_state ;
typedef  int /*<<< orphan*/  jq_msg_cb ;

/* Variables and functions */

void jq_get_error_cb(jq_state *jq, jq_msg_cb *cb, void **data) {
  *cb = jq->err_cb;
  *data = jq->err_cb_data;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int _len_jq0 = 65025;
          struct TYPE_3__ * jq = (struct TYPE_3__ *) malloc(_len_jq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jq0; _i0++) {
              jq[_i0].err_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cb0 = 65025;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_data0 = 65025;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
        
          jq_get_error_cb(jq,cb,data);
          free(jq);
          free(cb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
              }
          free(data);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int _len_jq0 = 100;
          struct TYPE_3__ * jq = (struct TYPE_3__ *) malloc(_len_jq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jq0; _i0++) {
              jq[_i0].err_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cb0 = 100;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_data0 = 100;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
        
          jq_get_error_cb(jq,cb,data);
          free(jq);
          free(cb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
              }
          free(data);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int _len_jq0 = 1;
          struct TYPE_3__ * jq = (struct TYPE_3__ *) malloc(_len_jq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_jq0; _i0++) {
              jq[_i0].err_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cb0 = 1;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_data0 = 1;
          void ** data = (void **) malloc(_len_data0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
          }
        
          jq_get_error_cb(jq,cb,data);
          free(jq);
          free(cb);
          for(int i1 = 0; i1 < _len_data0; i1++) {
              }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
