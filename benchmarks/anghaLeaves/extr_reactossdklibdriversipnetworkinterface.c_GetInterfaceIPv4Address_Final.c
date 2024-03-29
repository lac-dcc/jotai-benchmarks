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
       3            empty\n\
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
typedef  struct TYPE_19__   TYPE_9__ ;
typedef  struct TYPE_18__   TYPE_8__ ;
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONG ;
struct TYPE_17__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_18__ {TYPE_7__ Address; } ;
struct TYPE_15__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_16__ {TYPE_5__ Address; } ;
struct TYPE_13__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_14__ {TYPE_3__ Address; } ;
struct TYPE_11__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_12__ {TYPE_1__ Address; } ;
struct TYPE_19__ {TYPE_8__ PointToPoint; TYPE_6__ Broadcast; TYPE_4__ Netmask; TYPE_2__ Unicast; } ;
typedef  int /*<<< orphan*/ * PULONG ;
typedef  TYPE_9__* PIP_INTERFACE ;
typedef  int /*<<< orphan*/  NTSTATUS ;

/* Variables and functions */
#define  ADE_ADDRMASK 131 
#define  ADE_BROADCAST 130 
#define  ADE_POINTOPOINT 129 
#define  ADE_UNICAST 128 
 int /*<<< orphan*/  STATUS_SUCCESS ; 
 int /*<<< orphan*/  STATUS_UNSUCCESSFUL ; 

NTSTATUS GetInterfaceIPv4Address( PIP_INTERFACE Interface,
				  ULONG TargetType,
				  PULONG Address ) {
    switch( TargetType ) {
    case ADE_UNICAST:
	*Address = Interface->Unicast.Address.IPv4Address;
	break;

    case ADE_ADDRMASK:
	*Address = Interface->Netmask.Address.IPv4Address;
	break;

    case ADE_BROADCAST:
	*Address = Interface->Broadcast.Address.IPv4Address;
	break;

    case ADE_POINTOPOINT:
	*Address = Interface->PointToPoint.Address.IPv4Address;
	break;

    default:
	return STATUS_UNSUCCESSFUL;
    }

    return STATUS_SUCCESS;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int TargetType = 100;
        
          int _len_Interface0 = 1;
          struct TYPE_19__ * Interface = (struct TYPE_19__ *) malloc(_len_Interface0*sizeof(struct TYPE_19__));
          for(int _i0 = 0; _i0 < _len_Interface0; _i0++) {
              Interface[_i0].PointToPoint.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Broadcast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Netmask.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Unicast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_Address0 = 1;
          int * Address = (int *) malloc(_len_Address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Address0; _i0++) {
            Address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GetInterfaceIPv4Address(Interface,TargetType,Address);
          printf("%d\n", benchRet); 
          free(Interface);
          free(Address);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int TargetType = 255;
        
          int _len_Interface0 = 65025;
          struct TYPE_19__ * Interface = (struct TYPE_19__ *) malloc(_len_Interface0*sizeof(struct TYPE_19__));
          for(int _i0 = 0; _i0 < _len_Interface0; _i0++) {
              Interface[_i0].PointToPoint.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Broadcast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Netmask.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Unicast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_Address0 = 65025;
          int * Address = (int *) malloc(_len_Address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Address0; _i0++) {
            Address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GetInterfaceIPv4Address(Interface,TargetType,Address);
          printf("%d\n", benchRet); 
          free(Interface);
          free(Address);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int TargetType = 10;
        
          int _len_Interface0 = 100;
          struct TYPE_19__ * Interface = (struct TYPE_19__ *) malloc(_len_Interface0*sizeof(struct TYPE_19__));
          for(int _i0 = 0; _i0 < _len_Interface0; _i0++) {
              Interface[_i0].PointToPoint.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Broadcast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Netmask.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Unicast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_Address0 = 100;
          int * Address = (int *) malloc(_len_Address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Address0; _i0++) {
            Address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GetInterfaceIPv4Address(Interface,TargetType,Address);
          printf("%d\n", benchRet); 
          free(Interface);
          free(Address);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int TargetType = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_Interface0 = 1;
          struct TYPE_19__ * Interface = (struct TYPE_19__ *) malloc(_len_Interface0*sizeof(struct TYPE_19__));
          for(int _i0 = 0; _i0 < _len_Interface0; _i0++) {
              Interface[_i0].PointToPoint.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Broadcast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Netmask.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          Interface[_i0].Unicast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int _len_Address0 = 1;
          int * Address = (int *) malloc(_len_Address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Address0; _i0++) {
            Address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GetInterfaceIPv4Address(Interface,TargetType,Address);
          printf("%d\n", benchRet); 
          free(Interface);
          free(Address);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
