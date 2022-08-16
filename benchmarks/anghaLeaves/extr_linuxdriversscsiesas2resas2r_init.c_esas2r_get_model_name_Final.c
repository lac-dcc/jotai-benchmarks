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
struct esas2r_adapter {TYPE_1__* pcid; } ;
struct TYPE_2__ {int subsystem_device; } ;

/* Variables and functions */
#define  ATTO_ESAS_R608 136 
#define  ATTO_ESAS_R60F 135 
#define  ATTO_ESAS_R644 134 
#define  ATTO_ESAS_R648 133 
#define  ATTO_ESAS_R680 132 
#define  ATTO_ESAS_R6F0 131 
#define  ATTO_TLSH_1068 130 
#define  ATTO_TSSC_3808 129 
#define  ATTO_TSSC_3808E 128 

const char *esas2r_get_model_name(struct esas2r_adapter *a)
{
	switch (a->pcid->subsystem_device) {
	case ATTO_ESAS_R680:
		return "ATTO ExpressSAS R680";

	case ATTO_ESAS_R608:
		return "ATTO ExpressSAS R608";

	case ATTO_ESAS_R60F:
		return "ATTO ExpressSAS R60F";

	case ATTO_ESAS_R6F0:
		return "ATTO ExpressSAS R6F0";

	case ATTO_ESAS_R644:
		return "ATTO ExpressSAS R644";

	case ATTO_ESAS_R648:
		return "ATTO ExpressSAS R648";

	case ATTO_TSSC_3808:
		return "ATTO ThunderStream SC 3808D";

	case ATTO_TSSC_3808E:
		return "ATTO ThunderStream SC 3808E";

	case ATTO_TLSH_1068:
		return "ATTO ThunderLink SH 1068";
	}

	return "ATTO SAS Controller";
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
          int _len_a0 = 1;
          struct esas2r_adapter * a = (struct esas2r_adapter *) malloc(_len_a0*sizeof(struct esas2r_adapter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__pcid0 = 1;
          a[_i0].pcid = (struct TYPE_2__ *) malloc(_len_a__i0__pcid0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_a__i0__pcid0; _j0++) {
            a[_i0].pcid->subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const char * benchRet = esas2r_get_model_name(a);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].pcid);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
