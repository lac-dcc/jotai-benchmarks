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
       0            big-arr\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ Action; int Flags; scalar_t__ EventCode; } ;
typedef  TYPE_1__ POWER_ACTION_POLICY ;
typedef  scalar_t__ POWER_ACTION ;

/* Variables and functions */
 int POWER_ACTION_QUERY_ALLOWED ; 
 int POWER_ACTION_UI_ALLOWED ; 
 scalar_t__ POWER_FORCE_TRIGGER_RESET ; 
 scalar_t__ POWER_USER_NOTIFY_BUTTON ; 
 scalar_t__ POWER_USER_NOTIFY_SHUTDOWN ; 
 scalar_t__ PowerActionNone ; 
 scalar_t__ PowerActionShutdown ; 
 scalar_t__ PowerActionWarmEject ; 

POWER_ACTION
GetPowerActionFromPolicy(POWER_ACTION_POLICY *Policy)
{
    POWER_ACTION poAction = PowerActionNone;
    /*

    TCHAR szBuffer[MAX_PATH];

    // Note: Windows XP SP2+ does not return the PowerAction code
    // for PowerActionWarmEject + PowerActionShutdown but sets it
    // to PowerActionNone and sets the Flags & EventCode


     _stprintf(szBuffer, L"Action: %x EventCode %x Flags %x",Policy->Action, Policy->EventCode, Policy->Flags);
     MessageBoxW(NULL, szBuffer, NULL, MB_OK);

    */

    if (Policy->Action == PowerActionNone)
    {
        if (Policy->Flags == (POWER_ACTION_UI_ALLOWED | POWER_ACTION_QUERY_ALLOWED))
        {
            if (Policy->EventCode  == POWER_FORCE_TRIGGER_RESET)
            {
                poAction = PowerActionNone;
            }
            else if (Policy->EventCode  == POWER_USER_NOTIFY_BUTTON)
            {
                poAction = PowerActionWarmEject;
            }
            else if (Policy->EventCode == POWER_USER_NOTIFY_SHUTDOWN)
            {
                poAction = PowerActionShutdown;
            }
        }
    }
    else
    {
        poAction = Policy->Action;
    }

    return poAction;
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

    // big-arr
    case 0:
    {
          int _len_Policy0 = 1;
          struct TYPE_3__ * Policy = (struct TYPE_3__ *) malloc(_len_Policy0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Policy0; _i0++) {
            Policy->Action = ((-2 * (next_i()%2)) + 1) * next_i();
        Policy->Flags = ((-2 * (next_i()%2)) + 1) * next_i();
        Policy->EventCode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = GetPowerActionFromPolicy(Policy);
          printf("%ld\n", benchRet); 
          free(Policy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
