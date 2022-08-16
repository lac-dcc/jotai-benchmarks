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
typedef  int D3D11_MESSAGE_SEVERITY ;

/* Variables and functions */
#define  D3D11_MESSAGE_SEVERITY_CORRUPTION 132 
#define  D3D11_MESSAGE_SEVERITY_ERROR 131 
#define  D3D11_MESSAGE_SEVERITY_INFO 130 
#define  D3D11_MESSAGE_SEVERITY_MESSAGE 129 
#define  D3D11_MESSAGE_SEVERITY_WARNING 128 
 int MSGL_DEBUG ; 
 int MSGL_ERR ; 
 int MSGL_FATAL ; 
 int MSGL_WARN ; 

__attribute__((used)) static int map_msg_severity(D3D11_MESSAGE_SEVERITY sev)
{
    switch (sev) {
    case D3D11_MESSAGE_SEVERITY_CORRUPTION:
        return MSGL_FATAL;
    case D3D11_MESSAGE_SEVERITY_ERROR:
        return MSGL_ERR;
    case D3D11_MESSAGE_SEVERITY_WARNING:
        return MSGL_WARN;
    default:
    case D3D11_MESSAGE_SEVERITY_INFO:
    case D3D11_MESSAGE_SEVERITY_MESSAGE:
        return MSGL_DEBUG;
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
          int sev = 100;
          int benchRet = map_msg_severity(sev);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int sev = 255;
          int benchRet = map_msg_severity(sev);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sev = 10;
          int benchRet = map_msg_severity(sev);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
