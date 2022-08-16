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

/* Type definitions */
struct atkbd {int emul; scalar_t__ translated; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int atkbd_oqo_01plus_scancode_fixup(struct atkbd *atkbd,
						    unsigned int code)
{
	if (atkbd->translated && atkbd->emul == 1 &&
	    (code == 0x64 || code == 0x65 || code == 0x66)) {
		atkbd->emul = 0;
		code |= 0x80;
	}

	return code;
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
          unsigned int code = 100;
          int _len_atkbd0 = 1;
          struct atkbd * atkbd = (struct atkbd *) malloc(_len_atkbd0*sizeof(struct atkbd));
          for(int _i0 = 0; _i0 < _len_atkbd0; _i0++) {
            atkbd[_i0].emul = ((-2 * (next_i()%2)) + 1) * next_i();
        atkbd[_i0].translated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = atkbd_oqo_01plus_scancode_fixup(atkbd,code);
          printf("%u\n", benchRet); 
          free(atkbd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
