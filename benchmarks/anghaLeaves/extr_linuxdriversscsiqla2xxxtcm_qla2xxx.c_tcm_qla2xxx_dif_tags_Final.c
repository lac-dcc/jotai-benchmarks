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
typedef  int /*<<< orphan*/  uint16_t ;
struct se_cmd {int prot_checks; } ;
struct qla_tgt_cmd {struct se_cmd se_cmd; } ;

/* Variables and functions */
 int /*<<< orphan*/  PO_DISABLE_GUARD_CHECK ; 
 int /*<<< orphan*/  PO_DIS_APP_TAG_VALD ; 
 int TARGET_DIF_CHECK_APPTAG ; 
 int TARGET_DIF_CHECK_GUARD ; 

__attribute__((used)) static int tcm_qla2xxx_dif_tags(struct qla_tgt_cmd *cmd,
    uint16_t *pfw_prot_opts)
{
	struct se_cmd *se_cmd = &cmd->se_cmd;

	if (!(se_cmd->prot_checks & TARGET_DIF_CHECK_GUARD))
		*pfw_prot_opts |= PO_DISABLE_GUARD_CHECK;

	if (!(se_cmd->prot_checks & TARGET_DIF_CHECK_APPTAG))
		*pfw_prot_opts |= PO_DIS_APP_TAG_VALD;

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
          int _len_cmd0 = 1;
          struct qla_tgt_cmd * cmd = (struct qla_tgt_cmd *) malloc(_len_cmd0*sizeof(struct qla_tgt_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].se_cmd.prot_checks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfw_prot_opts0 = 1;
          int * pfw_prot_opts = (int *) malloc(_len_pfw_prot_opts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pfw_prot_opts0; _i0++) {
            pfw_prot_opts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcm_qla2xxx_dif_tags(cmd,pfw_prot_opts);
          printf("%d\n", benchRet); 
          free(cmd);
          free(pfw_prot_opts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
