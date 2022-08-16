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
struct ttusb_dec {int model; char* model_name; char* firmware_name; } ;
typedef  enum ttusb_dec_model { ____Placeholder_ttusb_dec_model } ttusb_dec_model ;

/* Variables and functions */
#define  TTUSB_DEC2000T 130 
#define  TTUSB_DEC2540T 129 
#define  TTUSB_DEC3000S 128 

__attribute__((used)) static void ttusb_dec_set_model(struct ttusb_dec *dec,
				enum ttusb_dec_model model)
{
	dec->model = model;

	switch (model) {
	case TTUSB_DEC2000T:
		dec->model_name = "DEC2000-t";
		dec->firmware_name = "dvb-ttusb-dec-2000t.fw";
		break;

	case TTUSB_DEC2540T:
		dec->model_name = "DEC2540-t";
		dec->firmware_name = "dvb-ttusb-dec-2540t.fw";
		break;

	case TTUSB_DEC3000S:
		dec->model_name = "DEC3000-s";
		dec->firmware_name = "dvb-ttusb-dec-3000s.fw";
		break;
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
          enum ttusb_dec_model model = 0;
          int _len_dec0 = 1;
          struct ttusb_dec * dec = (struct ttusb_dec *) malloc(_len_dec0*sizeof(struct ttusb_dec));
          for(int _i0 = 0; _i0 < _len_dec0; _i0++) {
            dec[_i0].model = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dec__i0__model_name0 = 1;
          dec[_i0].model_name = (char *) malloc(_len_dec__i0__model_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_dec__i0__model_name0; _j0++) {
            dec[_i0].model_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dec__i0__firmware_name0 = 1;
          dec[_i0].firmware_name = (char *) malloc(_len_dec__i0__firmware_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_dec__i0__firmware_name0; _j0++) {
            dec[_i0].firmware_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ttusb_dec_set_model(dec,model);
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].model_name);
          }
          for(int _aux = 0; _aux < _len_dec0; _aux++) {
          free(dec[_aux].firmware_name);
          }
          free(dec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
