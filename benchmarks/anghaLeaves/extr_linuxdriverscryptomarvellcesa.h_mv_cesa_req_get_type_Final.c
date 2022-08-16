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
       1            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ first; } ;
struct mv_cesa_req {TYPE_1__ chain; } ;
typedef  enum mv_cesa_req_type { ____Placeholder_mv_cesa_req_type } mv_cesa_req_type ;

/* Variables and functions */
 int CESA_DMA_REQ ; 
 int CESA_STD_REQ ; 

__attribute__((used)) static inline enum mv_cesa_req_type
mv_cesa_req_get_type(struct mv_cesa_req *req)
{
	return req->chain.first ? CESA_DMA_REQ : CESA_STD_REQ;
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
          int _len_req0 = 1;
          struct mv_cesa_req * req = (struct mv_cesa_req *) malloc(_len_req0*sizeof(struct mv_cesa_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].chain.first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mv_cesa_req_type benchRet = mv_cesa_req_get_type(req);
          free(req);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_req0 = 100;
          struct mv_cesa_req * req = (struct mv_cesa_req *) malloc(_len_req0*sizeof(struct mv_cesa_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].chain.first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mv_cesa_req_type benchRet = mv_cesa_req_get_type(req);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
