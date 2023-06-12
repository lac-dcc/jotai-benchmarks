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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int /*<<< orphan*/  nlp_state; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t
lpfc_cmpl_logo_plogi_issue(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
			   void *arg, uint32_t evt)
{
	return ndlp->nlp_state;
}

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
          int evt = 100;
        
          int _len_vport0 = 1;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
              vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ndlp0 = 1;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
              ndlp[_i0].nlp_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * arg;
        
          int benchRet = lpfc_cmpl_logo_plogi_issue(vport,ndlp,arg,evt);
          printf("%d\n", benchRet); 
          free(vport);
          free(ndlp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int evt = 255;
        
          int _len_vport0 = 65025;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
              vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ndlp0 = 65025;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
              ndlp[_i0].nlp_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * arg;
        
          int benchRet = lpfc_cmpl_logo_plogi_issue(vport,ndlp,arg,evt);
          printf("%d\n", benchRet); 
          free(vport);
          free(ndlp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int evt = 10;
        
          int _len_vport0 = 100;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
              vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ndlp0 = 100;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
              ndlp[_i0].nlp_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * arg;
        
          int benchRet = lpfc_cmpl_logo_plogi_issue(vport,ndlp,arg,evt);
          printf("%d\n", benchRet); 
          free(vport);
          free(ndlp);
        
        break;
    }
    // empty
    case 3:
    {
          int evt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vport0 = 1;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
              vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ndlp0 = 1;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
              ndlp[_i0].nlp_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * arg;
        
          int benchRet = lpfc_cmpl_logo_plogi_issue(vport,ndlp,arg,evt);
          printf("%d\n", benchRet); 
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
