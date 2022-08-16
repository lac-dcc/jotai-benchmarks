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
       1            big-arr-10x\n\
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
 int EAGAIN ; 
 int EFAULT ; 
 int EINVAL ; 
 int EIO ; 
 int EPERM ; 
#define  HV_EBADALIGN 132 
#define  HV_EINVAL 131 
#define  HV_ENOACCESS 130 
#define  HV_ENORADDR 129 
#define  HV_EWOULDBLOCK 128 

__attribute__((used)) static char *dax_hv_errno(unsigned long hv_ret, int *ret)
{
	switch (hv_ret) {
	case HV_EBADALIGN:
		*ret = -EFAULT;
		return "HV_EBADALIGN";
	case HV_ENORADDR:
		*ret = -EFAULT;
		return "HV_ENORADDR";
	case HV_EINVAL:
		*ret = -EINVAL;
		return "HV_EINVAL";
	case HV_EWOULDBLOCK:
		*ret = -EAGAIN;
		return "HV_EWOULDBLOCK";
	case HV_ENOACCESS:
		*ret = -EPERM;
		return "HV_ENOACCESS";
	default:
		break;
	}

	*ret = -EIO;
	return "UNKNOWN";
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
          unsigned long hv_ret = 100;
          int _len_ret0 = 1;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = dax_hv_errno(hv_ret,ret);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ret);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long hv_ret = 10;
          int _len_ret0 = 100;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = dax_hv_errno(hv_ret,ret);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
