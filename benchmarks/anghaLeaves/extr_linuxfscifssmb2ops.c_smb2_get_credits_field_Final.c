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
struct TCP_Server_Info {int echo_credits; int oplock_credits; int credits; } ;

/* Variables and functions */
#define  CIFS_ECHO_OP 129 
#define  CIFS_OBREAK_OP 128 

__attribute__((used)) static int *
smb2_get_credits_field(struct TCP_Server_Info *server, const int optype)
{
	switch (optype) {
	case CIFS_ECHO_OP:
		return &server->echo_credits;
	case CIFS_OBREAK_OP:
		return &server->oplock_credits;
	default:
		return &server->credits;
	}
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          const int optype = 100;
        
          int _len_server0 = 1;
          struct TCP_Server_Info * server = (struct TCP_Server_Info *) malloc(_len_server0*sizeof(struct TCP_Server_Info));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].echo_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].oplock_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int * benchRet = smb2_get_credits_field(server,optype);
          printf("%d\n", (*benchRet)); 
          free(server);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          const int optype = 255;
        
          int _len_server0 = 65025;
          struct TCP_Server_Info * server = (struct TCP_Server_Info *) malloc(_len_server0*sizeof(struct TCP_Server_Info));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].echo_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].oplock_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int * benchRet = smb2_get_credits_field(server,optype);
          printf("%d\n", (*benchRet)); 
          free(server);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          const int optype = 10;
        
          int _len_server0 = 100;
          struct TCP_Server_Info * server = (struct TCP_Server_Info *) malloc(_len_server0*sizeof(struct TCP_Server_Info));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].echo_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].oplock_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int * benchRet = smb2_get_credits_field(server,optype);
          printf("%d\n", (*benchRet)); 
          free(server);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          const int optype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_server0 = 1;
          struct TCP_Server_Info * server = (struct TCP_Server_Info *) malloc(_len_server0*sizeof(struct TCP_Server_Info));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              server[_i0].echo_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].oplock_credits = ((-2 * (next_i()%2)) + 1) * next_i();
          server[_i0].credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int * benchRet = smb2_get_credits_field(server,optype);
          printf("%d\n", (*benchRet)); 
          free(server);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
