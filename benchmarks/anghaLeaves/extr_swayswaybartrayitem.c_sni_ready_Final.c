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
struct swaybar_sni {char* status; scalar_t__ icon_pixmap; scalar_t__ icon_name; scalar_t__ attention_icon_pixmap; scalar_t__ attention_icon_name; } ;

/* Variables and functions */

__attribute__((used)) static bool sni_ready(struct swaybar_sni *sni) {
	return sni->status && (sni->status[0] == 'N' ? // NeedsAttention
			sni->attention_icon_name || sni->attention_icon_pixmap :
			sni->icon_name || sni->icon_pixmap);
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
          int _len_sni0 = 1;
          struct swaybar_sni * sni = (struct swaybar_sni *) malloc(_len_sni0*sizeof(struct swaybar_sni));
          for(int _i0 = 0; _i0 < _len_sni0; _i0++) {
              int _len_sni__i0__status0 = 1;
          sni[_i0].status = (char *) malloc(_len_sni__i0__status0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_sni__i0__status0; _j0++) {
            sni[_i0].status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sni[_i0].icon_pixmap = ((-2 * (next_i()%2)) + 1) * next_i();
        sni[_i0].icon_name = ((-2 * (next_i()%2)) + 1) * next_i();
        sni[_i0].attention_icon_pixmap = ((-2 * (next_i()%2)) + 1) * next_i();
        sni[_i0].attention_icon_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sni_ready(sni);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sni0; _aux++) {
          free(sni[_aux].status);
          }
          free(sni);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
