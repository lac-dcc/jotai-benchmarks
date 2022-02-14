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

/* Variables and functions */
#define  SLIP_END 131 
#define  SLIP_ESC 130 
#define  SLIP_ESC_END 129 
#define  SLIP_ESC_ESC 128 

__attribute__((used)) static inline int slip_unesc(unsigned char c, unsigned char *buf, int *pos,
                             int *esc)
{
	int ret;

	switch(c){
	case SLIP_END:
		*esc = 0;
		ret=*pos;
		*pos=0;
		return(ret);
	case SLIP_ESC:
		*esc = 1;
		return(0);
	case SLIP_ESC_ESC:
		if(*esc){
			*esc = 0;
			c = SLIP_ESC;
		}
		break;
	case SLIP_ESC_END:
		if(*esc){
			*esc = 0;
			c = SLIP_END;
		}
		break;
	}
	buf[(*pos)++] = c;
	return(0);
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
          unsigned char c = 255;
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 65025;
          int * pos = (int *) malloc(_len_pos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_esc0 = 65025;
          int * esc = (int *) malloc(_len_esc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_esc0; _i0++) {
            esc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = slip_unesc(c,buf,pos,esc);
          printf("%d\n", benchRet); 
          free(buf);
          free(pos);
          free(esc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
