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

/* Type definitions */
typedef  size_t u32 ;
struct iscsi_seq {size_t seq_send_order; } ;
struct iscsi_cmd {size_t seq_count; struct iscsi_seq* seq_list; } ;

/* Variables and functions */

struct iscsi_seq *iscsit_get_seq_holder_for_datain(
	struct iscsi_cmd *cmd,
	u32 seq_send_order)
{
	u32 i;

	for (i = 0; i < cmd->seq_count; i++)
		if (cmd->seq_list[i].seq_send_order == seq_send_order)
			return &cmd->seq_list[i];

	return NULL;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned long seq_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cmd0 = 1;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].seq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__seq_list0 = 1;
          cmd[_i0].seq_list = (struct iscsi_seq *) malloc(_len_cmd__i0__seq_list0*sizeof(struct iscsi_seq));
          for(int _j0 = 0; _j0 < _len_cmd__i0__seq_list0; _j0++) {
              cmd[_i0].seq_list->seq_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct iscsi_seq * benchRet = iscsit_get_seq_holder_for_datain(cmd,seq_send_order);
          printf("%lu\n", (*benchRet).seq_send_order);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].seq_list);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
