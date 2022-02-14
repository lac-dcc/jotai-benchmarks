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

/* Type definitions */
typedef  int /*<<< orphan*/  UiMenuKeyPressFilterCallback ;
typedef  int /*<<< orphan*/  ULONG ;
typedef  int /*<<< orphan*/  PCSTR ;
typedef  int /*<<< orphan*/  LONG ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

BOOLEAN NoUiDisplayMenu(PCSTR MenuHeader, PCSTR MenuFooter, BOOLEAN ShowBootOptions, PCSTR MenuItemList[], ULONG MenuItemCount, ULONG DefaultMenuItem, LONG MenuTimeOut, ULONG* SelectedMenuItem, BOOLEAN CanEscape, UiMenuKeyPressFilterCallback KeyPressFilter)
{
    *SelectedMenuItem = DefaultMenuItem;
    return TRUE;
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
          int MenuHeader = 255;
          int MenuFooter = 255;
          int ShowBootOptions = 255;
          int MenuItemCount = 255;
          int DefaultMenuItem = 255;
          int MenuTimeOut = 255;
          int CanEscape = 255;
          int KeyPressFilter = 255;
          int _len_MenuItemList0 = 1;
          int * MenuItemList = (int *) malloc(_len_MenuItemList0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_MenuItemList0; _i0++) {
            MenuItemList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SelectedMenuItem0 = 65025;
          int * SelectedMenuItem = (int *) malloc(_len_SelectedMenuItem0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_SelectedMenuItem0; _i0++) {
            SelectedMenuItem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NoUiDisplayMenu(MenuHeader,MenuFooter,ShowBootOptions,MenuItemList,MenuItemCount,DefaultMenuItem,MenuTimeOut,SelectedMenuItem,CanEscape,KeyPressFilter);
          printf("%d\n", benchRet); 
          free(MenuItemList);
          free(SelectedMenuItem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
