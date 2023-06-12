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
       0            empty\n\
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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ fc_myDID; TYPE_1__* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; } ;
struct TYPE_6__ {scalar_t__ domain; scalar_t__ area; scalar_t__ id; } ;
struct TYPE_7__ {scalar_t__ word; TYPE_2__ b; } ;
struct TYPE_8__ {TYPE_3__ un; } ;
struct TYPE_5__ {scalar_t__ fc_topology; } ;
typedef  TYPE_4__ D_ID ;

/* Variables and functions */
 scalar_t__ Bcast_DID ; 
 scalar_t__ LPFC_TOPOLOGY_LOOP ; 

__attribute__((used)) static int
lpfc_matchdid(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
	      uint32_t did)
{
	D_ID mydid, ndlpdid, matchdid;

	if (did == Bcast_DID)
		return 0;

	/* First check for Direct match */
	if (ndlp->nlp_DID == did)
		return 1;

	/* Next check for area/domain identically equals 0 match */
	mydid.un.word = vport->fc_myDID;
	if ((mydid.un.b.domain == 0) && (mydid.un.b.area == 0)) {
		return 0;
	}

	matchdid.un.word = did;
	ndlpdid.un.word = ndlp->nlp_DID;
	if (matchdid.un.b.id == ndlpdid.un.b.id) {
		if ((mydid.un.b.domain == matchdid.un.b.domain) &&
		    (mydid.un.b.area == matchdid.un.b.area)) {
			/* This code is supposed to match the ID
			 * for a private loop device that is
			 * connect to fl_port. But we need to
			 * check that the port did not just go
			 * from pt2pt to fabric or we could end
			 * up matching ndlp->nlp_DID 000001 to
			 * fabric DID 0x20101
			 */
			if ((ndlpdid.un.b.domain == 0) &&
			    (ndlpdid.un.b.area == 0)) {
				if (ndlpdid.un.b.id &&
				    vport->phba->fc_topology ==
				    LPFC_TOPOLOGY_LOOP)
					return 1;
			}
			return 0;
		}

		matchdid.un.word = ndlp->nlp_DID;
		if ((mydid.un.b.domain == ndlpdid.un.b.domain) &&
		    (mydid.un.b.area == ndlpdid.un.b.area)) {
			if ((matchdid.un.b.domain == 0) &&
			    (matchdid.un.b.area == 0)) {
				if (matchdid.un.b.id)
					return 1;
			}
		}
	}
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          long did = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vport0 = 1;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
              vport[_i0].fc_myDID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vport__i0__phba0 = 1;
          vport[_i0].phba = (struct TYPE_5__ *) malloc(_len_vport__i0__phba0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_vport__i0__phba0; _j0++) {
              vport[_i0].phba->fc_topology = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ndlp0 = 1;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
              ndlp[_i0].nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = lpfc_matchdid(vport,ndlp,did);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vport0; _aux++) {
          free(vport[_aux].phba);
          }
          free(vport);
          free(ndlp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
