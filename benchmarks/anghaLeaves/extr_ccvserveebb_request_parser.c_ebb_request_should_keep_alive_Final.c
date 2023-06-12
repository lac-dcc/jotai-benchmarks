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
struct TYPE_3__ {int keep_alive; int version_major; scalar_t__ version_minor; } ;
typedef  TYPE_1__ ebb_request ;

/* Variables and functions */
 int FALSE ; 
 int TRUE ; 

int ebb_request_should_keep_alive(ebb_request *request)
{
  if(request->keep_alive == -1)
    if(request->version_major == 1)
      return (request->version_minor != 0);
    else if(request->version_major == 0)
      return FALSE;
    else
      return TRUE;
  else
    return request->keep_alive;
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
          int _len_request0 = 65025;
          struct TYPE_3__ * request = (struct TYPE_3__ *) malloc(_len_request0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              request[_i0].keep_alive = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].version_major = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ebb_request_should_keep_alive(request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_request0 = 100;
          struct TYPE_3__ * request = (struct TYPE_3__ *) malloc(_len_request0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              request[_i0].keep_alive = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].version_major = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ebb_request_should_keep_alive(request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_request0 = 1;
          struct TYPE_3__ * request = (struct TYPE_3__ *) malloc(_len_request0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_request0; _i0++) {
              request[_i0].keep_alive = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].version_major = ((-2 * (next_i()%2)) + 1) * next_i();
          request[_i0].version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ebb_request_should_keep_alive(request);
          printf("%d\n", benchRet); 
          free(request);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
