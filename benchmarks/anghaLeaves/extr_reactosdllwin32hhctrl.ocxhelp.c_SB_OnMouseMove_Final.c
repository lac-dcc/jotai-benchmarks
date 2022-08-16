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
typedef  int WPARAM ;
typedef  int /*<<< orphan*/  LPARAM ;
typedef  int /*<<< orphan*/  HWND ;

/* Variables and functions */
 int MK_LBUTTON ; 

__attribute__((used)) static void SB_OnMouseMove(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
    /* ignore WM_MOUSEMOVE if not dragging the SizeBar */
    if (!(wParam & MK_LBUTTON))
        return;
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
          int hWnd = 100;
          int wParam = 100;
          int lParam = 100;
          SB_OnMouseMove(hWnd,wParam,lParam);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hWnd = 255;
          int wParam = 255;
          int lParam = 255;
          SB_OnMouseMove(hWnd,wParam,lParam);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hWnd = 10;
          int wParam = 10;
          int lParam = 10;
          SB_OnMouseMove(hWnd,wParam,lParam);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
