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
typedef  int /*<<< orphan*/  u8 ;
typedef  scalar_t__ u32 ;

/* Variables and functions */
 scalar_t__ BEISCSI_IP_TYPE_V6 ; 
 scalar_t__ IP_V4_LEN ; 
 scalar_t__ IP_V6_LEN ; 

__attribute__((used)) static inline bool beiscsi_if_zero_ip(u8 *ip, u32 ip_type)
{
	u32 len;

	len = (ip_type < BEISCSI_IP_TYPE_V6) ? IP_V4_LEN : IP_V6_LEN;
	while (len && !ip[len - 1])
		len--;
	return (len == 0);
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
          long ip_type = 100;
          int _len_ip0 = 1;
          int * ip = (int *) malloc(_len_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = beiscsi_if_zero_ip(ip,ip_type);
          printf("%d\n", benchRet); 
          free(ip);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ip_type = 255;
          int _len_ip0 = 65025;
          int * ip = (int *) malloc(_len_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = beiscsi_if_zero_ip(ip,ip_type);
          printf("%d\n", benchRet); 
          free(ip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ip_type = 10;
          int _len_ip0 = 100;
          int * ip = (int *) malloc(_len_ip0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = beiscsi_if_zero_ip(ip,ip_type);
          printf("%d\n", benchRet); 
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
