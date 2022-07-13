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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  void* u16 ;
struct TYPE_3__ {void* ox_id; void* rx_id; } ;
struct TYPE_4__ {TYPE_1__ ex_id; } ;
struct fcpio_tag {TYPE_2__ u; } ;

/* Variables and functions */

__attribute__((used)) static inline void
fcpio_tag_exid_enc(struct fcpio_tag *tag, u16 ox_id, u16 rx_id)
{
	tag->u.ex_id.rx_id = rx_id;
	tag->u.ex_id.ox_id = ox_id;
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
          int _len_tag0 = 1;
          struct fcpio_tag * tag = (struct fcpio_tag *) malloc(_len_tag0*sizeof(struct fcpio_tag));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
              }
          void * ox_id;
          void * rx_id;
          fcpio_tag_exid_enc(tag,ox_id,rx_id);
          free(tag);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tag0 = 65025;
          struct fcpio_tag * tag = (struct fcpio_tag *) malloc(_len_tag0*sizeof(struct fcpio_tag));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
              }
          void * ox_id;
          void * rx_id;
          fcpio_tag_exid_enc(tag,ox_id,rx_id);
          free(tag);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tag0 = 100;
          struct fcpio_tag * tag = (struct fcpio_tag *) malloc(_len_tag0*sizeof(struct fcpio_tag));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
              }
          void * ox_id;
          void * rx_id;
          fcpio_tag_exid_enc(tag,ox_id,rx_id);
          free(tag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
