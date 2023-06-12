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
       0            empty\n\
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
typedef  int uint8_t ;
typedef  int uint16_t ;
typedef  scalar_t__ int16_t ;

/* Variables and functions */

int parse_name(uint8_t * msg, uint8_t * compressed, char * buf, int16_t len)
{
	uint16_t slen;		/* Length of current segment */
	uint8_t * cp;
	int clen = 0;		/* Total length of compressed name */
	int indirect = 0;	/* Set if indirection encountered */
	int nseg = 0;		/* Total number of segments in name */

	cp = compressed;

	for (;;)
	{
		slen = *cp++;	/* Length of this segment */

		if (!indirect) clen++;

		if ((slen & 0xc0) == 0xc0)
		{
			if (!indirect)
				clen++;
			indirect = 1;
			/* Follow indirection */
			cp = &msg[((slen & 0x3f)<<8) + *cp];
			slen = *cp++;
		}

		if (slen == 0)	/* zero length == all done */
			break;

		len -= slen + 1;

		if (len < 0) return -1;

		if (!indirect) clen += slen;

		while (slen-- != 0) *buf++ = (char)*cp++;
		*buf++ = '.';
		nseg++;
	}

	if (nseg == 0)
	{
		/* Root name; represent as single dot */
		*buf++ = '.';
		len--;
	}

	*buf++ = '\0';
	len--;

	return clen;	/* Length of compressed message */
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_msg0 = 1;
          int * msg = (int *) malloc(_len_msg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_compressed0 = 1;
          int * compressed = (int *) malloc(_len_compressed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_compressed0; _i0++) {
            compressed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = parse_name(msg,compressed,buf,len);
          printf("%d\n", benchRet); 
          free(msg);
          free(compressed);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
