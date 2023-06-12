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
typedef  int /*<<< orphan*/  gss_qop_t ;
typedef  int /*<<< orphan*/  gss_const_ctx_id_t ;
typedef  int /*<<< orphan*/  gss_buffer_t ;
typedef  int /*<<< orphan*/  OM_uint32 ;

/* Variables and functions */
 int /*<<< orphan*/  GSS_S_FAILURE ; 

OM_uint32 gss_wrap(OM_uint32 *min,
                   gss_const_ctx_id_t context_handle,
                   int conf_req_flag,
                   gss_qop_t qop_req,
                   const gss_buffer_t input_message_buffer,
                   int *conf_state,
                   gss_buffer_t output_message_buffer)
{
  (void)min;
  (void)context_handle;
  (void)conf_req_flag;
  (void)qop_req;
  (void)input_message_buffer;
  (void)conf_state;
  (void)output_message_buffer;
  return GSS_S_FAILURE;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int context_handle = 100;
        
          int conf_req_flag = 100;
        
          int qop_req = 100;
        
          const int input_message_buffer = 100;
        
          int output_message_buffer = 100;
        
          int _len_min0 = 1;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_conf_state0 = 1;
          int * conf_state = (int *) malloc(_len_conf_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf_state0; _i0++) {
            conf_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gss_wrap(min,context_handle,conf_req_flag,qop_req,input_message_buffer,conf_state,output_message_buffer);
          printf("%d\n", benchRet); 
          free(min);
          free(conf_state);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int context_handle = 255;
        
          int conf_req_flag = 255;
        
          int qop_req = 255;
        
          const int input_message_buffer = 255;
        
          int output_message_buffer = 255;
        
          int _len_min0 = 65025;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_conf_state0 = 65025;
          int * conf_state = (int *) malloc(_len_conf_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf_state0; _i0++) {
            conf_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gss_wrap(min,context_handle,conf_req_flag,qop_req,input_message_buffer,conf_state,output_message_buffer);
          printf("%d\n", benchRet); 
          free(min);
          free(conf_state);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int context_handle = 10;
        
          int conf_req_flag = 10;
        
          int qop_req = 10;
        
          const int input_message_buffer = 10;
        
          int output_message_buffer = 10;
        
          int _len_min0 = 100;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_conf_state0 = 100;
          int * conf_state = (int *) malloc(_len_conf_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf_state0; _i0++) {
            conf_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gss_wrap(min,context_handle,conf_req_flag,qop_req,input_message_buffer,conf_state,output_message_buffer);
          printf("%d\n", benchRet); 
          free(min);
          free(conf_state);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int context_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int conf_req_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int qop_req = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const int input_message_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int output_message_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_min0 = 1;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_conf_state0 = 1;
          int * conf_state = (int *) malloc(_len_conf_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf_state0; _i0++) {
            conf_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gss_wrap(min,context_handle,conf_req_flag,qop_req,input_message_buffer,conf_state,output_message_buffer);
          printf("%d\n", benchRet); 
          free(min);
          free(conf_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
