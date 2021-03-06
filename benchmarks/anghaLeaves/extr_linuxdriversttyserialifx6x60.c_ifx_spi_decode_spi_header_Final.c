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
typedef  int u16 ;

/* Variables and functions */
 unsigned char IFX_SPI_CTS_BIT ; 
 int IFX_SPI_HEADER_0 ; 
 int IFX_SPI_HEADER_F ; 
 unsigned char IFX_SPI_MORE_BIT ; 

__attribute__((used)) static int ifx_spi_decode_spi_header(unsigned char *buffer, int *length,
			unsigned char *more, unsigned char *received_cts)
{
	u16 h1;
	u16 h2;
	u16 *in_buffer = (u16 *)buffer;

	h1 = *in_buffer;
	h2 = *(in_buffer+1);

	if (h1 == 0 && h2 == 0) {
		*received_cts = 0;
		*more = 0;
		return IFX_SPI_HEADER_0;
	} else if (h1 == 0xffff && h2 == 0xffff) {
		*more = 0;
		/* spi_slave_cts remains as it was */
		return IFX_SPI_HEADER_F;
	}

	*length = h1 & 0xfff;	/* upper bits of byte are flags */
	*more = (buffer[1] >> IFX_SPI_MORE_BIT) & 1;
	*received_cts = (buffer[3] >> IFX_SPI_CTS_BIT) & 1;
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

    // big-arr
    case 0:
    {
          int _len_buffer0 = 65025;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 65025;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_more0 = 65025;
          unsigned char * more = (unsigned char *) malloc(_len_more0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_more0; _i0++) {
            more[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_received_cts0 = 65025;
          unsigned char * received_cts = (unsigned char *) malloc(_len_received_cts0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_received_cts0; _i0++) {
            received_cts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ifx_spi_decode_spi_header(buffer,length,more,received_cts);
          printf("%d\n", benchRet); 
          free(buffer);
          free(length);
          free(more);
          free(received_cts);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_buffer0 = 100;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_length0 = 100;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_more0 = 100;
          unsigned char * more = (unsigned char *) malloc(_len_more0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_more0; _i0++) {
            more[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_received_cts0 = 100;
          unsigned char * received_cts = (unsigned char *) malloc(_len_received_cts0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_received_cts0; _i0++) {
            received_cts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ifx_spi_decode_spi_header(buffer,length,more,received_cts);
          printf("%d\n", benchRet); 
          free(buffer);
          free(length);
          free(more);
          free(received_cts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
