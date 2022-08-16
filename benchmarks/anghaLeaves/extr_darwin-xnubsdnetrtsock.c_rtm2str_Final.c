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
#define  RTM_ADD 148 
#define  RTM_CHANGE 147 
#define  RTM_DELADDR 146 
#define  RTM_DELETE 145 
#define  RTM_DELMADDR 144 
#define  RTM_GET 143 
#define  RTM_GET2 142 
#define  RTM_GET_EXT 141 
#define  RTM_GET_SILENT 140 
#define  RTM_IFINFO 139 
#define  RTM_IFINFO2 138 
#define  RTM_LOCK 137 
#define  RTM_LOSING 136 
#define  RTM_MISS 135 
#define  RTM_NEWADDR 134 
#define  RTM_NEWMADDR 133 
#define  RTM_NEWMADDR2 132 
#define  RTM_OLDADD 131 
#define  RTM_OLDDEL 130 
#define  RTM_REDIRECT 129 
#define  RTM_RESOLVE 128 

const char *
rtm2str(int cmd)
{
	const char *c = "RTM_?";

	switch (cmd) {
	case RTM_ADD:
		c = "RTM_ADD";
		break;
	case RTM_DELETE:
		c = "RTM_DELETE";
		break;
	case RTM_CHANGE:
		c = "RTM_CHANGE";
		break;
	case RTM_GET:
		c = "RTM_GET";
		break;
	case RTM_LOSING:
		c = "RTM_LOSING";
		break;
	case RTM_REDIRECT:
		c = "RTM_REDIRECT";
		break;
	case RTM_MISS:
		c = "RTM_MISS";
		break;
	case RTM_LOCK:
		c = "RTM_LOCK";
		break;
	case RTM_OLDADD:
		c = "RTM_OLDADD";
		break;
	case RTM_OLDDEL:
		c = "RTM_OLDDEL";
		break;
	case RTM_RESOLVE:
		c = "RTM_RESOLVE";
		break;
	case RTM_NEWADDR:
		c = "RTM_NEWADDR";
		break;
	case RTM_DELADDR:
		c = "RTM_DELADDR";
		break;
	case RTM_IFINFO:
		c = "RTM_IFINFO";
		break;
	case RTM_NEWMADDR:
		c = "RTM_NEWMADDR";
		break;
	case RTM_DELMADDR:
		c = "RTM_DELMADDR";
		break;
	case RTM_GET_SILENT:
		c = "RTM_GET_SILENT";
		break;
	case RTM_IFINFO2:
		c = "RTM_IFINFO2";
		break;
	case RTM_NEWMADDR2:
		c = "RTM_NEWMADDR2";
		break;
	case RTM_GET2:
		c = "RTM_GET2";
		break;
	case RTM_GET_EXT:
		c = "RTM_GET_EXT";
		break;
	}

	return (c);
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
          int cmd = 100;
          const char * benchRet = rtm2str(cmd);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          const char * benchRet = rtm2str(cmd);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          const char * benchRet = rtm2str(cmd);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
