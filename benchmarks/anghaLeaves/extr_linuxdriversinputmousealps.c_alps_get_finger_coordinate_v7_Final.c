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
struct input_mt_pos {unsigned char x; unsigned char y; } ;

/* Variables and functions */
#define  V7_PACKET_ID_MULTI 130 
#define  V7_PACKET_ID_NEW 129 
#define  V7_PACKET_ID_TWO 128 

__attribute__((used)) static void alps_get_finger_coordinate_v7(struct input_mt_pos *mt,
					  unsigned char *pkt,
					  unsigned char pkt_id)
{
	mt[0].x = ((pkt[2] & 0x80) << 4);
	mt[0].x |= ((pkt[2] & 0x3F) << 5);
	mt[0].x |= ((pkt[3] & 0x30) >> 1);
	mt[0].x |= (pkt[3] & 0x07);
	mt[0].y = (pkt[1] << 3) | (pkt[0] & 0x07);

	mt[1].x = ((pkt[3] & 0x80) << 4);
	mt[1].x |= ((pkt[4] & 0x80) << 3);
	mt[1].x |= ((pkt[4] & 0x3F) << 4);
	mt[1].y = ((pkt[5] & 0x80) << 3);
	mt[1].y |= ((pkt[5] & 0x3F) << 4);

	switch (pkt_id) {
	case V7_PACKET_ID_TWO:
		mt[1].x &= ~0x000F;
		mt[1].y |= 0x000F;
		/* Detect false-postive touches where x & y report max value */
		if (mt[1].y == 0x7ff && mt[1].x == 0xff0) {
			mt[1].x = 0;
			/* y gets set to 0 at the end of this function */
		}
		break;

	case V7_PACKET_ID_MULTI:
		mt[1].x &= ~0x003F;
		mt[1].y &= ~0x0020;
		mt[1].y |= ((pkt[4] & 0x02) << 4);
		mt[1].y |= 0x001F;
		break;

	case V7_PACKET_ID_NEW:
		mt[1].x &= ~0x003F;
		mt[1].x |= (pkt[0] & 0x20);
		mt[1].y |= 0x000F;
		break;
	}

	mt[0].y = 0x7FF - mt[0].y;
	mt[1].y = 0x7FF - mt[1].y;
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
          unsigned char pkt_id = 255;
          int _len_mt0 = 65025;
          struct input_mt_pos * mt = (struct input_mt_pos *) malloc(_len_mt0*sizeof(struct input_mt_pos));
          for(int _i0 = 0; _i0 < _len_mt0; _i0++) {
            mt[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        mt[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 65025;
          unsigned char * pkt = (unsigned char *) malloc(_len_pkt0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alps_get_finger_coordinate_v7(mt,pkt,pkt_id);
          free(mt);
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned char pkt_id = 10;
          int _len_mt0 = 100;
          struct input_mt_pos * mt = (struct input_mt_pos *) malloc(_len_mt0*sizeof(struct input_mt_pos));
          for(int _i0 = 0; _i0 < _len_mt0; _i0++) {
            mt[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        mt[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 100;
          unsigned char * pkt = (unsigned char *) malloc(_len_pkt0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alps_get_finger_coordinate_v7(mt,pkt,pkt_id);
          free(mt);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
