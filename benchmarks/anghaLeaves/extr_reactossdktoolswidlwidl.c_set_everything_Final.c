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

/* Variables and functions */
 int do_client ; 
 int do_dlldata ; 
 int do_header ; 
 int do_idfile ; 
 int do_old_typelib ; 
 int do_proxies ; 
 int do_regscript ; 
 int do_server ; 
 int do_typelib ; 

__attribute__((used)) static void set_everything(int x)
{
  do_header = x;
  do_typelib = x;
  do_old_typelib = x;
  do_proxies = x;
  do_client = x;
  do_server = x;
  do_regscript = x;
  do_idfile = x;
  do_dlldata = x;
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
          int x = 100;
          set_everything(x);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          set_everything(x);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          set_everything(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
