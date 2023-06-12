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
       0            big-arr\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  HighPart; int /*<<< orphan*/  LowPart; } ;
struct TYPE_5__ {TYPE_1__ DriverVersion; int /*<<< orphan*/  Revision; int /*<<< orphan*/  SubSysId; int /*<<< orphan*/  DeviceId; int /*<<< orphan*/  VendorId; int /*<<< orphan*/  DeviceIdentifier; } ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  TYPE_2__ D3DADAPTER_IDENTIFIER9 ;

/* Variables and functions */
 int /*<<< orphan*/  CLSID_DirectDraw ; 

__attribute__((used)) static void GenerateDeviceIdentifier(D3DADAPTER_IDENTIFIER9* pIdentifier)
{
    DWORD* dwIdentifier = (DWORD*)&pIdentifier->DeviceIdentifier;

    pIdentifier->DeviceIdentifier = CLSID_DirectDraw;

    dwIdentifier[0] ^= pIdentifier->VendorId;
    dwIdentifier[1] ^= pIdentifier->DeviceId;
    dwIdentifier[2] ^= pIdentifier->SubSysId;
    dwIdentifier[3] ^= pIdentifier->Revision;
    dwIdentifier[2] ^= pIdentifier->DriverVersion.LowPart;
    dwIdentifier[3] ^= pIdentifier->DriverVersion.HighPart;
}

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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_pIdentifier0 = 65025;
          struct TYPE_5__ * pIdentifier = (struct TYPE_5__ *) malloc(_len_pIdentifier0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pIdentifier0; _i0++) {
              pIdentifier[_i0].DriverVersion.HighPart = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].DriverVersion.LowPart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          pIdentifier[_i0].Revision = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].SubSysId = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].DeviceId = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].VendorId = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].DeviceIdentifier = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          GenerateDeviceIdentifier(pIdentifier);
          free(pIdentifier);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_pIdentifier0 = 100;
          struct TYPE_5__ * pIdentifier = (struct TYPE_5__ *) malloc(_len_pIdentifier0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pIdentifier0; _i0++) {
              pIdentifier[_i0].DriverVersion.HighPart = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].DriverVersion.LowPart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          pIdentifier[_i0].Revision = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].SubSysId = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].DeviceId = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].VendorId = ((-2 * (next_i()%2)) + 1) * next_i();
          pIdentifier[_i0].DeviceIdentifier = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          GenerateDeviceIdentifier(pIdentifier);
          free(pIdentifier);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
