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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct sockaddr_s {scalar_t__ sa_family; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; } ;

/* Variables and functions */

int WINS_AddrCompare( struct sockaddr_s *addr1, struct sockaddr_s *addr2 ){
	if ( addr1->sa_family != addr2->sa_family ) {
		return -1;
	}

	if ( ( (struct sockaddr_in *)addr1 )->sin_addr.s_addr != ( (struct sockaddr_in *)addr2 )->sin_addr.s_addr ) {
		return -1;
	}

	if ( ( (struct sockaddr_in *)addr1 )->sin_port != ( (struct sockaddr_in *)addr2 )->sin_port ) {
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
          int _len_addr10 = 1;
          struct sockaddr_s * addr1 = (struct sockaddr_s *) malloc(_len_addr10*sizeof(struct sockaddr_s));
          for(int _i0 = 0; _i0 < _len_addr10; _i0++) {
            addr1[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr20 = 1;
          struct sockaddr_s * addr2 = (struct sockaddr_s *) malloc(_len_addr20*sizeof(struct sockaddr_s));
          for(int _i0 = 0; _i0 < _len_addr20; _i0++) {
            addr2[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = WINS_AddrCompare(addr1,addr2);
          printf("%d\n", benchRet); 
          free(addr1);
          free(addr2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addr10 = 65025;
          struct sockaddr_s * addr1 = (struct sockaddr_s *) malloc(_len_addr10*sizeof(struct sockaddr_s));
          for(int _i0 = 0; _i0 < _len_addr10; _i0++) {
            addr1[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr20 = 65025;
          struct sockaddr_s * addr2 = (struct sockaddr_s *) malloc(_len_addr20*sizeof(struct sockaddr_s));
          for(int _i0 = 0; _i0 < _len_addr20; _i0++) {
            addr2[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = WINS_AddrCompare(addr1,addr2);
          printf("%d\n", benchRet); 
          free(addr1);
          free(addr2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addr10 = 100;
          struct sockaddr_s * addr1 = (struct sockaddr_s *) malloc(_len_addr10*sizeof(struct sockaddr_s));
          for(int _i0 = 0; _i0 < _len_addr10; _i0++) {
            addr1[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr20 = 100;
          struct sockaddr_s * addr2 = (struct sockaddr_s *) malloc(_len_addr20*sizeof(struct sockaddr_s));
          for(int _i0 = 0; _i0 < _len_addr20; _i0++) {
            addr2[_i0].sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = WINS_AddrCompare(addr1,addr2);
          printf("%d\n", benchRet); 
          free(addr1);
          free(addr2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
