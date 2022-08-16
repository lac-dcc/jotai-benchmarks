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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  scalar_t__ u8 ;
typedef  scalar_t__ u16 ;

/* Variables and functions */
 scalar_t__ DEF_MSS ; 
 scalar_t__ IPV4_HDR_LEN ; 
 scalar_t__ IPV6_HDR_LEN ; 
 scalar_t__ TCP_HDR_LEN ; 

__attribute__((used)) static u16 qedi_calc_mss(u16 pmtu, u8 is_ipv6, u8 tcp_ts_en, u8 vlan_en)
{
	u16 mss = 0;
	u16 hdrs = TCP_HDR_LEN;

	if (is_ipv6)
		hdrs += IPV6_HDR_LEN;
	else
		hdrs += IPV4_HDR_LEN;

	mss = pmtu - hdrs;

	if (!mss)
		mss = DEF_MSS;

	return mss;
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
          long pmtu = 100;
          long is_ipv6 = 100;
          long tcp_ts_en = 100;
          long vlan_en = 100;
          long benchRet = qedi_calc_mss(pmtu,is_ipv6,tcp_ts_en,vlan_en);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long pmtu = 255;
          long is_ipv6 = 255;
          long tcp_ts_en = 255;
          long vlan_en = 255;
          long benchRet = qedi_calc_mss(pmtu,is_ipv6,tcp_ts_en,vlan_en);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pmtu = 10;
          long is_ipv6 = 10;
          long tcp_ts_en = 10;
          long vlan_en = 10;
          long benchRet = qedi_calc_mss(pmtu,is_ipv6,tcp_ts_en,vlan_en);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
