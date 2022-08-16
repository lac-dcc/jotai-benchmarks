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
typedef  size_t u8 ;
typedef  int /*<<< orphan*/  const u16 ;

/* Variables and functions */
 size_t const DCCP_MAX_RESET_CODES ; 
#define  DCCP_RESET_CODE_ABORTED 148 
#define  DCCP_RESET_CODE_AGGRESSION_PENALTY 147 
#define  DCCP_RESET_CODE_BAD_INIT_COOKIE 146 
#define  DCCP_RESET_CODE_BAD_SERVICE_CODE 145 
#define  DCCP_RESET_CODE_CLOSED 144 
#define  DCCP_RESET_CODE_CONNECTION_REFUSED 143 
#define  DCCP_RESET_CODE_MANDATORY_ERROR 142 
#define  DCCP_RESET_CODE_NO_CONNECTION 141 
#define  DCCP_RESET_CODE_OPTION_ERROR 140 
#define  DCCP_RESET_CODE_PACKET_ERROR 139 
#define  DCCP_RESET_CODE_TOO_BUSY 138 
#define  DCCP_RESET_CODE_UNSPECIFIED 137 
#define  EBADR 136 
#define  EBADRQC 135 
#define  ECONNREFUSED 134 
#define  ECONNRESET 133 
#define  EDQUOT 132 
#define  EILSEQ 131 
#define  ENOMSG 130 
#define  EOPNOTSUPP 129 
#define  EUSERS 128 

__attribute__((used)) static u16 dccp_reset_code_convert(const u8 code)
{
	static const u16 error_code[] = {
	[DCCP_RESET_CODE_CLOSED]	     = 0,	/* normal termination */
	[DCCP_RESET_CODE_UNSPECIFIED]	     = 0,	/* nothing known */
	[DCCP_RESET_CODE_ABORTED]	     = ECONNRESET,

	[DCCP_RESET_CODE_NO_CONNECTION]	     = ECONNREFUSED,
	[DCCP_RESET_CODE_CONNECTION_REFUSED] = ECONNREFUSED,
	[DCCP_RESET_CODE_TOO_BUSY]	     = EUSERS,
	[DCCP_RESET_CODE_AGGRESSION_PENALTY] = EDQUOT,

	[DCCP_RESET_CODE_PACKET_ERROR]	     = ENOMSG,
	[DCCP_RESET_CODE_BAD_INIT_COOKIE]    = EBADR,
	[DCCP_RESET_CODE_BAD_SERVICE_CODE]   = EBADRQC,
	[DCCP_RESET_CODE_OPTION_ERROR]	     = EILSEQ,
	[DCCP_RESET_CODE_MANDATORY_ERROR]    = EOPNOTSUPP,
	};

	return code >= DCCP_MAX_RESET_CODES ? 0 : error_code[code];
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
          const unsigned long code = 100;
          const int benchRet = dccp_reset_code_convert(code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned long code = 255;
          const int benchRet = dccp_reset_code_convert(code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned long code = 10;
          const int benchRet = dccp_reset_code_convert(code);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
