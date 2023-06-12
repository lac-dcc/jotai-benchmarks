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
struct req_que {scalar_t__ ring_index; scalar_t__ length; scalar_t__ ring_ptr; scalar_t__ ring; } ;
typedef  void cont_entry_t ;

/* Variables and functions */

__attribute__((used)) static inline void *qlt_get_req_pkt(struct req_que *req)
{
	/* Adjust ring index. */
	req->ring_index++;
	if (req->ring_index == req->length) {
		req->ring_index = 0;
		req->ring_ptr = req->ring;
	} else {
		req->ring_ptr++;
	}
	return (cont_entry_t *)req->ring_ptr;
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_req0 = 65025;
          struct req_que * req = (struct req_que *) malloc(_len_req0*sizeof(struct req_que));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].ring_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = qlt_get_req_pkt(req);
          free(req);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_req0 = 100;
          struct req_que * req = (struct req_que *) malloc(_len_req0*sizeof(struct req_que));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].ring_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = qlt_get_req_pkt(req);
          free(req);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_req0 = 1;
          struct req_que * req = (struct req_que *) malloc(_len_req0*sizeof(struct req_que));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].ring_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          req[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * benchRet = qlt_get_req_pkt(req);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
