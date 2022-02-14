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
typedef  enum qed_ll2_error_handle { ____Placeholder_qed_ll2_error_handle } qed_ll2_error_handle ;
typedef  enum core_error_handle { ____Placeholder_core_error_handle } core_error_handle ;

/* Variables and functions */
 int LL2_ASSERT ; 
 int LL2_DO_NOTHING ; 
 int LL2_DROP_PACKET ; 
#define  QED_LL2_ASSERT 130 
#define  QED_LL2_DO_NOTHING 129 
#define  QED_LL2_DROP_PACKET 128 

__attribute__((used)) static enum core_error_handle
qed_ll2_get_error_choice(enum qed_ll2_error_handle err)
{
	switch (err) {
	case QED_LL2_DROP_PACKET:
		return LL2_DROP_PACKET;
	case QED_LL2_DO_NOTHING:
		return LL2_DO_NOTHING;
	case QED_LL2_ASSERT:
		return LL2_ASSERT;
	default:
		return LL2_DO_NOTHING;
	}
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
          enum qed_ll2_error_handle err = 0;
          enum core_error_handle benchRet = qed_ll2_get_error_choice(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
