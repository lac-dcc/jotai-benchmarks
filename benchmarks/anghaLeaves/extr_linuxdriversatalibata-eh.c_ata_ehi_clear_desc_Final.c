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
struct ata_eh_info {char* desc; scalar_t__ desc_len; } ;

/* Variables and functions */

void ata_ehi_clear_desc(struct ata_eh_info *ehi)
{
	ehi->desc[0] = '\0';
	ehi->desc_len = 0;
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
          int _len_ehi0 = 1;
          struct ata_eh_info * ehi = (struct ata_eh_info *) malloc(_len_ehi0*sizeof(struct ata_eh_info));
          for(int _i0 = 0; _i0 < _len_ehi0; _i0++) {
              int _len_ehi__i0__desc0 = 1;
          ehi[_i0].desc = (char *) malloc(_len_ehi__i0__desc0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_ehi__i0__desc0; _j0++) {
            ehi[_i0].desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ehi[_i0].desc_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_ehi_clear_desc(ehi);
          for(int _aux = 0; _aux < _len_ehi0; _aux++) {
          free(ehi[_aux].desc);
          }
          free(ehi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
