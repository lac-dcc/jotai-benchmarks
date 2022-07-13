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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
#define  RPC_AUTHERROR 141 
#define  RPC_CANTDECODEARGS 140 
#define  RPC_CANTDECODERES 139 
#define  RPC_CANTENCODEARGS 138 
#define  RPC_CANTRECV 137 
#define  RPC_CANTSEND 136 
#define  RPC_INTR 135 
#define  RPC_PROCUNAVAIL 134 
#define  RPC_PROGUNAVAIL 133 
#define  RPC_PROGVERSMISMATCH 132 
#define  RPC_SYSTEMERROR 131 
#define  RPC_TIMEDOUT 130 
#define  RPC_UDERROR 129 
#define  RPC_VERSMISMATCH 128 

const char* rpc_error_string(int status)
{
    switch (status)
    {
    case RPC_CANTENCODEARGS: return "RPC_CANTENCODEARGS";
    case RPC_CANTDECODERES: return "RPC_CANTDECODERES";
    case RPC_CANTSEND: return "RPC_CANTSEND";
    case RPC_CANTRECV: return "RPC_CANTRECV";
    case RPC_TIMEDOUT: return "RPC_TIMEDOUT";
    case RPC_INTR: return "RPC_INTR";
    case RPC_UDERROR: return "RPC_UDERROR";
    case RPC_VERSMISMATCH: return "RPC_VERSMISMATCH";
    case RPC_AUTHERROR: return "RPC_AUTHERROR";
    case RPC_PROGUNAVAIL: return "RPC_PROGUNAVAIL";
    case RPC_PROGVERSMISMATCH: return "RPC_PROGVERSMISMATCH";
    case RPC_PROCUNAVAIL: return "RPC_PROCUNAVAIL";
    case RPC_CANTDECODEARGS: return "RPC_CANTDECODEARGS";
    case RPC_SYSTEMERROR: return "RPC_SYSTEMERROR";
    default: return "invalid rpc error code";
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
          const char * benchRet = rpc_error_string(status);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          const char * benchRet = rpc_error_string(status);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          const char * benchRet = rpc_error_string(status);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
