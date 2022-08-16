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

/* Variables and functions */
 int MP_KEY_BASE ; 
 int MP_KEY_MODIFIER_MASK ; 
 int MP_KEY_MODIFIER_SHIFT ; 

int mp_normalize_keycode(int keycode)
{
    if (keycode <= 0)
        return keycode;
    int code = keycode & ~MP_KEY_MODIFIER_MASK;
    int mod = keycode & MP_KEY_MODIFIER_MASK;
    /* On normal keyboards shift changes the character code of non-special
     * keys, so don't count the modifier separately for those. In other words
     * we want to have "a" and "A" instead of "a" and "Shift+A"; but a separate
     * shift modifier is still kept for special keys like arrow keys. */
    if (code >= 32 && code < MP_KEY_BASE) {
        /* Still try to support ASCII case-modifications properly. For example,
         * we want to change "Shift+a" to "A", not "a". Doing this for unicode
         * in general would require huge lookup tables, or a libc with proper
         * unicode support, so we don't do that. */
        if (code >= 'a' && code <= 'z' && (mod & MP_KEY_MODIFIER_SHIFT))
            code &= 0x5F;
        mod &= ~MP_KEY_MODIFIER_SHIFT;
    }
    return code | mod;
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
          int keycode = 100;
          int benchRet = mp_normalize_keycode(keycode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int keycode = 255;
          int benchRet = mp_normalize_keycode(keycode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int keycode = 10;
          int benchRet = mp_normalize_keycode(keycode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
