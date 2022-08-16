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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int xmit_size; } ;
typedef  TYPE_1__ modem_info ;
struct TYPE_6__ {int /*<<< orphan*/ * mdmreg; } ;
typedef  TYPE_2__ atemu ;

/* Variables and functions */
 int ISDN_PROTO_L2_MAX ; 
#define  ISDN_PROTO_L2_V11019 135 
#define  ISDN_PROTO_L2_V11038 134 
#define  ISDN_PROTO_L2_V11096 133 
 int ISDN_SERIAL_XMIT_MAX ; 
#define  REG_L2PROT 132 
#define  REG_PLAN 131 
#define  REG_PSIZE 130 
#define  REG_SCREEN 129 
#define  REG_SI1I 128 

__attribute__((used)) static int
isdn_tty_check_ats(int mreg, int mval, modem_info *info, atemu *m)
{
	/* Some plausibility checks */
	switch (mreg) {
	case REG_L2PROT:
		if (mval > ISDN_PROTO_L2_MAX)
			return 1;
		break;
	case REG_PSIZE:
		if ((mval * 16) > ISDN_SERIAL_XMIT_MAX)
			return 1;
#ifdef CONFIG_ISDN_AUDIO
		if ((m->mdmreg[REG_SI1] & 1) && (mval > VBUFX))
			return 1;
#endif
		info->xmit_size = mval * 16;
		switch (m->mdmreg[REG_L2PROT]) {
		case ISDN_PROTO_L2_V11096:
		case ISDN_PROTO_L2_V11019:
		case ISDN_PROTO_L2_V11038:
			info->xmit_size /= 10;
		}
		break;
	case REG_SI1I:
	case REG_PLAN:
	case REG_SCREEN:
		/* readonly registers */
		return 1;
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
          int mreg = 100;
          int mval = 100;
          int _len_info0 = 1;
          struct TYPE_5__ * info = (struct TYPE_5__ *) malloc(_len_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].xmit_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          struct TYPE_6__ * m = (struct TYPE_6__ *) malloc(_len_m0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__mdmreg0 = 1;
          m[_i0].mdmreg = (int *) malloc(_len_m__i0__mdmreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__mdmreg0; _j0++) {
            m[_i0].mdmreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = isdn_tty_check_ats(mreg,mval,info,m);
          printf("%d\n", benchRet); 
          free(info);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].mdmreg);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
