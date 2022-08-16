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
struct snd_soundfont {int type; } ;
struct snd_sf_zone {scalar_t__ counter; } ;
struct snd_sf_list {scalar_t__ zone_counter; scalar_t__ zone_locked; } ;

/* Variables and functions */
 int SNDRV_SFNT_PAT_LOCKED ; 

__attribute__((used)) static void
set_zone_counter(struct snd_sf_list *sflist, struct snd_soundfont *sf,
		 struct snd_sf_zone *zp)
{
	zp->counter = sflist->zone_counter++;
	if (sf->type & SNDRV_SFNT_PAT_LOCKED)
		sflist->zone_locked = sflist->zone_counter;
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
          int _len_sflist0 = 1;
          struct snd_sf_list * sflist = (struct snd_sf_list *) malloc(_len_sflist0*sizeof(struct snd_sf_list));
          for(int _i0 = 0; _i0 < _len_sflist0; _i0++) {
            sflist[_i0].zone_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        sflist[_i0].zone_locked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sf0 = 1;
          struct snd_soundfont * sf = (struct snd_soundfont *) malloc(_len_sf0*sizeof(struct snd_soundfont));
          for(int _i0 = 0; _i0 < _len_sf0; _i0++) {
            sf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_zp0 = 1;
          struct snd_sf_zone * zp = (struct snd_sf_zone *) malloc(_len_zp0*sizeof(struct snd_sf_zone));
          for(int _i0 = 0; _i0 < _len_zp0; _i0++) {
            zp[_i0].counter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_zone_counter(sflist,sf,zp);
          free(sflist);
          free(sf);
          free(zp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
