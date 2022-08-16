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
struct iscsi_tpg_attrib {int /*<<< orphan*/  login_keys_workaround; int /*<<< orphan*/  tpg_enabled_sendtargets; int /*<<< orphan*/  fabric_prot_type; int /*<<< orphan*/  t10_pi; int /*<<< orphan*/  default_erl; int /*<<< orphan*/  demo_mode_discovery; int /*<<< orphan*/  prod_mode_write_protect; int /*<<< orphan*/  demo_mode_write_protect; int /*<<< orphan*/  cache_dynamic_acls; int /*<<< orphan*/  generate_node_acls; int /*<<< orphan*/  default_cmdsn_depth; int /*<<< orphan*/  netif_timeout; int /*<<< orphan*/  login_timeout; int /*<<< orphan*/  authentication; } ;
struct iscsi_portal_group {struct iscsi_tpg_attrib tpg_attrib; } ;

/* Variables and functions */
 int /*<<< orphan*/  TA_AUTHENTICATION ; 
 int /*<<< orphan*/  TA_CACHE_DYNAMIC_ACLS ; 
 int /*<<< orphan*/  TA_DEFAULT_CMDSN_DEPTH ; 
 int /*<<< orphan*/  TA_DEFAULT_ERL ; 
 int /*<<< orphan*/  TA_DEFAULT_FABRIC_PROT_TYPE ; 
 int /*<<< orphan*/  TA_DEFAULT_LOGIN_KEYS_WORKAROUND ; 
 int /*<<< orphan*/  TA_DEFAULT_T10_PI ; 
 int /*<<< orphan*/  TA_DEFAULT_TPG_ENABLED_SENDTARGETS ; 
 int /*<<< orphan*/  TA_DEMO_MODE_DISCOVERY ; 
 int /*<<< orphan*/  TA_DEMO_MODE_WRITE_PROTECT ; 
 int /*<<< orphan*/  TA_GENERATE_NODE_ACLS ; 
 int /*<<< orphan*/  TA_LOGIN_TIMEOUT ; 
 int /*<<< orphan*/  TA_NETIF_TIMEOUT ; 
 int /*<<< orphan*/  TA_PROD_MODE_WRITE_PROTECT ; 

__attribute__((used)) static void iscsit_set_default_tpg_attribs(struct iscsi_portal_group *tpg)
{
	struct iscsi_tpg_attrib *a = &tpg->tpg_attrib;

	a->authentication = TA_AUTHENTICATION;
	a->login_timeout = TA_LOGIN_TIMEOUT;
	a->netif_timeout = TA_NETIF_TIMEOUT;
	a->default_cmdsn_depth = TA_DEFAULT_CMDSN_DEPTH;
	a->generate_node_acls = TA_GENERATE_NODE_ACLS;
	a->cache_dynamic_acls = TA_CACHE_DYNAMIC_ACLS;
	a->demo_mode_write_protect = TA_DEMO_MODE_WRITE_PROTECT;
	a->prod_mode_write_protect = TA_PROD_MODE_WRITE_PROTECT;
	a->demo_mode_discovery = TA_DEMO_MODE_DISCOVERY;
	a->default_erl = TA_DEFAULT_ERL;
	a->t10_pi = TA_DEFAULT_T10_PI;
	a->fabric_prot_type = TA_DEFAULT_FABRIC_PROT_TYPE;
	a->tpg_enabled_sendtargets = TA_DEFAULT_TPG_ENABLED_SENDTARGETS;
	a->login_keys_workaround = TA_DEFAULT_LOGIN_KEYS_WORKAROUND;
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
          int _len_tpg0 = 1;
          struct iscsi_portal_group * tpg = (struct iscsi_portal_group *) malloc(_len_tpg0*sizeof(struct iscsi_portal_group));
          for(int _i0 = 0; _i0 < _len_tpg0; _i0++) {
            tpg[_i0].tpg_attrib.login_keys_workaround = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.tpg_enabled_sendtargets = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.fabric_prot_type = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.t10_pi = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.default_erl = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.demo_mode_discovery = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.prod_mode_write_protect = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.demo_mode_write_protect = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.cache_dynamic_acls = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.generate_node_acls = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.default_cmdsn_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.netif_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.login_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].tpg_attrib.authentication = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iscsit_set_default_tpg_attribs(tpg);
          free(tpg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
