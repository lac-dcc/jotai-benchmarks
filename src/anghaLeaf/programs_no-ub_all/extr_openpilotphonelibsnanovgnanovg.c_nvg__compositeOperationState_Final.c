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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int srcRGB; int dstRGB; int srcAlpha; int dstAlpha; } ;
typedef  TYPE_1__ NVGcompositeOperationState ;

/* Variables and functions */
 int NVG_ATOP ; 
 int NVG_COPY ; 
 int NVG_DESTINATION_ATOP ; 
 int NVG_DESTINATION_IN ; 
 int NVG_DESTINATION_OUT ; 
 int NVG_DESTINATION_OVER ; 
 int NVG_DST_ALPHA ; 
 int NVG_LIGHTER ; 
 int NVG_ONE ; 
 int NVG_ONE_MINUS_DST_ALPHA ; 
 int NVG_ONE_MINUS_SRC_ALPHA ; 
 int NVG_SOURCE_IN ; 
 int NVG_SOURCE_OUT ; 
 int NVG_SOURCE_OVER ; 
 int NVG_SRC_ALPHA ; 
 int NVG_XOR ; 
 int NVG_ZERO ; 

__attribute__((used)) static NVGcompositeOperationState nvg__compositeOperationState(int op)
{
	int sfactor, dfactor;

	if (op == NVG_SOURCE_OVER)
	{
		sfactor = NVG_ONE;
		dfactor = NVG_ONE_MINUS_SRC_ALPHA;
	}
	else if (op == NVG_SOURCE_IN)
	{
		sfactor = NVG_DST_ALPHA;
		dfactor = NVG_ZERO;
	}
	else if (op == NVG_SOURCE_OUT)
	{
		sfactor = NVG_ONE_MINUS_DST_ALPHA;
		dfactor = NVG_ZERO;
	}
	else if (op == NVG_ATOP)
	{
		sfactor = NVG_DST_ALPHA;
		dfactor = NVG_ONE_MINUS_SRC_ALPHA;
	}
	else if (op == NVG_DESTINATION_OVER)
	{
		sfactor = NVG_ONE_MINUS_DST_ALPHA;
		dfactor = NVG_ONE;
	}
	else if (op == NVG_DESTINATION_IN)
	{
		sfactor = NVG_ZERO;
		dfactor = NVG_SRC_ALPHA;
	}
	else if (op == NVG_DESTINATION_OUT)
	{
		sfactor = NVG_ZERO;
		dfactor = NVG_ONE_MINUS_SRC_ALPHA;
	}
	else if (op == NVG_DESTINATION_ATOP)
	{
		sfactor = NVG_ONE_MINUS_DST_ALPHA;
		dfactor = NVG_SRC_ALPHA;
	}
	else if (op == NVG_LIGHTER)
	{
		sfactor = NVG_ONE;
		dfactor = NVG_ONE;
	}
	else if (op == NVG_COPY)
	{
		sfactor = NVG_ONE;
		dfactor = NVG_ZERO;
	}
	else if (op == NVG_XOR)
	{
		sfactor = NVG_ONE_MINUS_DST_ALPHA;
		dfactor = NVG_ONE_MINUS_SRC_ALPHA;
	}

	NVGcompositeOperationState state;
	state.srcRGB = sfactor;
	state.dstRGB = dfactor;
	state.srcAlpha = sfactor;
	state.dstAlpha = dfactor;
	return state;
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
          int op = 255;
          struct TYPE_3__ benchRet = nvg__compositeOperationState(op);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
