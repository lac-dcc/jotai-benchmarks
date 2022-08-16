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
#define  NFS41_ACL_QUERY 145 
#define  NFS41_ACL_SET 144 
#define  NFS41_CLOSE 143 
#define  NFS41_DIR_QUERY 142 
#define  NFS41_EA_GET 141 
#define  NFS41_EA_SET 140 
#define  NFS41_FILE_QUERY 139 
#define  NFS41_FILE_SET 138 
#define  NFS41_LOCK 137 
#define  NFS41_MOUNT 136 
#define  NFS41_OPEN 135 
#define  NFS41_READ 134 
#define  NFS41_SHUTDOWN 133 
#define  NFS41_SYMLINK 132 
#define  NFS41_UNLOCK 131 
#define  NFS41_UNMOUNT 130 
#define  NFS41_VOLUME_QUERY 129 
#define  NFS41_WRITE 128 

const char *opcode2string(int opcode)
{
    switch(opcode) {
    case NFS41_SHUTDOWN: return "NFS41_SHUTDOWN";
    case NFS41_MOUNT: return "NFS41_MOUNT";
    case NFS41_UNMOUNT: return "NFS41_UNMOUNT";
    case NFS41_OPEN: return "NFS41_OPEN";
    case NFS41_CLOSE: return "NFS41_CLOSE";
    case NFS41_READ: return "NFS41_READ";
    case NFS41_WRITE: return "NFS41_WRITE";
    case NFS41_LOCK: return "NFS41_LOCK";
    case NFS41_UNLOCK: return "NFS41_UNLOCK";
    case NFS41_DIR_QUERY: return "NFS41_DIR_QUERY";
    case NFS41_FILE_QUERY: return "NFS41_FILE_QUERY";
    case NFS41_FILE_SET: return "NFS41_FILE_SET";
    case NFS41_EA_SET: return "NFS41_EA_SET";
    case NFS41_EA_GET: return "NFS41_EA_GET";
    case NFS41_SYMLINK: return "NFS41_SYMLINK";
    case NFS41_VOLUME_QUERY: return "NFS41_VOLUME_QUERY";
    case NFS41_ACL_QUERY: return "NFS41_ACL_QUERY";
    case NFS41_ACL_SET: return "NFS41_ACL_SET";
    default: return "UNKNOWN";
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
          int opcode = 100;
          const char * benchRet = opcode2string(opcode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int opcode = 255;
          const char * benchRet = opcode2string(opcode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int opcode = 10;
          const char * benchRet = opcode2string(opcode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
