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
typedef  int discmode_t ;

/* Variables and functions */
#define  CDIO_DISC_MODE_CD_DA 132 
#define  CDIO_DISC_MODE_CD_DATA 131 
#define  CDIO_DISC_MODE_CD_MIXED 130 
#define  CDIO_DISC_MODE_CD_XA 129 
#define  CDIO_DISC_MODE_NO_INFO 128 

bool
cdio_is_discmode_cdrom(discmode_t discmode) 
{
  switch (discmode) {
  case CDIO_DISC_MODE_CD_DA:
  case CDIO_DISC_MODE_CD_DATA:
  case CDIO_DISC_MODE_CD_XA:
  case CDIO_DISC_MODE_CD_MIXED:
  case CDIO_DISC_MODE_NO_INFO:
    return true;
  default:
    return false;
  }
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
          int discmode = 100;
        
          int benchRet = cdio_is_discmode_cdrom(discmode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int discmode = 255;
        
          int benchRet = cdio_is_discmode_cdrom(discmode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int discmode = 10;
        
          int benchRet = cdio_is_discmode_cdrom(discmode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          int discmode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = cdio_is_discmode_cdrom(discmode);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
