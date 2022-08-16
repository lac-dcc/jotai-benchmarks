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

/* Type definitions */
typedef  int /*<<< orphan*/  uv_write_t ;

/* Variables and functions */
 int UV_ECANCELED ; 
 int /*<<< orphan*/  write_callbacks ; 
 int /*<<< orphan*/  write_cancelled_callbacks ; 
 int /*<<< orphan*/  write_error_callbacks ; 

__attribute__((used)) static void write_cb(uv_write_t* req, int status) {
  if (status == 0)
    write_callbacks++;
  else if (status == UV_ECANCELED)
    write_cancelled_callbacks++;
  else
    write_error_callbacks++;
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
          int status = 100;
          int _len_req0 = 1;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          write_cb(req,status);
          free(req);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int status = 10;
          int _len_req0 = 100;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          write_cb(req,status);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
