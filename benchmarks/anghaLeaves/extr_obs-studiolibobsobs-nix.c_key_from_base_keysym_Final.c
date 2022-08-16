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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ xcb_keysym_t ;
typedef  int /*<<< orphan*/  obs_key_t ;
struct TYPE_3__ {scalar_t__* base_keysyms; } ;
typedef  TYPE_1__ obs_hotkeys_platform_t ;

/* Variables and functions */
 size_t OBS_KEY_LAST_VALUE ; 
 int /*<<< orphan*/  OBS_KEY_NONE ; 

__attribute__((used)) static obs_key_t key_from_base_keysym(obs_hotkeys_platform_t *context,
		xcb_keysym_t code)
{
	for (size_t i = 0; i < OBS_KEY_LAST_VALUE; i++) {
		if (context->base_keysyms[i] == (xcb_keysym_t)code) {
			return (obs_key_t)i;
		}
	}

	return OBS_KEY_NONE;
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
          long code = 100;
          int _len_context0 = 1;
          struct TYPE_3__ * context = (struct TYPE_3__ *) malloc(_len_context0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__base_keysyms0 = 1;
          context[_i0].base_keysyms = (long *) malloc(_len_context__i0__base_keysyms0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__base_keysyms0; _j0++) {
            context[_i0].base_keysyms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = key_from_base_keysym(context,code);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].base_keysyms);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
