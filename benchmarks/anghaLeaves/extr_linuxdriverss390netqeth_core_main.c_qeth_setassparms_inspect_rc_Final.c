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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_8__ {int return_code; } ;
struct TYPE_5__ {int return_code; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct TYPE_7__ {TYPE_2__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_4__ hdr; TYPE_3__ data; } ;

/* Variables and functions */

__attribute__((used)) static int qeth_setassparms_inspect_rc(struct qeth_ipa_cmd *cmd)
{
	if (!cmd->hdr.return_code)
		cmd->hdr.return_code = cmd->data.setassparms.hdr.return_code;
	return cmd->hdr.return_code;
}

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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_cmd0 = 65025;
          struct qeth_ipa_cmd * cmd = (struct qeth_ipa_cmd *) malloc(_len_cmd0*sizeof(struct qeth_ipa_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].hdr.return_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          cmd[_i0].data.setassparms.hdr.return_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = qeth_setassparms_inspect_rc(cmd);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_cmd0 = 100;
          struct qeth_ipa_cmd * cmd = (struct qeth_ipa_cmd *) malloc(_len_cmd0*sizeof(struct qeth_ipa_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].hdr.return_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          cmd[_i0].data.setassparms.hdr.return_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = qeth_setassparms_inspect_rc(cmd);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int _len_cmd0 = 1;
          struct qeth_ipa_cmd * cmd = (struct qeth_ipa_cmd *) malloc(_len_cmd0*sizeof(struct qeth_ipa_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].hdr.return_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          cmd[_i0].data.setassparms.hdr.return_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = qeth_setassparms_inspect_rc(cmd);
          printf("%d\n", benchRet); 
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
