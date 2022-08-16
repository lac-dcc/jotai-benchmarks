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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int UINT8 ;
struct TYPE_3__ {int Flags; struct TYPE_3__* Next; } ;
typedef  int /*<<< orphan*/  ACPI_STATUS ;
typedef  TYPE_1__ ACPI_INTERFACE_INFO ;

/* Variables and functions */
 int ACPI_DISABLE_INTERFACES ; 
 int ACPI_FEATURE_STRINGS ; 
 int ACPI_OSI_FEATURE ; 
 int ACPI_OSI_INVALID ; 
 int ACPI_VENDOR_STRINGS ; 
 int /*<<< orphan*/  AE_OK ; 
 TYPE_1__* AcpiGbl_SupportedInterfaces ; 

ACPI_STATUS
AcpiUtUpdateInterfaces (
    UINT8                   Action)
{
    ACPI_INTERFACE_INFO     *NextInterface;


    NextInterface = AcpiGbl_SupportedInterfaces;
    while (NextInterface)
    {
        if (((NextInterface->Flags & ACPI_OSI_FEATURE) &&
             (Action & ACPI_FEATURE_STRINGS)) ||
            (!(NextInterface->Flags & ACPI_OSI_FEATURE) &&
             (Action & ACPI_VENDOR_STRINGS)))
        {
            if (Action & ACPI_DISABLE_INTERFACES)
            {
                /* Mark the interfaces as invalid */

                NextInterface->Flags |= ACPI_OSI_INVALID;
            }
            else
            {
                /* Mark the interfaces as valid */

                NextInterface->Flags &= ~ACPI_OSI_INVALID;
            }
        }

        NextInterface = NextInterface->Next;
    }

    return (AE_OK);
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
          int Action = 100;
          int benchRet = AcpiUtUpdateInterfaces(Action);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Action = 255;
          int benchRet = AcpiUtUpdateInterfaces(Action);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Action = 10;
          int benchRet = AcpiUtUpdateInterfaces(Action);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
