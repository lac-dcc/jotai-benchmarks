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
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/  len; int /*<<< orphan*/ * val; int /*<<< orphan*/  encoding; } ;
typedef  TYPE_2__ mbfl_string ;
struct TYPE_7__ {int /*<<< orphan*/  pos; int /*<<< orphan*/ * buffer; } ;
struct TYPE_9__ {TYPE_1__ device; int /*<<< orphan*/  to; } ;
typedef  TYPE_3__ mbfl_buffer_converter ;

/* Variables and functions */

mbfl_string *
mbfl_buffer_converter_getbuffer(mbfl_buffer_converter *convd, mbfl_string *result)
{
	if (convd != NULL && result != NULL && convd->device.buffer != NULL) {
		result->encoding = convd->to;
		result->val = convd->device.buffer;
		result->len = convd->device.pos;
	} else {
		result = NULL;
	}

	return result;
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
          int _len_convd0 = 1;
          struct TYPE_9__ * convd = (struct TYPE_9__ *) malloc(_len_convd0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_convd0; _i0++) {
            convd[_i0].device.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_convd__i0__device_buffer0 = 1;
          convd[_i0].device.buffer = (int *) malloc(_len_convd__i0__device_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_convd__i0__device_buffer0; _j0++) {
            convd[_i0].device.buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        convd[_i0].to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_result0 = 1;
          struct TYPE_8__ * result = (struct TYPE_8__ *) malloc(_len_result0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_result__i0__val0 = 1;
          result[_i0].val = (int *) malloc(_len_result__i0__val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_result__i0__val0; _j0++) {
            result[_i0].val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        result[_i0].encoding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_8__ * benchRet = mbfl_buffer_converter_getbuffer(convd,result);
          printf("%d\n", (*benchRet).len);
          printf("%d\n", (*benchRet).encoding);
          free(convd);
          for(int _aux = 0; _aux < _len_result0; _aux++) {
          free(result[_aux].val);
          }
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
