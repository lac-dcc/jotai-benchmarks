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
       0            big-arr\n\
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
struct ib_mad_hdr {int /*<<< orphan*/  tid; int /*<<< orphan*/  attr_id; int /*<<< orphan*/  method; int /*<<< orphan*/  class_version; int /*<<< orphan*/  mgmt_class; int /*<<< orphan*/  base_version; } ;
typedef  int /*<<< orphan*/  __be64 ;
typedef  int /*<<< orphan*/  __be16 ;

/* Variables and functions */
 int /*<<< orphan*/  IB_CM_CLASS_VERSION ; 
 int /*<<< orphan*/  IB_MGMT_BASE_VERSION ; 
 int /*<<< orphan*/  IB_MGMT_CLASS_CM ; 
 int /*<<< orphan*/  IB_MGMT_METHOD_SEND ; 

__attribute__((used)) static void cm_format_mad_hdr(struct ib_mad_hdr *hdr,
			      __be16 attr_id, __be64 tid)
{
	hdr->base_version  = IB_MGMT_BASE_VERSION;
	hdr->mgmt_class	   = IB_MGMT_CLASS_CM;
	hdr->class_version = IB_CM_CLASS_VERSION;
	hdr->method	   = IB_MGMT_METHOD_SEND;
	hdr->attr_id	   = attr_id;
	hdr->tid	   = tid;
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

    // big-arr
    case 0:
    {
          int attr_id = 255;
          int tid = 255;
          int _len_hdr0 = 1;
          struct ib_mad_hdr * hdr = (struct ib_mad_hdr *) malloc(_len_hdr0*sizeof(struct ib_mad_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr->tid = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->attr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->method = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->class_version = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->mgmt_class = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->base_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cm_format_mad_hdr(hdr,attr_id,tid);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
