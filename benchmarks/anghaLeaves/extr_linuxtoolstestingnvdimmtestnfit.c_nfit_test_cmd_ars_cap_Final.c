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
struct nd_cmd_ars_status {int dummy; } ;
struct nd_cmd_ars_cap {int max_ars_out; int status; int /*<<< orphan*/  clear_err_unit; } ;
struct nd_ars_record {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int ND_ARS_PERSISTENT ; 
 int ND_ARS_VOLATILE ; 
 int /*<<< orphan*/  NFIT_TEST_CLEAR_ERR_UNIT ; 
 int SZ_4K ; 

__attribute__((used)) static int nfit_test_cmd_ars_cap(struct nd_cmd_ars_cap *nd_cmd,
		unsigned int buf_len)
{
	int ars_recs;

	if (buf_len < sizeof(*nd_cmd))
		return -EINVAL;

	/* for testing, only store up to n records that fit within 4k */
	ars_recs = SZ_4K / sizeof(struct nd_ars_record);

	nd_cmd->max_ars_out = sizeof(struct nd_cmd_ars_status)
		+ ars_recs * sizeof(struct nd_ars_record);
	nd_cmd->status = (ND_ARS_PERSISTENT | ND_ARS_VOLATILE) << 16;
	nd_cmd->clear_err_unit = NFIT_TEST_CLEAR_ERR_UNIT;

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
          unsigned int buf_len = 100;
          int _len_nd_cmd0 = 1;
          struct nd_cmd_ars_cap * nd_cmd = (struct nd_cmd_ars_cap *) malloc(_len_nd_cmd0*sizeof(struct nd_cmd_ars_cap));
          for(int _i0 = 0; _i0 < _len_nd_cmd0; _i0++) {
            nd_cmd[_i0].max_ars_out = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].clear_err_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfit_test_cmd_ars_cap(nd_cmd,buf_len);
          printf("%d\n", benchRet); 
          free(nd_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
