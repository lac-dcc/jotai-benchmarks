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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct wil6210_priv {TYPE_1__* srings; } ;
struct TYPE_2__ {int /*<<< orphan*/  va; } ;

/* Variables and functions */
 int EINVAL ; 
 int WIL6210_MAX_STATUS_RINGS ; 

__attribute__((used)) static int wil_find_free_sring(struct wil6210_priv *wil)
{
	int i;

	for (i = 0; i < WIL6210_MAX_STATUS_RINGS; i++) {
		if (!wil->srings[i].va)
			return i;
	}

	return -EINVAL;
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
          int _len_wil0 = 1;
          struct wil6210_priv * wil = (struct wil6210_priv *) malloc(_len_wil0*sizeof(struct wil6210_priv));
          for(int _i0 = 0; _i0 < _len_wil0; _i0++) {
              int _len_wil__i0__srings0 = 1;
          wil[_i0].srings = (struct TYPE_2__ *) malloc(_len_wil__i0__srings0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wil__i0__srings0; _j0++) {
            wil[_i0].srings->va = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wil_find_free_sring(wil);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wil0; _aux++) {
          free(wil[_aux].srings);
          }
          free(wil);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
