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

/* Variables and functions */
 int IPC_PUNIT_ERR_CMD_LOCKED ; 
 int IPC_PUNIT_ERR_CMD_TIMEOUT ; 
 int IPC_PUNIT_ERR_INVALID_CMD ; 
 int IPC_PUNIT_ERR_INVALID_PARAMETER ; 
 int IPC_PUNIT_ERR_INVALID_VR_ID ; 
 int IPC_PUNIT_ERR_SUCCESS ; 
 int IPC_PUNIT_ERR_VR_ERR ; 

__attribute__((used)) static const char *ipc_err_string(int error)
{
	if (error == IPC_PUNIT_ERR_SUCCESS)
		return "no error";
	else if (error == IPC_PUNIT_ERR_INVALID_CMD)
		return "invalid command";
	else if (error == IPC_PUNIT_ERR_INVALID_PARAMETER)
		return "invalid parameter";
	else if (error == IPC_PUNIT_ERR_CMD_TIMEOUT)
		return "command timeout";
	else if (error == IPC_PUNIT_ERR_CMD_LOCKED)
		return "command locked";
	else if (error == IPC_PUNIT_ERR_INVALID_VR_ID)
		return "invalid vr id";
	else if (error == IPC_PUNIT_ERR_VR_ERR)
		return "vr error";
	else
		return "unknown error";
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
          int error = 100;
          const char * benchRet = ipc_err_string(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
          const char * benchRet = ipc_err_string(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
          const char * benchRet = ipc_err_string(error);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
