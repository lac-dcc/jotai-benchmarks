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
       2            linked\n\
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
struct request_queue {int /*<<< orphan*/  mq_ops; } ;
struct request {scalar_t__ special; struct request_queue* q; } ;

/* Variables and functions */

__attribute__((used)) static bool req_no_special_merge(struct request *req)
{
	struct request_queue *q = req->q;

	return !q->mq_ops && req->special;
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

          int _len_req0 = 65025;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].special = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__q0 = 1;
          req[_i0].q = (struct request_queue *) malloc(_len_req__i0__q0*sizeof(struct request_queue));
          for(int _j0 = 0; _j0 < _len_req__i0__q0; _j0++) {
              req[_i0].q->mq_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = req_no_special_merge(req);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].q);
          }
          free(req);
        
        break;
    }


    // big-arr-10x
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

          int _len_req0 = 100;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].special = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__q0 = 1;
          req[_i0].q = (struct request_queue *) malloc(_len_req__i0__q0*sizeof(struct request_queue));
          for(int _j0 = 0; _j0 < _len_req__i0__q0; _j0++) {
              req[_i0].q->mq_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = req_no_special_merge(req);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].q);
          }
          free(req);
        
        break;
    }


    // linked
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

          int _len_req0 = 1;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].special = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__q0 = 1;
          req[_i0].q = (struct request_queue *) malloc(_len_req__i0__q0*sizeof(struct request_queue));
          for(int _j0 = 0; _j0 < _len_req__i0__q0; _j0++) {
              req[_i0].q->mq_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = req_no_special_merge(req);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].q);
          }
          free(req);
        
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

          int _len_req0 = 1;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              req[_i0].special = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__q0 = 1;
          req[_i0].q = (struct request_queue *) malloc(_len_req__i0__q0*sizeof(struct request_queue));
          for(int _j0 = 0; _j0 < _len_req__i0__q0; _j0++) {
              req[_i0].q->mq_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = req_no_special_merge(req);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].q);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
