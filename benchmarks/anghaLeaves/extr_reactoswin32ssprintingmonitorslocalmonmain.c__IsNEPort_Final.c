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
       1            big-arr-10x\n\
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
typedef  int* PCWSTR ;
typedef  int BOOL ;

/* Variables and functions */
 int FALSE ; 

__attribute__((used)) static __inline BOOL
_IsNEPort(PCWSTR pwszPortName)
{
    PCWSTR p = pwszPortName;

    // First character needs to be 'N' (uppercase or lowercase)
    if (*p != L'N' && *p != L'n')
        return FALSE;

    // Next character needs to be 'E' (uppercase or lowercase)
    p++;
    if (*p != L'E' && *p != L'e')
        return FALSE;

    // An optional hyphen may follow now.
    p++;
    if (*p == L'-')
        p++;

    // Now an arbitrary number of digits may follow.
    while (*p >= L'0' && *p <= L'9')
        p++;

    // Finally, the virtual Ne port must be terminated by a colon.
    if (*p != ':')
        return FALSE;

    // If this is the end of the string, we have a virtual Ne port.
    p++;
    return (*p == L'\0');
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
          int _len_pwszPortName0 = 1;
          int * pwszPortName = (int *) malloc(_len_pwszPortName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwszPortName0; _i0++) {
            pwszPortName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _IsNEPort(pwszPortName);
          printf("%d\n", benchRet); 
          free(pwszPortName);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pwszPortName0 = 100;
          int * pwszPortName = (int *) malloc(_len_pwszPortName0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwszPortName0; _i0++) {
            pwszPortName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _IsNEPort(pwszPortName);
          printf("%d\n", benchRet); 
          free(pwszPortName);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
