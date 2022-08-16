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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {void* tif_setupencode; void* tif_encodestatus; void* tif_setupdecode; void* tif_decodestatus; void* tif_fixuptags; } ;
typedef  TYPE_1__ TIFF ;

/* Variables and functions */
 void* FALSE ; 
 void* _notConfigured ; 

__attribute__((used)) static int
NotConfigured(TIFF* tif, int scheme)
{
	(void) scheme;

	tif->tif_fixuptags = _notConfigured;
	tif->tif_decodestatus = FALSE;
	tif->tif_setupdecode = _notConfigured;
	tif->tif_encodestatus = FALSE;
	tif->tif_setupencode = _notConfigured;
	return (1);
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
          int scheme = 100;
          int _len_tif0 = 1;
          struct TYPE_3__ * tif = (struct TYPE_3__ *) malloc(_len_tif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
              }
          int benchRet = NotConfigured(tif,scheme);
          printf("%d\n", benchRet); 
          free(tif);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int scheme = 10;
          int _len_tif0 = 100;
          struct TYPE_3__ * tif = (struct TYPE_3__ *) malloc(_len_tif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tif0; _i0++) {
              }
          int benchRet = NotConfigured(tif,scheme);
          printf("%d\n", benchRet); 
          free(tif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
