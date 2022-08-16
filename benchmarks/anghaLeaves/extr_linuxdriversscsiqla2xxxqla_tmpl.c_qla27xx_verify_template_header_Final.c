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
struct qla27xx_fwdt_template {scalar_t__ template_type; } ;

/* Variables and functions */
 scalar_t__ TEMPLATE_TYPE_FWDUMP ; 

__attribute__((used)) static inline int
qla27xx_verify_template_header(struct qla27xx_fwdt_template *tmp)
{
	return tmp->template_type == TEMPLATE_TYPE_FWDUMP;
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
          int _len_tmp0 = 1;
          struct qla27xx_fwdt_template * tmp = (struct qla27xx_fwdt_template *) malloc(_len_tmp0*sizeof(struct qla27xx_fwdt_template));
          for(int _i0 = 0; _i0 < _len_tmp0; _i0++) {
            tmp[_i0].template_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla27xx_verify_template_header(tmp);
          printf("%d\n", benchRet); 
          free(tmp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_tmp0 = 100;
          struct qla27xx_fwdt_template * tmp = (struct qla27xx_fwdt_template *) malloc(_len_tmp0*sizeof(struct qla27xx_fwdt_template));
          for(int _i0 = 0; _i0 < _len_tmp0; _i0++) {
            tmp[_i0].template_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qla27xx_verify_template_header(tmp);
          printf("%d\n", benchRet); 
          free(tmp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
