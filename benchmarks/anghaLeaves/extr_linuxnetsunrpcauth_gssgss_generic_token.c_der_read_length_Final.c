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

/* Variables and functions */
 unsigned char SIZEOF_INT ; 

__attribute__((used)) static int
der_read_length(unsigned char **buf, int *bufsize)
{
	unsigned char sf;
	int ret;

	if (*bufsize < 1)
		return -1;
	sf = *(*buf)++;
	(*bufsize)--;
	if (sf & 0x80) {
		if ((sf &= 0x7f) > ((*bufsize)-1))
			return -1;
		if (sf > SIZEOF_INT)
			return -1;
		ret = 0;
		for (; sf; sf--) {
			ret = (ret<<8) + (*(*buf)++);
			(*bufsize)--;
		}
	} else {
		ret = sf;
	}

	return ret;
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
          int _len_buf0 = 1;
          unsigned char ** buf = (unsigned char **) malloc(_len_buf0*sizeof(unsigned char *));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            int _len_buf1 = 1;
            buf[_i0] = (unsigned char *) malloc(_len_buf1*sizeof(unsigned char));
            for(int _i1 = 0; _i1 < _len_buf1; _i1++) {
              buf[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_bufsize0 = 1;
          int * bufsize = (int *) malloc(_len_bufsize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bufsize0; _i0++) {
            bufsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = der_read_length(buf,bufsize);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_buf0; i1++) {
            int _len_buf1 = 1;
              free(buf[i1]);
          }
          free(buf);
          free(bufsize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
