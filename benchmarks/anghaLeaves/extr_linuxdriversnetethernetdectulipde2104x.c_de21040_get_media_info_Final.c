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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct de_private {int media_type; int media_supported; int media_advertise; TYPE_1__* media; } ;
struct TYPE_2__ {unsigned int type; int /*<<< orphan*/  csr15; int /*<<< orphan*/  csr14; int /*<<< orphan*/  csr13; } ;

/* Variables and functions */
 unsigned int DE_MAX_MEDIA ; 
#define  DE_MEDIA_AUI 130 
 unsigned int DE_MEDIA_INVALID ; 
#define  DE_MEDIA_TP 129 
#define  DE_MEDIA_TP_FD 128 
 int SUPPORTED_10baseT_Full ; 
 int SUPPORTED_10baseT_Half ; 
 int SUPPORTED_AUI ; 
 int SUPPORTED_TP ; 
 int /*<<< orphan*/ * t21040_csr13 ; 
 int /*<<< orphan*/ * t21040_csr14 ; 
 int /*<<< orphan*/ * t21040_csr15 ; 

__attribute__((used)) static void de21040_get_media_info(struct de_private *de)
{
	unsigned int i;

	de->media_type = DE_MEDIA_TP;
	de->media_supported |= SUPPORTED_TP | SUPPORTED_10baseT_Full |
			       SUPPORTED_10baseT_Half | SUPPORTED_AUI;
	de->media_advertise = de->media_supported;

	for (i = 0; i < DE_MAX_MEDIA; i++) {
		switch (i) {
		case DE_MEDIA_AUI:
		case DE_MEDIA_TP:
		case DE_MEDIA_TP_FD:
			de->media[i].type = i;
			de->media[i].csr13 = t21040_csr13[i];
			de->media[i].csr14 = t21040_csr14[i];
			de->media[i].csr15 = t21040_csr15[i];
			break;
		default:
			de->media[i].type = DE_MEDIA_INVALID;
			break;
		}
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
          int _len_de0 = 1;
          struct de_private * de = (struct de_private *) malloc(_len_de0*sizeof(struct de_private));
          for(int _i0 = 0; _i0 < _len_de0; _i0++) {
            de[_i0].media_type = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].media_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].media_advertise = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_de__i0__media0 = 1;
          de[_i0].media = (struct TYPE_2__ *) malloc(_len_de__i0__media0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_de__i0__media0; _j0++) {
            de[_i0].media->type = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].media->csr15 = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].media->csr14 = ((-2 * (next_i()%2)) + 1) * next_i();
        de[_i0].media->csr13 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          de21040_get_media_info(de);
          for(int _aux = 0; _aux < _len_de0; _aux++) {
          free(de[_aux].media);
          }
          free(de);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
