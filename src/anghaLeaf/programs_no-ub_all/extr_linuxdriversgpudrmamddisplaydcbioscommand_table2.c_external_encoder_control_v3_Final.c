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
struct bp_external_encoder_control {int dummy; } ;
struct bios_parser {int dummy; } ;
typedef  enum bp_result { ____Placeholder_bp_result } bp_result ;

/* Variables and functions */
 int BP_RESULT_OK ; 

__attribute__((used)) static enum bp_result external_encoder_control_v3(
	struct bios_parser *bp,
	struct bp_external_encoder_control *cntl)
{
	/* TODO */
	return BP_RESULT_OK;
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
          int _len_bp0 = 1;
          struct bios_parser * bp = (struct bios_parser *) malloc(_len_bp0*sizeof(struct bios_parser));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cntl0 = 1;
          struct bp_external_encoder_control * cntl = (struct bp_external_encoder_control *) malloc(_len_cntl0*sizeof(struct bp_external_encoder_control));
          for(int _i0 = 0; _i0 < _len_cntl0; _i0++) {
            cntl->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum bp_result benchRet = external_encoder_control_v3(bp,cntl);
          printf("{{other_type}} %p\n", &benchRet); 
          free(bp);
          free(cntl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
