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

/* Type definitions */
struct vc_map {int scd_index; } ;
struct idt77252_dev {int scd_size; unsigned long scd_base; struct vc_map** scd2vc; } ;

/* Variables and functions */
 int SAR_SRAM_SCD_SIZE ; 

__attribute__((used)) static unsigned long
get_free_scd(struct idt77252_dev *card, struct vc_map *vc)
{
	int i;

	for (i = 0; i < card->scd_size; i++) {
		if (!card->scd2vc[i]) {
			card->scd2vc[i] = vc;
			vc->scd_index = i;
			return card->scd_base + i * SAR_SRAM_SCD_SIZE;
		}
	}
	return 0;
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
          struct idt77252_dev * card = (struct idt77252_dev *) malloc(_len_card0*sizeof(struct idt77252_dev));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].scd_size = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].scd_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__scd2vc0 = 1;
          card[_i0].scd2vc = (struct vc_map **) malloc(_len_card__i0__scd2vc0*sizeof(struct vc_map *));
          for(int _j0 = 0; _j0 < _len_card__i0__scd2vc0; _j0++) {
            int _len_card__i0__scd2vc1 = 1;
            card[_i0].scd2vc[_j0] = (struct vc_map *) malloc(_len_card__i0__scd2vc1*sizeof(struct vc_map));
            for(int _j1 = 0; _j1 < _len_card__i0__scd2vc1; _j1++) {
              card[_i0].scd2vc[_j0]->scd_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_vc0 = 1;
          struct vc_map * vc = (struct vc_map *) malloc(_len_vc0*sizeof(struct vc_map));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].scd_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_free_scd(card,vc);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(*(card[_aux].scd2vc));
        free(card[_aux].scd2vc);
          }
          free(card);
          free(vc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
