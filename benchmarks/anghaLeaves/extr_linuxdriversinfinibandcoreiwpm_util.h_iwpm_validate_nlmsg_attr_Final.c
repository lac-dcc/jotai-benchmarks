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
struct nlattr {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int iwpm_validate_nlmsg_attr(struct nlattr *nltb[],
					   int nla_count)
{
	int i;
	for (i = 1; i < nla_count; i++) {
		if (!nltb[i])
			return -EINVAL;
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

    // big-arr
    case 0:
    {
          int nla_count = 255;
          int _len_nltb0 = 65025;
          struct nlattr ** nltb = (struct nlattr **) malloc(_len_nltb0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_nltb0; _i0++) {
            int _len_nltb1 = 1;
            nltb[_i0] = (struct nlattr *) malloc(_len_nltb1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_nltb1; _i1++) {
              nltb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = iwpm_validate_nlmsg_attr(nltb,nla_count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_nltb0; i1++) {
            int _len_nltb1 = 1;
              free(nltb[i1]);
          }
          free(nltb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int nla_count = 10;
          int _len_nltb0 = 100;
          struct nlattr ** nltb = (struct nlattr **) malloc(_len_nltb0*sizeof(struct nlattr *));
          for(int _i0 = 0; _i0 < _len_nltb0; _i0++) {
            int _len_nltb1 = 1;
            nltb[_i0] = (struct nlattr *) malloc(_len_nltb1*sizeof(struct nlattr));
            for(int _i1 = 0; _i1 < _len_nltb1; _i1++) {
              nltb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = iwpm_validate_nlmsg_attr(nltb,nla_count);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_nltb0; i1++) {
            int _len_nltb1 = 1;
              free(nltb[i1]);
          }
          free(nltb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
