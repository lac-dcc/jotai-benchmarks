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
typedef  int /*<<< orphan*/  ULONG ;
typedef  char* LPSTR ;

/* Variables and functions */

LPSTR DecodeVmFlags(ULONG flags)
{
    ULONG i;
/*
#define VM_READ		0x0001
#define VM_WRITE	0x0002
#define VM_EXEC		0x0004
#define VM_SHARED	0x0008

#define VM_MAYREAD	0x0010
#define VM_MAYWRITE	0x0020
#define VM_MAYEXEC	0x0040
#define VM_MAYSHARE	0x0080

#define VM_GROWSDOWN	0x0100
#define VM_GROWSUP	0x0200
#define VM_SHM		0x0400
#define VM_DENYWRITE	0x0800

#define VM_EXECUTABLE	0x1000
#define VM_LOCKED	0x2000
#define VM_IO           0x4000

#define VM_STACK_FLAGS	0x0177
*/
    static LPSTR flags_syms_on[]={"R","W","X","S","MR","MW","MX","MS","GD","GU","SHM","exe","LOCK","IO",""};
    static char temp[256];

	// terminate string
    *temp = 0;
//ei fix fix fix
#if 0

    if(flags == VM_STACK_FLAGS)
    {
        PICE_strcpy(temp," (STACK)");
    }
    else
    {
        for(i=0;i<15;i++)
        {
            if(flags&0x1)
            {
                PICE_strcat(temp," ");
                PICE_strcat(temp,flags_syms_on[i]);
            }
            flags >>= 1;
        }
    }
#endif
    return temp;
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
          int flags = 100;
          char * benchRet = DecodeVmFlags(flags);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          char * benchRet = DecodeVmFlags(flags);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          char * benchRet = DecodeVmFlags(flags);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
