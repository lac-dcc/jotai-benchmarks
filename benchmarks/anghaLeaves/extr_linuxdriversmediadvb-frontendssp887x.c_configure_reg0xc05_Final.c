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
typedef  int u16 ;
struct dtv_frontend_properties {int modulation; int hierarchy; int code_rate_HP; } ;

/* Variables and functions */
 int EINVAL ; 
#define  FEC_1_2 142 
#define  FEC_2_3 141 
#define  FEC_3_4 140 
#define  FEC_5_6 139 
#define  FEC_7_8 138 
#define  FEC_AUTO 137 
#define  HIERARCHY_1 136 
#define  HIERARCHY_2 135 
#define  HIERARCHY_4 134 
#define  HIERARCHY_AUTO 133 
#define  HIERARCHY_NONE 132 
#define  QAM_16 131 
#define  QAM_64 130 
#define  QAM_AUTO 129 
#define  QPSK 128 

__attribute__((used)) static int configure_reg0xc05(struct dtv_frontend_properties *p, u16 *reg0xc05)
{
	int known_parameters = 1;

	*reg0xc05 = 0x000;

	switch (p->modulation) {
	case QPSK:
		break;
	case QAM_16:
		*reg0xc05 |= (1 << 10);
		break;
	case QAM_64:
		*reg0xc05 |= (2 << 10);
		break;
	case QAM_AUTO:
		known_parameters = 0;
		break;
	default:
		return -EINVAL;
	}

	switch (p->hierarchy) {
	case HIERARCHY_NONE:
		break;
	case HIERARCHY_1:
		*reg0xc05 |= (1 << 7);
		break;
	case HIERARCHY_2:
		*reg0xc05 |= (2 << 7);
		break;
	case HIERARCHY_4:
		*reg0xc05 |= (3 << 7);
		break;
	case HIERARCHY_AUTO:
		known_parameters = 0;
		break;
	default:
		return -EINVAL;
	}

	switch (p->code_rate_HP) {
	case FEC_1_2:
		break;
	case FEC_2_3:
		*reg0xc05 |= (1 << 3);
		break;
	case FEC_3_4:
		*reg0xc05 |= (2 << 3);
		break;
	case FEC_5_6:
		*reg0xc05 |= (3 << 3);
		break;
	case FEC_7_8:
		*reg0xc05 |= (4 << 3);
		break;
	case FEC_AUTO:
		known_parameters = 0;
		break;
	default:
		return -EINVAL;
	}

	if (known_parameters)
		*reg0xc05 |= (2 << 1);	/* use specified parameters */
	else
		*reg0xc05 |= (1 << 1);	/* enable autoprobing */

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
          int _len_p0 = 1;
          struct dtv_frontend_properties * p = (struct dtv_frontend_properties *) malloc(_len_p0*sizeof(struct dtv_frontend_properties));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].hierarchy = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].code_rate_HP = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0xc050 = 1;
          int * reg0xc05 = (int *) malloc(_len_reg0xc050*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0xc050; _i0++) {
            reg0xc05[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = configure_reg0xc05(p,reg0xc05);
          printf("%d\n", benchRet); 
          free(p);
          free(reg0xc05);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
