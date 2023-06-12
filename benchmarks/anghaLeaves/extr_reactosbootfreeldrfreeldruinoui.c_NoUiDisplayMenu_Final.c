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
       3            empty\n\
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
          int MenuHeader = 100;
        
          int MenuFooter = 100;
        
          int ShowBootOptions = 100;
        
          int MenuItemCount = 100;
        
          int DefaultMenuItem = 100;
        
          int MenuTimeOut = 100;
        
          int CanEscape = 100;
        
          int KeyPressFilter = 100;
        
          int _len_MenuItemList0 = 1;
          int * MenuItemList = (int *) malloc(_len_MenuItemList0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_MenuItemList0; _i0++) {
            MenuItemList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_SelectedMenuItem0 = 1;
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
    // big-arr
    case 1:
    {
          int MenuHeader = 255;
        
          int MenuFooter = 255;
        
          int ShowBootOptions = 255;
        
          int MenuItemCount = 255;
        
          int DefaultMenuItem = 255;
        
          int MenuTimeOut = 255;
        
          int CanEscape = 255;
        
          int KeyPressFilter = 255;
        
          int _len_MenuItemList0 = 65025;
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
    // big-arr-10x
    case 2:
    {
          int MenuHeader = 10;
        
          int MenuFooter = 10;
        
          int ShowBootOptions = 10;
        
          int MenuItemCount = 10;
        
          int DefaultMenuItem = 10;
        
          int MenuTimeOut = 10;
        
          int CanEscape = 10;
        
          int KeyPressFilter = 10;
        
          int _len_MenuItemList0 = 100;
          int * MenuItemList = (int *) malloc(_len_MenuItemList0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_MenuItemList0; _i0++) {
            MenuItemList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_SelectedMenuItem0 = 100;
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
    // empty
    case 3:
    {
          int MenuHeader = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int MenuFooter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int ShowBootOptions = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int MenuItemCount = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int DefaultMenuItem = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int MenuTimeOut = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int CanEscape = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int KeyPressFilter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_MenuItemList0 = 1;
          int * MenuItemList = (int *) malloc(_len_MenuItemList0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_MenuItemList0; _i0++) {
            MenuItemList[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_SelectedMenuItem0 = 1;
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
