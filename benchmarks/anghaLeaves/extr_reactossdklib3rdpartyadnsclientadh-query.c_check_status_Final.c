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
typedef  int /*<<< orphan*/  statuspoints ;
typedef  scalar_t__ const adns_status ;

/* Variables and functions */
#define  adns_s_max_localfail 133 
#define  adns_s_max_misconfig 132 
#define  adns_s_max_misquery 131 
#define  adns_s_max_remotefail 130 
#define  adns_s_max_tempfail 129 
#define  adns_s_ok 128 
 int rcode ; 

__attribute__((used)) static void check_status(adns_status st) {
  static const adns_status statuspoints[]= {
    adns_s_ok,
    adns_s_max_localfail, adns_s_max_remotefail, adns_s_max_tempfail,
    adns_s_max_misconfig, adns_s_max_misquery
  };

  const adns_status *spp;
  int minrcode;

  for (minrcode=0, spp=statuspoints;
       spp < statuspoints + (sizeof(statuspoints)/sizeof(statuspoints[0]));
       spp++)
    if (st > *spp) minrcode++;
  if (rcode < minrcode) rcode= minrcode;
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
          const long st = 100;
          check_status(st);
        
        break;
    }
    // big-arr
    case 1:
    {
          const long st = 255;
          check_status(st);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long st = 10;
          check_status(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
