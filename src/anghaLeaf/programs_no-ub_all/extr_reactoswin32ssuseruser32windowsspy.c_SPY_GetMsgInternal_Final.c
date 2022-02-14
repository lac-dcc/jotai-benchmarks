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
typedef  size_t UINT ;

/* Variables and functions */
 char const** CCMMessageTypeNames ; 
 size_t CCM_FIRST ; 
 char const** HDMMessageTypeNames ; 
 size_t HDM_FIRST ; 
 char const** LVMMessageTypeNames ; 
 size_t LVM_FIRST ; 
 char const** MessageTypeNames ; 
 char const** PGMMessageTypeNames ; 
 size_t PGM_FIRST ; 
 size_t SPY_MAX_CCMMSGNUM ; 
 size_t SPY_MAX_HDMMSGNUM ; 
 size_t SPY_MAX_LVMMSGNUM ; 
 size_t SPY_MAX_MSGNUM ; 
 size_t SPY_MAX_PGMMSGNUM ; 
 size_t SPY_MAX_TCMMSGNUM ; 
 size_t SPY_MAX_TVMSGNUM ; 
 size_t SPY_MAX_WINEMSGNUM ; 
 char const** TCMMessageTypeNames ; 
 size_t TCM_FIRST ; 
 char const** TVMessageTypeNames ; 
 size_t TV_FIRST ; 
 char const** WINEMessageTypeNames ; 
 size_t WM_WINE_DESTROYWINDOW ; 

__attribute__((used)) static const char *SPY_GetMsgInternal( UINT msg )
{
    if (msg <= SPY_MAX_MSGNUM)
        return MessageTypeNames[msg];

    if (msg >= LVM_FIRST && msg <= LVM_FIRST + SPY_MAX_LVMMSGNUM)
        return LVMMessageTypeNames[msg-LVM_FIRST];

    if (msg >= TV_FIRST && msg <= TV_FIRST + SPY_MAX_TVMSGNUM)
        return TVMessageTypeNames[msg-TV_FIRST];

    if (msg >= HDM_FIRST && msg <= HDM_FIRST + SPY_MAX_HDMMSGNUM)
        return HDMMessageTypeNames[msg-HDM_FIRST];

    if (msg >= TCM_FIRST && msg <= TCM_FIRST + SPY_MAX_TCMMSGNUM)
        return TCMMessageTypeNames[msg-TCM_FIRST];

    if (msg >= PGM_FIRST && msg <= PGM_FIRST + SPY_MAX_PGMMSGNUM)
        return PGMMessageTypeNames[msg-PGM_FIRST];

    if (msg >= CCM_FIRST && msg <= CCM_FIRST + SPY_MAX_CCMMSGNUM)
        return CCMMessageTypeNames[msg-CCM_FIRST];
#ifndef __REACTOS__
    if (msg >= WM_WINE_DESTROYWINDOW && msg <= WM_WINE_DESTROYWINDOW + SPY_MAX_WINEMSGNUM)
        return WINEMessageTypeNames[msg-WM_WINE_DESTROYWINDOW];
#endif
    return NULL;
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
          unsigned long msg = 255;
          const char * benchRet = SPY_GetMsgInternal(msg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
