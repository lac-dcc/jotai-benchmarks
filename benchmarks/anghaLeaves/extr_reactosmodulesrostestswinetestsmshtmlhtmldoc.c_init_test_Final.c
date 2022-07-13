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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum load_state_t { ____Placeholder_load_state_t } load_state_t ;

/* Variables and functions */
 int /*<<< orphan*/  CallUIActivate_None ; 
 int /*<<< orphan*/  DocHostUIHandler ; 
 void* FALSE ; 
 int /*<<< orphan*/  call_UIActivate ; 
 void* complete ; 
 int /*<<< orphan*/  doc_hwnd ; 
 int /*<<< orphan*/ * doc_unk ; 
 void* editmode ; 
 int /*<<< orphan*/ * expect_uihandler_iface ; 
 void* inplace_deactivated ; 
 void* ipsex ; 
 int /*<<< orphan*/ * last_hwnd ; 
 void* load_from_stream ; 
 int load_state ; 
 int /*<<< orphan*/ * nav_url ; 
 scalar_t__ protocol_read ; 
 void* set_clientsite ; 
 scalar_t__ stream_read ; 
 void* testing_submit ; 

__attribute__((used)) static void init_test(enum load_state_t ls) {
    doc_unk = NULL;
    doc_hwnd = last_hwnd = NULL;
    set_clientsite = FALSE;
    load_from_stream = FALSE;
    call_UIActivate = CallUIActivate_None;
    load_state = ls;
    editmode = FALSE;
    stream_read = 0;
    protocol_read = 0;
    nav_url = NULL;
    ipsex = FALSE;
    inplace_deactivated = FALSE;
    complete = FALSE;
    testing_submit = FALSE;
    expect_uihandler_iface = &DocHostUIHandler;
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
          enum load_state_t ls = 0;
          init_test(ls);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum load_state_t ls = 0;
          init_test(ls);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum load_state_t ls = 0;
          init_test(ls);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
