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
typedef  char* LPCSTR ;
typedef  int DWORD ;

/* Variables and functions */
#define  DPSYS_ADDGROUPTOGROUP 143 
#define  DPSYS_ADDPLAYERTOGROUP 142 
#define  DPSYS_CHAT 141 
#define  DPSYS_CREATEPLAYERORGROUP 140 
#define  DPSYS_DELETEGROUPFROMGROUP 139 
#define  DPSYS_DELETEPLAYERFROMGROUP 138 
#define  DPSYS_DESTROYPLAYERORGROUP 137 
#define  DPSYS_HOST 136 
#define  DPSYS_SECUREMESSAGE 135 
#define  DPSYS_SENDCOMPLETE 134 
#define  DPSYS_SESSIONLOST 133 
#define  DPSYS_SETGROUPOWNER 132 
#define  DPSYS_SETPLAYERORGROUPDATA 131 
#define  DPSYS_SETPLAYERORGROUPNAME 130 
#define  DPSYS_SETSESSIONDESC 129 
#define  DPSYS_STARTSESSION 128 

__attribute__((used)) static LPCSTR dpMsgType2str(DWORD dwType)
{
    switch(dwType)
    {
    case DPSYS_CREATEPLAYERORGROUP:      return "DPSYS_CREATEPLAYERORGROUP";
    case DPSYS_DESTROYPLAYERORGROUP:     return "DPSYS_DESTROYPLAYERORGROUP";
    case DPSYS_ADDPLAYERTOGROUP:         return "DPSYS_ADDPLAYERTOGROUP";
    case DPSYS_DELETEPLAYERFROMGROUP:    return "DPSYS_DELETEPLAYERFROMGROUP";
    case DPSYS_SESSIONLOST:              return "DPSYS_SESSIONLOST";
    case DPSYS_HOST:                     return "DPSYS_HOST";
    case DPSYS_SETPLAYERORGROUPDATA:     return "DPSYS_SETPLAYERORGROUPDATA";
    case DPSYS_SETPLAYERORGROUPNAME:     return "DPSYS_SETPLAYERORGROUPNAME";
    case DPSYS_SETSESSIONDESC:           return "DPSYS_SETSESSIONDESC";
    case DPSYS_ADDGROUPTOGROUP:          return "DPSYS_ADDGROUPTOGROUP";
    case DPSYS_DELETEGROUPFROMGROUP:     return "DPSYS_DELETEGROUPFROMGROUP";
    case DPSYS_SECUREMESSAGE:            return "DPSYS_SECUREMESSAGE";
    case DPSYS_STARTSESSION:             return "DPSYS_STARTSESSION";
    case DPSYS_CHAT:                     return "DPSYS_DPSYS_CHAT";
    case DPSYS_SETGROUPOWNER:            return "DPSYS_SETGROUPOWNER";
    case DPSYS_SENDCOMPLETE:             return "DPSYS_SENDCOMPLETE";

    default:                             return "UNKNOWN";
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
          int dwType = 100;
          char * benchRet = dpMsgType2str(dwType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int dwType = 255;
          char * benchRet = dpMsgType2str(dwType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dwType = 10;
          char * benchRet = dpMsgType2str(dwType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
