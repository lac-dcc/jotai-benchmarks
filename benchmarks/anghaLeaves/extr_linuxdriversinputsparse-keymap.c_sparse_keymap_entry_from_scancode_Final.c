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
       0            empty\n\
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
struct key_entry {scalar_t__ type; unsigned int code; } ;
struct input_dev {struct key_entry* keycode; } ;

/* Variables and functions */
 scalar_t__ KE_END ; 

struct key_entry *sparse_keymap_entry_from_scancode(struct input_dev *dev,
						    unsigned int code)
{
	struct key_entry *key;

	for (key = dev->keycode; key->type != KE_END; key++)
		if (code == key->code)
			return key;

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned int code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct input_dev * dev = (struct input_dev *) malloc(_len_dev0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__keycode0 = 1;
          dev[_i0].keycode = (struct key_entry *) malloc(_len_dev__i0__keycode0*sizeof(struct key_entry));
          for(int _j0 = 0; _j0 < _len_dev__i0__keycode0; _j0++) {
              dev[_i0].keycode->type = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].keycode->code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct key_entry * benchRet = sparse_keymap_entry_from_scancode(dev,code);
          printf("%ld\n", (*benchRet).type);
          printf("%u\n", (*benchRet).code);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].keycode);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
