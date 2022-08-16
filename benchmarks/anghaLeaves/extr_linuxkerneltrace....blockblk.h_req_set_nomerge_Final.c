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
struct request_queue {struct request* last_merge; } ;
struct request {int /*<<< orphan*/  cmd_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  REQ_NOMERGE ; 

__attribute__((used)) static inline void req_set_nomerge(struct request_queue *q, struct request *req)
{
	req->cmd_flags |= REQ_NOMERGE;
	if (req == q->last_merge)
		q->last_merge = NULL;
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
          int _len_q0 = 1;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__last_merge0 = 1;
          q[_i0].last_merge = (struct request *) malloc(_len_q__i0__last_merge0*sizeof(struct request));
          for(int _j0 = 0; _j0 < _len_q__i0__last_merge0; _j0++) {
            q[_i0].last_merge->cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_req0 = 1;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          req_set_nomerge(q,req);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].last_merge);
          }
          free(q);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
