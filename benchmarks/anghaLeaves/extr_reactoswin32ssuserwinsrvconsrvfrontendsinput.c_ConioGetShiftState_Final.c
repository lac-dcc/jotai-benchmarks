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
       1            big-arr-10x\n\
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
typedef  int* PBYTE ;
typedef  int LPARAM ;
typedef  int /*<<< orphan*/  DWORD ;

/* Variables and functions */
 int /*<<< orphan*/  CAPSLOCK_ON ; 
 int /*<<< orphan*/  ENHANCED_KEY ; 
 int /*<<< orphan*/  LEFT_ALT_PRESSED ; 
 int /*<<< orphan*/  LEFT_CTRL_PRESSED ; 
 int /*<<< orphan*/  NUMLOCK_ON ; 
 int /*<<< orphan*/  RIGHT_ALT_PRESSED ; 
 int /*<<< orphan*/  RIGHT_CTRL_PRESSED ; 
 int /*<<< orphan*/  SCROLLLOCK_ON ; 
 int /*<<< orphan*/  SHIFT_PRESSED ; 
 size_t VK_CAPITAL ; 
 size_t VK_LCONTROL ; 
 size_t VK_LMENU ; 
 size_t VK_NUMLOCK ; 
 size_t VK_RCONTROL ; 
 size_t VK_RMENU ; 
 size_t VK_SCROLL ; 
 size_t VK_SHIFT ; 

__attribute__((used)) static DWORD
ConioGetShiftState(PBYTE KeyState, LPARAM lParam)
{
    DWORD ssOut = 0;

    if (KeyState[VK_CAPITAL] & 0x01)
        ssOut |= CAPSLOCK_ON;

    if (KeyState[VK_NUMLOCK] & 0x01)
        ssOut |= NUMLOCK_ON;

    if (KeyState[VK_SCROLL] & 0x01)
        ssOut |= SCROLLLOCK_ON;

    if (KeyState[VK_SHIFT] & 0x80)
        ssOut |= SHIFT_PRESSED;

    if (KeyState[VK_LCONTROL] & 0x80)
        ssOut |= LEFT_CTRL_PRESSED;
    if (KeyState[VK_RCONTROL] & 0x80)
        ssOut |= RIGHT_CTRL_PRESSED;

    if (KeyState[VK_LMENU] & 0x80)
        ssOut |= LEFT_ALT_PRESSED;
    if (KeyState[VK_RMENU] & 0x80)
        ssOut |= RIGHT_ALT_PRESSED;

    /* See WM_CHAR MSDN documentation for instance */
    if (lParam & 0x01000000)
        ssOut |= ENHANCED_KEY;

    return ssOut;
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
          int lParam = 100;
          int _len_KeyState0 = 1;
          int * KeyState = (int *) malloc(_len_KeyState0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_KeyState0; _i0++) {
            KeyState[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ConioGetShiftState(KeyState,lParam);
          printf("%d\n", benchRet); 
          free(KeyState);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int lParam = 10;
          int _len_KeyState0 = 100;
          int * KeyState = (int *) malloc(_len_KeyState0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_KeyState0; _i0++) {
            KeyState[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ConioGetShiftState(KeyState,lParam);
          printf("%d\n", benchRet); 
          free(KeyState);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
