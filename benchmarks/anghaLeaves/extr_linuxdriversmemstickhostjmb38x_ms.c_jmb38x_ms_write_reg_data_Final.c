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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct jmb38x_ms_host {int io_pos; int* io_word; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int jmb38x_ms_write_reg_data(struct jmb38x_ms_host *host,
					     unsigned char *buf,
					     unsigned int length)
{
	unsigned int off = 0;

	while (host->io_pos < 4 && length) {
		host->io_word[0] &= ~(0xff << (host->io_pos * 8));
		host->io_word[0] |=  buf[off++] << (host->io_pos * 8);
		host->io_pos++;
		length--;
	}

	if (!length)
		return off;

	while (host->io_pos < 8 && length) {
		host->io_word[1] &= ~(0xff << (host->io_pos * 8));
		host->io_word[1] |=  buf[off++] << (host->io_pos * 8);
		host->io_pos++;
		length--;
	}

	return off;
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
          unsigned int length = 100;
          int _len_host0 = 1;
          struct jmb38x_ms_host * host = (struct jmb38x_ms_host *) malloc(_len_host0*sizeof(struct jmb38x_ms_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].io_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__io_word0 = 1;
          host[_i0].io_word = (int *) malloc(_len_host__i0__io_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__io_word0; _j0++) {
            host[_i0].io_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = jmb38x_ms_write_reg_data(host,buf,length);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].io_word);
          }
          free(host);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int length = 255;
          int _len_host0 = 65025;
          struct jmb38x_ms_host * host = (struct jmb38x_ms_host *) malloc(_len_host0*sizeof(struct jmb38x_ms_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].io_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__io_word0 = 1;
          host[_i0].io_word = (int *) malloc(_len_host__i0__io_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__io_word0; _j0++) {
            host[_i0].io_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = jmb38x_ms_write_reg_data(host,buf,length);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].io_word);
          }
          free(host);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int length = 10;
          int _len_host0 = 100;
          struct jmb38x_ms_host * host = (struct jmb38x_ms_host *) malloc(_len_host0*sizeof(struct jmb38x_ms_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].io_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__io_word0 = 1;
          host[_i0].io_word = (int *) malloc(_len_host__i0__io_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__io_word0; _j0++) {
            host[_i0].io_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = jmb38x_ms_write_reg_data(host,buf,length);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].io_word);
          }
          free(host);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
