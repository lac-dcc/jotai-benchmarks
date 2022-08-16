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
typedef  int u32 ;
struct de_private {int media_advertise; } ;

/* Variables and functions */
 int ADVERTISED_10baseT_Full ; 
 int ADVERTISED_10baseT_Half ; 
 int ADVERTISED_AUI ; 
 int ADVERTISED_Autoneg ; 
 int ADVERTISED_BNC ; 
#define  DE_MEDIA_AUI 132 
#define  DE_MEDIA_BNC 131 
#define  DE_MEDIA_TP 130 
#define  DE_MEDIA_TP_AUTO 129 
#define  DE_MEDIA_TP_FD 128 

__attribute__((used)) static unsigned int de_ok_to_advertise (struct de_private *de, u32 new_media)
{
	switch (new_media) {
	case DE_MEDIA_TP_AUTO:
		if (!(de->media_advertise & ADVERTISED_Autoneg))
			return 0;
		if (!(de->media_advertise & (ADVERTISED_10baseT_Half | ADVERTISED_10baseT_Full)))
			return 0;
		break;
	case DE_MEDIA_BNC:
		if (!(de->media_advertise & ADVERTISED_BNC))
			return 0;
		break;
	case DE_MEDIA_AUI:
		if (!(de->media_advertise & ADVERTISED_AUI))
			return 0;
		break;
	case DE_MEDIA_TP:
		if (!(de->media_advertise & ADVERTISED_10baseT_Half))
			return 0;
		break;
	case DE_MEDIA_TP_FD:
		if (!(de->media_advertise & ADVERTISED_10baseT_Full))
			return 0;
		break;
	}

	return 1;
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
          int new_media = 100;
          int _len_de0 = 1;
          struct de_private * de = (struct de_private *) malloc(_len_de0*sizeof(struct de_private));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].media_advertise = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = de_ok_to_advertise(de,new_media);
          printf("%u\n", benchRet); 
          free(de);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int new_media = 10;
          int _len_de0 = 100;
          struct de_private * de = (struct de_private *) malloc(_len_de0*sizeof(struct de_private));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].media_advertise = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = de_ok_to_advertise(de,new_media);
          printf("%u\n", benchRet); 
          free(de);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
