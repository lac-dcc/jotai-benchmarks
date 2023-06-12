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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* z_streamp ;
struct TYPE_5__ {int status; } ;
typedef  TYPE_2__ deflate_state ;
struct TYPE_4__ {int /*<<< orphan*/ * state; } ;

/* Variables and functions */
 int BUSY_STATE ; 
 int FINISH_STATE ; 
 int INIT_STATE ; 
 int Z_DATA_ERROR ; 
 int Z_OK ; 
 int Z_STREAM_ERROR ; 

int zlib_deflateEnd(
	z_streamp strm
)
{
    int status;
    deflate_state *s;

    if (strm == NULL || strm->state == NULL) return Z_STREAM_ERROR;
    s = (deflate_state *) strm->state;

    status = s->status;
    if (status != INIT_STATE && status != BUSY_STATE &&
	status != FINISH_STATE) {
      return Z_STREAM_ERROR;
    }

    strm->state = NULL;

    return status == BUSY_STATE ? Z_DATA_ERROR : Z_OK;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int _len_strm0 = 65025;
          struct TYPE_4__ * strm = (struct TYPE_4__ *) malloc(_len_strm0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
              int _len_strm__i0__state0 = 1;
          strm[_i0].state = (int *) malloc(_len_strm__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__state0; _j0++) {
            strm[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = zlib_deflateEnd(strm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].state);
          }
          free(strm);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int _len_strm0 = 100;
          struct TYPE_4__ * strm = (struct TYPE_4__ *) malloc(_len_strm0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
              int _len_strm__i0__state0 = 1;
          strm[_i0].state = (int *) malloc(_len_strm__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__state0; _j0++) {
            strm[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = zlib_deflateEnd(strm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].state);
          }
          free(strm);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int _len_strm0 = 1;
          struct TYPE_4__ * strm = (struct TYPE_4__ *) malloc(_len_strm0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
              int _len_strm__i0__state0 = 1;
          strm[_i0].state = (int *) malloc(_len_strm__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__state0; _j0++) {
            strm[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = zlib_deflateEnd(strm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].state);
          }
          free(strm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
