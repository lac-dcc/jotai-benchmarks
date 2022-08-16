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
typedef  enum comclass_miscfields { ____Placeholder_comclass_miscfields } comclass_miscfields ;
typedef  int DWORD ;

/* Variables and functions */
#define  DVASPECT_CONTENT 131 
#define  DVASPECT_DOCPRINT 130 
#define  DVASPECT_ICON 129 
#define  DVASPECT_THUMBNAIL 128 
 int MiscStatus ; 
 int MiscStatusContent ; 
 int MiscStatusDocPrint ; 
 int MiscStatusIcon ; 
 int MiscStatusThumbnail ; 

__attribute__((used)) static inline enum comclass_miscfields dvaspect_to_miscfields(DWORD aspect)
{
    switch (aspect)
    {
    case DVASPECT_CONTENT:
        return MiscStatusContent;
    case DVASPECT_THUMBNAIL:
        return MiscStatusThumbnail;
    case DVASPECT_ICON:
        return MiscStatusIcon;
    case DVASPECT_DOCPRINT:
        return MiscStatusDocPrint;
    default:
        return MiscStatus;
    };
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
          int aspect = 100;
          enum comclass_miscfields benchRet = dvaspect_to_miscfields(aspect);
        
        break;
    }
    // big-arr
    case 1:
    {
          int aspect = 255;
          enum comclass_miscfields benchRet = dvaspect_to_miscfields(aspect);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int aspect = 10;
          enum comclass_miscfields benchRet = dvaspect_to_miscfields(aspect);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
