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
struct zfcp_qdio_req {scalar_t__ sbale_curr; } ;
struct zfcp_qdio {scalar_t__ max_sbale_per_sbal; } ;

/* Variables and functions */

__attribute__((used)) static inline
void zfcp_qdio_skip_to_last_sbale(struct zfcp_qdio *qdio,
				  struct zfcp_qdio_req *q_req)
{
	q_req->sbale_curr = qdio->max_sbale_per_sbal - 1;
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
          int _len_qdio0 = 1;
          struct zfcp_qdio * qdio = (struct zfcp_qdio *) malloc(_len_qdio0*sizeof(struct zfcp_qdio));
          for(int _i0 = 0; _i0 < _len_qdio0; _i0++) {
            qdio[_i0].max_sbale_per_sbal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q_req0 = 1;
          struct zfcp_qdio_req * q_req = (struct zfcp_qdio_req *) malloc(_len_q_req0*sizeof(struct zfcp_qdio_req));
          for(int _i0 = 0; _i0 < _len_q_req0; _i0++) {
            q_req[_i0].sbale_curr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zfcp_qdio_skip_to_last_sbale(qdio,q_req);
          free(qdio);
          free(q_req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
