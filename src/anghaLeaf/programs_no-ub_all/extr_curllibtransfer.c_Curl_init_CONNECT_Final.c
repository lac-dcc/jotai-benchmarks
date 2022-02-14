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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  in_set; int /*<<< orphan*/  fread_func_set; } ;
struct TYPE_3__ {int /*<<< orphan*/  in; int /*<<< orphan*/  fread_func; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ state; } ;

/* Variables and functions */

void Curl_init_CONNECT(struct Curl_easy *data)
{
  data->state.fread_func = data->set.fread_func_set;
  data->state.in = data->set.in_set;
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
          int _len_data0 = 1;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data->set.in_set = ((-2 * (next_i()%2)) + 1) * next_i();
        data->set.fread_func_set = ((-2 * (next_i()%2)) + 1) * next_i();
        data->state.in = ((-2 * (next_i()%2)) + 1) * next_i();
        data->state.fread_func = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Curl_init_CONNECT(data);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
