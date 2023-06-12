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
       3            empty\n\
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
struct io_tracker {int /*<<< orphan*/  idle_time; scalar_t__ in_flight; } ;
typedef  scalar_t__ sector_t ;

/* Variables and functions */
 int /*<<< orphan*/  jiffies ; 

__attribute__((used)) static void __iot_io_end(struct io_tracker *iot, sector_t len)
{
	if (!len)
		return;

	iot->in_flight -= len;
	if (!iot->in_flight)
		iot->idle_time = jiffies;
}

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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long len = 100;
        
          int _len_iot0 = 1;
          struct io_tracker * iot = (struct io_tracker *) malloc(_len_iot0*sizeof(struct io_tracker));
          for(int _i0 = 0; _i0 < _len_iot0; _i0++) {
              iot[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
          iot[_i0].in_flight = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __iot_io_end(iot,len);
          free(iot);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long len = 255;
        
          int _len_iot0 = 65025;
          struct io_tracker * iot = (struct io_tracker *) malloc(_len_iot0*sizeof(struct io_tracker));
          for(int _i0 = 0; _i0 < _len_iot0; _i0++) {
              iot[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
          iot[_i0].in_flight = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __iot_io_end(iot,len);
          free(iot);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long len = 10;
        
          int _len_iot0 = 100;
          struct io_tracker * iot = (struct io_tracker *) malloc(_len_iot0*sizeof(struct io_tracker));
          for(int _i0 = 0; _i0 < _len_iot0; _i0++) {
              iot[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
          iot[_i0].in_flight = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __iot_io_end(iot,len);
          free(iot);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_iot0 = 1;
          struct io_tracker * iot = (struct io_tracker *) malloc(_len_iot0*sizeof(struct io_tracker));
          for(int _i0 = 0; _i0 < _len_iot0; _i0++) {
              iot[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
          iot[_i0].in_flight = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __iot_io_end(iot,len);
          free(iot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
