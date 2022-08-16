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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct net_device {char* name; } ;
struct TYPE_3__ {struct net_device* netif; } ;
typedef  TYPE_1__ hysdn_card ;

/* Variables and functions */

char *
hysdn_net_getname(hysdn_card *card)
{
	struct net_device *dev = card->netif;

	if (!dev)
		return ("-");	/* non existing */

	return (dev->name);
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
          int _len_card0 = 1;
          struct TYPE_3__ * card = (struct TYPE_3__ *) malloc(_len_card0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__netif0 = 1;
          card[_i0].netif = (struct net_device *) malloc(_len_card__i0__netif0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_card__i0__netif0; _j0++) {
              int _len_card__i0__netif_name0 = 1;
          card[_i0].netif->name = (char *) malloc(_len_card__i0__netif_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_card__i0__netif_name0; _j0++) {
            card[_i0].netif->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          char * benchRet = hysdn_net_getname(card);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].netif);
          }
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
