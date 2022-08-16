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
typedef  int GR_STATUS ;

/* Variables and functions */
#define  GR_STATUS_BADDOMAIN 140 
#define  GR_STATUS_BADGAME 139 
#define  GR_STATUS_BADPARAMS 138 
#define  GR_STATUS_BADPASSWORD 137 
#define  GR_STATUS_DOMAINLOCK 136 
#define  GR_STATUS_ERROR 135 
#define  GR_STATUS_INVALIDCONTEXT 134 
#define  GR_STATUS_INVALIDUSER 133 
#define  GR_STATUS_NETWORK 132 
#define  GR_STATUS_NOUSER 131 
#define  GR_STATUS_OK 130 
#define  GR_STATUS_PENDING 129 
#define  GR_STATUS_TIMEOUT 128 

__attribute__((used)) static char* SV_RankStatusString( GR_STATUS status )
{
	switch( status )
	{
		case GR_STATUS_OK:				return "GR_STATUS_OK";
		case GR_STATUS_ERROR:			return "GR_STATUS_ERROR";
		case GR_STATUS_BADPARAMS:		return "GR_STATUS_BADPARAMS";
		case GR_STATUS_NETWORK:			return "GR_STATUS_NETWORK";
		case GR_STATUS_NOUSER:			return "GR_STATUS_NOUSER";
		case GR_STATUS_BADPASSWORD:		return "GR_STATUS_BADPASSWORD";
		case GR_STATUS_BADGAME:			return "GR_STATUS_BADGAME";
		case GR_STATUS_PENDING:			return "GR_STATUS_PENDING";
		case GR_STATUS_BADDOMAIN:		return "GR_STATUS_BADDOMAIN";
		case GR_STATUS_DOMAINLOCK:		return "GR_STATUS_DOMAINLOCK";
		case GR_STATUS_TIMEOUT:			return "GR_STATUS_TIMEOUT";
		case GR_STATUS_INVALIDUSER:	    return "GR_STATUS_INVALIDUSER";
		case GR_STATUS_INVALIDCONTEXT:	return "GR_STATUS_INVALIDCONTEXT";
		default:						return "(UNKNOWN)";
	}
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
          int status = 100;
          char * benchRet = SV_RankStatusString(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          char * benchRet = SV_RankStatusString(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          char * benchRet = SV_RankStatusString(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
