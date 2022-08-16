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
struct fchs_s {scalar_t__ cat_info; } ;
typedef  enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;

/* Variables and functions */
 scalar_t__ FC_CAT_BA_ACC ; 
 scalar_t__ FC_CAT_BA_RJT ; 
 int FC_PARSE_FAILURE ; 
 int FC_PARSE_OK ; 

enum fc_parse_status
fc_abts_rsp_parse(struct fchs_s *fchs, int len)
{
	if ((fchs->cat_info == FC_CAT_BA_ACC)
	    || (fchs->cat_info == FC_CAT_BA_RJT))
		return FC_PARSE_OK;

	return FC_PARSE_FAILURE;
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
          int len = 100;
          int _len_fchs0 = 1;
          struct fchs_s * fchs = (struct fchs_s *) malloc(_len_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_fchs0; _i0++) {
            fchs[_i0].cat_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fc_parse_status benchRet = fc_abts_rsp_parse(fchs,len);
          free(fchs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int len = 10;
          int _len_fchs0 = 100;
          struct fchs_s * fchs = (struct fchs_s *) malloc(_len_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_fchs0; _i0++) {
            fchs[_i0].cat_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fc_parse_status benchRet = fc_abts_rsp_parse(fchs,len);
          free(fchs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
