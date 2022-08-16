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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct Curl_easy {TYPE_2__* multi; TYPE_1__* multi_easy; } ;
struct TYPE_4__ {int in_callback; } ;
struct TYPE_3__ {int in_callback; } ;

/* Variables and functions */

void Curl_set_in_callback(struct Curl_easy *data, bool value)
{
  /* might get called when there is no data pointer! */
  if(data) {
    if(data->multi_easy)
      data->multi_easy->in_callback = value;
    else if(data->multi)
      data->multi->in_callback = value;
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

    // int-bounds
    case 0:
    {
          int value = 100;
          int _len_data0 = 1;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__multi0 = 1;
          data[_i0].multi = (struct TYPE_4__ *) malloc(_len_data__i0__multi0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__multi0; _j0++) {
            data[_i0].multi->in_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__multi_easy0 = 1;
          data[_i0].multi_easy = (struct TYPE_3__ *) malloc(_len_data__i0__multi_easy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__multi_easy0; _j0++) {
            data[_i0].multi_easy->in_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          Curl_set_in_callback(data,value);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].multi);
          }
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].multi_easy);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
