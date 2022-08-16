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
typedef  enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;

/* Variables and functions */
 int FIRMWARE_CHECK ; 
 int IMA_APPRAISE_FIRMWARE ; 
 int IMA_APPRAISE_KEXEC ; 
 int IMA_APPRAISE_MODULES ; 
 int IMA_APPRAISE_POLICY ; 
 int KEXEC_KERNEL_CHECK ; 
 int MODULE_CHECK ; 
 int POLICY_CHECK ; 

__attribute__((used)) static int ima_appraise_flag(enum ima_hooks func)
{
	if (func == MODULE_CHECK)
		return IMA_APPRAISE_MODULES;
	else if (func == FIRMWARE_CHECK)
		return IMA_APPRAISE_FIRMWARE;
	else if (func == POLICY_CHECK)
		return IMA_APPRAISE_POLICY;
	else if (func == KEXEC_KERNEL_CHECK)
		return IMA_APPRAISE_KEXEC;
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
          enum ima_hooks func = 0;
          int benchRet = ima_appraise_flag(func);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
