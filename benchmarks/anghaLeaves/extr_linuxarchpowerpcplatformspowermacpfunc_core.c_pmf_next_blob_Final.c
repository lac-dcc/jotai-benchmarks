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
struct pmf_cmd {int cmdend; int cmdptr; int error; } ;

/* Variables and functions */

__attribute__((used)) static const void* pmf_next_blob(struct pmf_cmd *cmd, int count)
{
	const void *value;
	if ((cmd->cmdend - cmd->cmdptr) < count) {
		cmd->error = 1;
		return NULL;
	}
	value = cmd->cmdptr;
	cmd->cmdptr += count;
	return value;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int count = 100;
        
          int _len_cmd0 = 1;
          struct pmf_cmd * cmd = (struct pmf_cmd *) malloc(_len_cmd0*sizeof(struct pmf_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].cmdend = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].cmdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = pmf_next_blob(cmd,count);
          free(cmd);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int count = 255;
        
          int _len_cmd0 = 65025;
          struct pmf_cmd * cmd = (struct pmf_cmd *) malloc(_len_cmd0*sizeof(struct pmf_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].cmdend = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].cmdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = pmf_next_blob(cmd,count);
          free(cmd);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int count = 10;
        
          int _len_cmd0 = 100;
          struct pmf_cmd * cmd = (struct pmf_cmd *) malloc(_len_cmd0*sizeof(struct pmf_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].cmdend = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].cmdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = pmf_next_blob(cmd,count);
          free(cmd);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cmd0 = 1;
          struct pmf_cmd * cmd = (struct pmf_cmd *) malloc(_len_cmd0*sizeof(struct pmf_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].cmdend = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].cmdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const void * benchRet = pmf_next_blob(cmd,count);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
