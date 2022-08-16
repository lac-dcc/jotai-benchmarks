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
typedef  int u32 ;

/* Variables and functions */
 int FC_PORTSPEED_10GBIT ; 
 int FC_PORTSPEED_128GBIT ; 
 int FC_PORTSPEED_16GBIT ; 
 int FC_PORTSPEED_1GBIT ; 
 int FC_PORTSPEED_2GBIT ; 
 int FC_PORTSPEED_32GBIT ; 
 int FC_PORTSPEED_4GBIT ; 
 int FC_PORTSPEED_64GBIT ; 
 int FC_PORTSPEED_8GBIT ; 
 int FC_PORTSPEED_NOT_NEGOTIATED ; 
 int ZFCP_FSF_PORTSPEED_10GBIT ; 
 int ZFCP_FSF_PORTSPEED_128GBIT ; 
 int ZFCP_FSF_PORTSPEED_16GBIT ; 
 int ZFCP_FSF_PORTSPEED_1GBIT ; 
 int ZFCP_FSF_PORTSPEED_2GBIT ; 
 int ZFCP_FSF_PORTSPEED_32GBIT ; 
 int ZFCP_FSF_PORTSPEED_4GBIT ; 
 int ZFCP_FSF_PORTSPEED_64GBIT ; 
 int ZFCP_FSF_PORTSPEED_8GBIT ; 
 int ZFCP_FSF_PORTSPEED_NOT_NEGOTIATED ; 

__attribute__((used)) static u32 zfcp_fsf_convert_portspeed(u32 fsf_speed)
{
	u32 fdmi_speed = 0;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_1GBIT)
		fdmi_speed |= FC_PORTSPEED_1GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_2GBIT)
		fdmi_speed |= FC_PORTSPEED_2GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_4GBIT)
		fdmi_speed |= FC_PORTSPEED_4GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_10GBIT)
		fdmi_speed |= FC_PORTSPEED_10GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_8GBIT)
		fdmi_speed |= FC_PORTSPEED_8GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_16GBIT)
		fdmi_speed |= FC_PORTSPEED_16GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_32GBIT)
		fdmi_speed |= FC_PORTSPEED_32GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_64GBIT)
		fdmi_speed |= FC_PORTSPEED_64GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_128GBIT)
		fdmi_speed |= FC_PORTSPEED_128GBIT;
	if (fsf_speed & ZFCP_FSF_PORTSPEED_NOT_NEGOTIATED)
		fdmi_speed |= FC_PORTSPEED_NOT_NEGOTIATED;
	return fdmi_speed;
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
          int fsf_speed = 100;
          int benchRet = zfcp_fsf_convert_portspeed(fsf_speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int fsf_speed = 255;
          int benchRet = zfcp_fsf_convert_portspeed(fsf_speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fsf_speed = 10;
          int benchRet = zfcp_fsf_convert_portspeed(fsf_speed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
