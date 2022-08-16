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
typedef  enum ip_defrag_users { ____Placeholder_ip_defrag_users } ip_defrag_users ;

/* Variables and functions */
 int IP_DEFRAG_VS_FWD ; 
 int IP_DEFRAG_VS_IN ; 
 int IP_DEFRAG_VS_OUT ; 
 unsigned int NF_INET_FORWARD ; 
 unsigned int NF_INET_LOCAL_IN ; 

__attribute__((used)) static inline enum ip_defrag_users ip_vs_defrag_user(unsigned int hooknum)
{
	if (NF_INET_LOCAL_IN == hooknum)
		return IP_DEFRAG_VS_IN;
	if (NF_INET_FORWARD == hooknum)
		return IP_DEFRAG_VS_FWD;
	return IP_DEFRAG_VS_OUT;
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
          unsigned int hooknum = 100;
          enum ip_defrag_users benchRet = ip_vs_defrag_user(hooknum);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int hooknum = 255;
          enum ip_defrag_users benchRet = ip_vs_defrag_user(hooknum);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int hooknum = 10;
          enum ip_defrag_users benchRet = ip_vs_defrag_user(hooknum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
