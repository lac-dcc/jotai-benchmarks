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

/* Variables and functions */

int
GetSockBufSize(int sockfd, size_t *rsize, size_t *ssize)
{
#ifdef SO_SNDBUF
	int rc = -1;
	int opt;
	int optsize;

	if (ssize != NULL) {
		opt = 0;
		optsize = sizeof(opt);
		rc = getsockopt(sockfd, SOL_SOCKET, SO_SNDBUF, (char *) &opt, &optsize);
		if (rc == 0)
			*ssize = (size_t) opt;
		else
			*ssize = 0;
	}
	if (rsize != NULL) {
		opt = 0;
		optsize = sizeof(opt);
		rc = getsockopt(sockfd, SOL_SOCKET, SO_RCVBUF, (char *) &opt, &optsize);
		if (rc == 0)
			*rsize = (size_t) opt;
		else
			*rsize = 0;
	}
	return (rc);
#else
	if (ssize != NULL)
		*ssize = 0;
	if (rsize != NULL)
		*rsize = 0;
	return (-1);
#endif
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
          int sockfd = 100;
          int _len_rsize0 = 1;
          unsigned long * rsize = (unsigned long *) malloc(_len_rsize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rsize0; _i0++) {
            rsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssize0 = 1;
          unsigned long * ssize = (unsigned long *) malloc(_len_ssize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ssize0; _i0++) {
            ssize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetSockBufSize(sockfd,rsize,ssize);
          printf("%d\n", benchRet); 
          free(rsize);
          free(ssize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sockfd = 255;
          int _len_rsize0 = 65025;
          unsigned long * rsize = (unsigned long *) malloc(_len_rsize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rsize0; _i0++) {
            rsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssize0 = 65025;
          unsigned long * ssize = (unsigned long *) malloc(_len_ssize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ssize0; _i0++) {
            ssize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetSockBufSize(sockfd,rsize,ssize);
          printf("%d\n", benchRet); 
          free(rsize);
          free(ssize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sockfd = 10;
          int _len_rsize0 = 100;
          unsigned long * rsize = (unsigned long *) malloc(_len_rsize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rsize0; _i0++) {
            rsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssize0 = 100;
          unsigned long * ssize = (unsigned long *) malloc(_len_ssize0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ssize0; _i0++) {
            ssize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetSockBufSize(sockfd,rsize,ssize);
          printf("%d\n", benchRet); 
          free(rsize);
          free(ssize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
