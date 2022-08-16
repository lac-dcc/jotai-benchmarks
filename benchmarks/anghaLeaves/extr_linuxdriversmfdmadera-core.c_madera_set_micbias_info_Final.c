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
struct madera {int type; int num_micbias; int* num_childbias; } ;

/* Variables and functions */
#define  CS47L35 132 
#define  CS47L85 131 
#define  CS47L90 130 
#define  CS47L91 129 
#define  WM1840 128 

__attribute__((used)) static void madera_set_micbias_info(struct madera *madera)
{
	/*
	 * num_childbias is an array because future codecs can have different
	 * childbiases for each micbias. Unspecified values default to 0.
	 */
	switch (madera->type) {
	case CS47L35:
		madera->num_micbias = 2;
		madera->num_childbias[0] = 2;
		madera->num_childbias[1] = 2;
		return;
	case CS47L85:
	case WM1840:
		madera->num_micbias = 4;
		/* no child biases */
		return;
	case CS47L90:
	case CS47L91:
		madera->num_micbias = 2;
		madera->num_childbias[0] = 4;
		madera->num_childbias[1] = 4;
		return;
	default:
		return;
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
          int _len_madera0 = 1;
          struct madera * madera = (struct madera *) malloc(_len_madera0*sizeof(struct madera));
          for(int _i0 = 0; _i0 < _len_madera0; _i0++) {
            madera[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        madera[_i0].num_micbias = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_madera__i0__num_childbias0 = 1;
          madera[_i0].num_childbias = (int *) malloc(_len_madera__i0__num_childbias0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_madera__i0__num_childbias0; _j0++) {
            madera[_i0].num_childbias[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          madera_set_micbias_info(madera);
          for(int _aux = 0; _aux < _len_madera0; _aux++) {
          free(madera[_aux].num_childbias);
          }
          free(madera);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
