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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONG ;
typedef  int /*<<< orphan*/  UINT ;
struct TYPE_2__ {int /*<<< orphan*/  CurrentPacketFilter; } ;
typedef  int /*<<< orphan*/  NDIS_STATUS ;
typedef  int NDIS_OID ;
typedef  int /*<<< orphan*/  NDIS_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  NDIS_STATUS_INVALID_LENGTH ; 
 int /*<<< orphan*/  NDIS_STATUS_INVALID_OID ; 
 int /*<<< orphan*/  NDIS_STATUS_SUCCESS ; 
#define  OID_802_3_MULTICAST_LIST 130 
#define  OID_GEN_CURRENT_LOOKAHEAD 129 
#define  OID_GEN_CURRENT_PACKET_FILTER 128 
 int /*<<< orphan*/  STATUS_UNSUCCESSFUL ; 
 TYPE_1__* ctx ; 

NDIS_STATUS NeoNdisSet(
					NDIS_HANDLE MiniportAdapterContext,
					NDIS_OID Oid,
					void *InformationBuffer,
					ULONG InformationBufferLength,
					ULONG *BytesRead,
					ULONG *BytesNeeded)
{
	if (ctx == NULL)
	{
		return STATUS_UNSUCCESSFUL;
	}

	// Initialization
	*BytesRead = 0;
	*BytesNeeded = 0;

	// Branch processing
	switch (Oid)
	{
	case OID_GEN_CURRENT_PACKET_FILTER:
		/* Packet filter */
		if (InformationBufferLength != 4)
		{
			*BytesNeeded = 4;
			return NDIS_STATUS_INVALID_LENGTH;
		}
		*BytesRead = 4;
		ctx->CurrentPacketFilter = *((UINT *)InformationBuffer);
		return NDIS_STATUS_SUCCESS;

//	case OID_GEN_PROTOCOL_OPTIONS:
		/* Current protocol option value */
/*		if (InformationBufferLength != 4)
		{
			*BytesNeeded = 4;
			return NDIS_STATUS_INVALID_LENGTH;
		}
		*BytesRead = 4;
		ctx->CurrentProtocolOptions = *((UINT *)InformationBuffer);
		return NDIS_STATUS_SUCCESS;*/

	case OID_GEN_CURRENT_LOOKAHEAD:
		/* Look ahead */
		if (InformationBufferLength != 4)
		{
			*BytesNeeded = 4;
			return NDIS_STATUS_INVALID_LENGTH;
		}
		*BytesRead = 4;
		return NDIS_STATUS_SUCCESS;

	case OID_802_3_MULTICAST_LIST:
		// Multicast list
		*BytesRead = InformationBufferLength;

		return NDIS_STATUS_SUCCESS;
	}

	return NDIS_STATUS_INVALID_OID;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int MiniportAdapterContext = 100;
        
          int Oid = 100;
        
          int InformationBufferLength = 100;
        
          void * InformationBuffer;
        
          int _len_BytesRead0 = 1;
          int * BytesRead = (int *) malloc(_len_BytesRead0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesRead0; _i0++) {
            BytesRead[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_BytesNeeded0 = 1;
          int * BytesNeeded = (int *) malloc(_len_BytesNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesNeeded0; _i0++) {
            BytesNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NeoNdisSet(MiniportAdapterContext,Oid,InformationBuffer,InformationBufferLength,BytesRead,BytesNeeded);
          printf("%d\n", benchRet); 
          free(BytesRead);
          free(BytesNeeded);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int MiniportAdapterContext = 255;
        
          int Oid = 255;
        
          int InformationBufferLength = 255;
        
          void * InformationBuffer;
        
          int _len_BytesRead0 = 65025;
          int * BytesRead = (int *) malloc(_len_BytesRead0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesRead0; _i0++) {
            BytesRead[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_BytesNeeded0 = 65025;
          int * BytesNeeded = (int *) malloc(_len_BytesNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesNeeded0; _i0++) {
            BytesNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NeoNdisSet(MiniportAdapterContext,Oid,InformationBuffer,InformationBufferLength,BytesRead,BytesNeeded);
          printf("%d\n", benchRet); 
          free(BytesRead);
          free(BytesNeeded);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int MiniportAdapterContext = 10;
        
          int Oid = 10;
        
          int InformationBufferLength = 10;
        
          void * InformationBuffer;
        
          int _len_BytesRead0 = 100;
          int * BytesRead = (int *) malloc(_len_BytesRead0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesRead0; _i0++) {
            BytesRead[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_BytesNeeded0 = 100;
          int * BytesNeeded = (int *) malloc(_len_BytesNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesNeeded0; _i0++) {
            BytesNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NeoNdisSet(MiniportAdapterContext,Oid,InformationBuffer,InformationBufferLength,BytesRead,BytesNeeded);
          printf("%d\n", benchRet); 
          free(BytesRead);
          free(BytesNeeded);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
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

          int MiniportAdapterContext = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int Oid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int InformationBufferLength = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * InformationBuffer;
        
          int _len_BytesRead0 = 1;
          int * BytesRead = (int *) malloc(_len_BytesRead0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesRead0; _i0++) {
            BytesRead[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_BytesNeeded0 = 1;
          int * BytesNeeded = (int *) malloc(_len_BytesNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BytesNeeded0; _i0++) {
            BytesNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NeoNdisSet(MiniportAdapterContext,Oid,InformationBuffer,InformationBufferLength,BytesRead,BytesNeeded);
          printf("%d\n", benchRet); 
          free(BytesRead);
          free(BytesNeeded);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
