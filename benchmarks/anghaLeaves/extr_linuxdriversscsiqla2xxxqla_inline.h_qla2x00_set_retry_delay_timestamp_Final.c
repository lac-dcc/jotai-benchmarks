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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint16_t ;
struct TYPE_3__ {scalar_t__ retry_delay_timestamp; } ;
typedef  TYPE_1__ fc_port_t ;

/* Variables and functions */
 int HZ ; 
 scalar_t__ jiffies ; 

__attribute__((used)) static inline void
qla2x00_set_retry_delay_timestamp(fc_port_t *fcport, uint16_t retry_delay)
{
	if (retry_delay)
		fcport->retry_delay_timestamp = jiffies +
		    (retry_delay * HZ / 10);
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
          int retry_delay = 100;
          int _len_fcport0 = 1;
          struct TYPE_3__ * fcport = (struct TYPE_3__ *) malloc(_len_fcport0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fcport0; _i0++) {
            fcport[_i0].retry_delay_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qla2x00_set_retry_delay_timestamp(fcport,retry_delay);
          free(fcport);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int retry_delay = 10;
          int _len_fcport0 = 100;
          struct TYPE_3__ * fcport = (struct TYPE_3__ *) malloc(_len_fcport0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fcport0; _i0++) {
            fcport[_i0].retry_delay_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qla2x00_set_retry_delay_timestamp(fcport,retry_delay);
          free(fcport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
