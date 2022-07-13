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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONG ;
typedef  scalar_t__ UCHAR ;
struct TYPE_4__ {scalar_t__ bkcol; scalar_t__ fgcol; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef  int /*<<< orphan*/ * PUCHAR ;

/* Variables and functions */
 scalar_t__ COLOR_BACKGROUND ; 
 scalar_t__ COLOR_CAPTION ; 
 scalar_t__ COLOR_FOREGROUND ; 
 scalar_t__ COLOR_TEXT ; 
 TYPE_3__ attr ; 
 int /*<<< orphan*/ * cGraphTable ; 
 int /*<<< orphan*/  pScreenBufferHercules ; 
 int* pVgaOffset ; 

void PrintGrafHercules(ULONG x,ULONG y,UCHAR c)
{
    ULONG i;
    PUCHAR p;
    ULONG _line = y<<3;

	if(!pScreenBufferHercules)
		return;

    p=&cGraphTable[(ULONG)c<<3];

    if((attr.u.bits.bkcol == COLOR_FOREGROUND && attr.u.bits.fgcol == COLOR_BACKGROUND) ||
       (attr.u.bits.bkcol == COLOR_CAPTION && attr.u.bits.fgcol == COLOR_TEXT) )
	    for(i=0 ;i<8 ;i++,_line++)
	    {
            *(PUCHAR)(pVgaOffset[_line & 0x3] + ( 90* (_line >> 2) ) + x) = ~*p++;
        }
    else
	    for(i=0 ;i<8 ;i++,_line++)
	    {
            *(PUCHAR)(pVgaOffset[_line & 0x3] + ( 90* (_line >> 2) ) + x) = *p++;
        }
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
          int x = 100;
          int y = 100;
          long c = 100;
          PrintGrafHercules(x,y,c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          long c = 255;
          PrintGrafHercules(x,y,c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          long c = 10;
          PrintGrafHercules(x,y,c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
