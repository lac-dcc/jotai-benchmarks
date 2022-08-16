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
typedef  int /*<<< orphan*/  u8 ;
struct qed_hwfn {int dummy; } ;
typedef  enum qed_load_req_force { ____Placeholder_qed_load_req_force } qed_load_req_force ;

/* Variables and functions */
 int /*<<< orphan*/  LOAD_REQ_FORCE_ALL ; 
 int /*<<< orphan*/  LOAD_REQ_FORCE_NONE ; 
 int /*<<< orphan*/  LOAD_REQ_FORCE_PF ; 
#define  QED_LOAD_REQ_FORCE_ALL 130 
#define  QED_LOAD_REQ_FORCE_NONE 129 
#define  QED_LOAD_REQ_FORCE_PF 128 

__attribute__((used)) static void qed_get_mfw_force_cmd(struct qed_hwfn *p_hwfn,

				  enum qed_load_req_force force_cmd,
				  u8 *p_mfw_force_cmd)
{
	switch (force_cmd) {
	case QED_LOAD_REQ_FORCE_NONE:
		*p_mfw_force_cmd = LOAD_REQ_FORCE_NONE;
		break;
	case QED_LOAD_REQ_FORCE_PF:
		*p_mfw_force_cmd = LOAD_REQ_FORCE_PF;
		break;
	case QED_LOAD_REQ_FORCE_ALL:
		*p_mfw_force_cmd = LOAD_REQ_FORCE_ALL;
		break;
	}
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
          enum qed_load_req_force force_cmd = 0;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
            p_hwfn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_mfw_force_cmd0 = 1;
          int * p_mfw_force_cmd = (int *) malloc(_len_p_mfw_force_cmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_mfw_force_cmd0; _i0++) {
            p_mfw_force_cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_get_mfw_force_cmd(p_hwfn,force_cmd,p_mfw_force_cmd);
          free(p_hwfn);
          free(p_mfw_force_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
