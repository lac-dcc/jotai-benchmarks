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
struct pingpong {scalar_t__ nread_resp; scalar_t__ cache_size; scalar_t__ cache; int /*<<< orphan*/  sendleft; } ;

/* Variables and functions */
 int FALSE ; 
 int TRUE ; 

bool Curl_pp_moredata(struct pingpong *pp)
{
  return (!pp->sendleft && pp->cache && pp->nread_resp < pp->cache_size) ?
         TRUE : FALSE;
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
          int _len_pp0 = 1;
          struct pingpong * pp = (struct pingpong *) malloc(_len_pp0*sizeof(struct pingpong));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0].nread_resp = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
        pp[_i0].sendleft = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Curl_pp_moredata(pp);
          printf("%d\n", benchRet); 
          free(pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
