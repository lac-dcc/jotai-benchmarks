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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  default_erl; } ;
struct iscsi_portal_group {TYPE_1__ tpg_attrib; } ;
struct iscsi_node_attrib {int /*<<< orphan*/  default_erl; int /*<<< orphan*/  random_r2t_offsets; int /*<<< orphan*/  random_datain_seq_offsets; int /*<<< orphan*/  random_datain_pdu_offsets; int /*<<< orphan*/  nopin_response_timeout; int /*<<< orphan*/  nopin_timeout; int /*<<< orphan*/  dataout_timeout_retries; int /*<<< orphan*/  dataout_timeout; } ;
struct iscsi_node_acl {struct iscsi_node_attrib node_attrib; } ;

/* Variables and functions */
 int /*<<< orphan*/  NA_DATAOUT_TIMEOUT ; 
 int /*<<< orphan*/  NA_DATAOUT_TIMEOUT_RETRIES ; 
 int /*<<< orphan*/  NA_NOPIN_RESPONSE_TIMEOUT ; 
 int /*<<< orphan*/  NA_NOPIN_TIMEOUT ; 
 int /*<<< orphan*/  NA_RANDOM_DATAIN_PDU_OFFSETS ; 
 int /*<<< orphan*/  NA_RANDOM_DATAIN_SEQ_OFFSETS ; 
 int /*<<< orphan*/  NA_RANDOM_R2T_OFFSETS ; 

void iscsit_set_default_node_attribues(
	struct iscsi_node_acl *acl,
	struct iscsi_portal_group *tpg)
{
	struct iscsi_node_attrib *a = &acl->node_attrib;

	a->dataout_timeout = NA_DATAOUT_TIMEOUT;
	a->dataout_timeout_retries = NA_DATAOUT_TIMEOUT_RETRIES;
	a->nopin_timeout = NA_NOPIN_TIMEOUT;
	a->nopin_response_timeout = NA_NOPIN_RESPONSE_TIMEOUT;
	a->random_datain_pdu_offsets = NA_RANDOM_DATAIN_PDU_OFFSETS;
	a->random_datain_seq_offsets = NA_RANDOM_DATAIN_SEQ_OFFSETS;
	a->random_r2t_offsets = NA_RANDOM_R2T_OFFSETS;
	a->default_erl = tpg->tpg_attrib.default_erl;
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
          int _len_acl0 = 1;
          struct iscsi_node_acl * acl = (struct iscsi_node_acl *) malloc(_len_acl0*sizeof(struct iscsi_node_acl));
          for(int _i0 = 0; _i0 < _len_acl0; _i0++) {
            acl[_i0].node_attrib.default_erl = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.random_r2t_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.random_datain_seq_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.random_datain_pdu_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.nopin_response_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.nopin_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.dataout_timeout_retries = ((-2 * (next_i()%2)) + 1) * next_i();
        acl[_i0].node_attrib.dataout_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tpg0 = 1;
          struct iscsi_portal_group * tpg = (struct iscsi_portal_group *) malloc(_len_tpg0*sizeof(struct iscsi_portal_group));
          for(int _i0 = 0; _i0 < _len_tpg0; _i0++) {
            tpg[_i0].tpg_attrib.default_erl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iscsit_set_default_node_attribues(acl,tpg);
          free(acl);
          free(tpg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
