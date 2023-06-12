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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct whc_qset {TYPE_2__* ep; } ;
struct whc {int dummy; } ;
struct TYPE_3__ {int bInterval; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;

/* Variables and functions */

__attribute__((used)) static int qset_get_period(struct whc *whc, struct whc_qset *qset)
{
	uint8_t bInterval = qset->ep->desc.bInterval;

	if (bInterval < 6)
		bInterval = 6;
	if (bInterval > 10)
		bInterval = 10;
	return bInterval - 6;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_whc0 = 65025;
          struct whc * whc = (struct whc *) malloc(_len_whc0*sizeof(struct whc));
          for(int _i0 = 0; _i0 < _len_whc0; _i0++) {
              whc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_qset0 = 65025;
          struct whc_qset * qset = (struct whc_qset *) malloc(_len_qset0*sizeof(struct whc_qset));
          for(int _i0 = 0; _i0 < _len_qset0; _i0++) {
              int _len_qset__i0__ep0 = 1;
          qset[_i0].ep = (struct TYPE_4__ *) malloc(_len_qset__i0__ep0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qset__i0__ep0; _j0++) {
              qset[_i0].ep->desc.bInterval = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = qset_get_period(whc,qset);
          printf("%d\n", benchRet); 
          free(whc);
          for(int _aux = 0; _aux < _len_qset0; _aux++) {
          free(qset[_aux].ep);
          }
          free(qset);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_whc0 = 100;
          struct whc * whc = (struct whc *) malloc(_len_whc0*sizeof(struct whc));
          for(int _i0 = 0; _i0 < _len_whc0; _i0++) {
              whc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_qset0 = 100;
          struct whc_qset * qset = (struct whc_qset *) malloc(_len_qset0*sizeof(struct whc_qset));
          for(int _i0 = 0; _i0 < _len_qset0; _i0++) {
              int _len_qset__i0__ep0 = 1;
          qset[_i0].ep = (struct TYPE_4__ *) malloc(_len_qset__i0__ep0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qset__i0__ep0; _j0++) {
              qset[_i0].ep->desc.bInterval = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = qset_get_period(whc,qset);
          printf("%d\n", benchRet); 
          free(whc);
          for(int _aux = 0; _aux < _len_qset0; _aux++) {
          free(qset[_aux].ep);
          }
          free(qset);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_whc0 = 1;
          struct whc * whc = (struct whc *) malloc(_len_whc0*sizeof(struct whc));
          for(int _i0 = 0; _i0 < _len_whc0; _i0++) {
              whc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_qset0 = 1;
          struct whc_qset * qset = (struct whc_qset *) malloc(_len_qset0*sizeof(struct whc_qset));
          for(int _i0 = 0; _i0 < _len_qset0; _i0++) {
              int _len_qset__i0__ep0 = 1;
          qset[_i0].ep = (struct TYPE_4__ *) malloc(_len_qset__i0__ep0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qset__i0__ep0; _j0++) {
              qset[_i0].ep->desc.bInterval = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = qset_get_period(whc,qset);
          printf("%d\n", benchRet); 
          free(whc);
          for(int _aux = 0; _aux < _len_qset0; _aux++) {
          free(qset[_aux].ep);
          }
          free(qset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
