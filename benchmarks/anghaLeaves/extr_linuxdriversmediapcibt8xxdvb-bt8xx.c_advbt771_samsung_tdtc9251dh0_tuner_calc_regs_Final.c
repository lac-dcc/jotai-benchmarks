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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u8 ;
typedef  int u32 ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;

/* Variables and functions */
 int EINVAL ; 
 int IF_FREQUENCYx6 ; 

__attribute__((used)) static int advbt771_samsung_tdtc9251dh0_tuner_calc_regs(struct dvb_frontend *fe, u8 *pllbuf, int buf_len)
{
	struct dtv_frontend_properties *c = &fe->dtv_property_cache;
	u32 div;
	unsigned char bs = 0;
	unsigned char cp = 0;

	if (buf_len < 5) return -EINVAL;

	div = (((c->frequency + 83333) * 3) / 500000) + IF_FREQUENCYx6;

	if (c->frequency < 150000000)
		cp = 0xB4;
	else if (c->frequency < 173000000)
		cp = 0xBC;
	else if (c->frequency < 250000000)
		cp = 0xB4;
	else if (c->frequency < 400000000)
		cp = 0xBC;
	else if (c->frequency < 420000000)
		cp = 0xF4;
	else if (c->frequency < 470000000)
		cp = 0xFC;
	else if (c->frequency < 600000000)
		cp = 0xBC;
	else if (c->frequency < 730000000)
		cp = 0xF4;
	else
		cp = 0xFC;

	if (c->frequency < 150000000)
		bs = 0x01;
	else if (c->frequency < 173000000)
		bs = 0x01;
	else if (c->frequency < 250000000)
		bs = 0x02;
	else if (c->frequency < 400000000)
		bs = 0x02;
	else if (c->frequency < 420000000)
		bs = 0x02;
	else if (c->frequency < 470000000)
		bs = 0x02;
	else
		bs = 0x08;

	pllbuf[0] = 0x61;
	pllbuf[1] = div >> 8;
	pllbuf[2] = div & 0xff;
	pllbuf[3] = cp;
	pllbuf[4] = bs;

	return 5;
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

    // big-arr
    case 0:
    {
          int buf_len = 255;
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pllbuf0 = 65025;
          int * pllbuf = (int *) malloc(_len_pllbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pllbuf0; _i0++) {
            pllbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = advbt771_samsung_tdtc9251dh0_tuner_calc_regs(fe,pllbuf,buf_len);
          printf("%d\n", benchRet); 
          free(fe);
          free(pllbuf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int buf_len = 10;
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pllbuf0 = 100;
          int * pllbuf = (int *) malloc(_len_pllbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pllbuf0; _i0++) {
            pllbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = advbt771_samsung_tdtc9251dh0_tuner_calc_regs(fe,pllbuf,buf_len);
          printf("%d\n", benchRet); 
          free(fe);
          free(pllbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
