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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  int /*<<< orphan*/  RPC_CLIENT_CREATE_VLAN ;
typedef  int /*<<< orphan*/  CLIENT ;

/* Variables and functions */

bool CtUpgradeVLan(CLIENT *c, RPC_CLIENT_CREATE_VLAN *create)
{
	bool use_old_name = false;

#ifdef	OS_WIN32
	KAKUSHI *k = NULL;
	MS_DRIVER_VER ver;
#endif	// OS_WIN32

	// Validate arguments
	if (c == NULL || create == NULL)
	{
		return false;
	}


#ifndef	OS_WIN32

	// Always succeed
	return true;

#else	// OS_WIN32

	CiInitDriverVerStruct(&ver);

	if (MsIsNt() == false)
	{
		// Not available in Win9x
		CiSetError(c, ERR_NOT_SUPPORTED);
		return false;
	}

	// Check whether the LAN card with the specified name already exists
	if (MsIsVLanExists(VLAN_ADAPTER_NAME_TAG, create->DeviceName) == false &&
		MsIsVLanExists(VLAN_ADAPTER_NAME_TAG_OLD, create->DeviceName) == false)
	{
		// Not exist
		CiSetError(c, ERR_OBJECT_NOT_FOUND);
		CiNotify(c);
		CiSendGlobalPulse(c);
		return false;
	}

	if (MsIsVLanExists(VLAN_ADAPTER_NAME_TAG_OLD, create->DeviceName))
	{
		use_old_name = true;
	}

	if (MsIsVista() == false)
	{
		k = InitKakushi();	
	}


	if (MsIsVista() == false)
	{
		// Perform the installation (other than Windows Vista)
		if (MsUpgradeVLan(use_old_name ? VLAN_ADAPTER_NAME_TAG_OLD : VLAN_ADAPTER_NAME_TAG,
			use_old_name ? VLAN_CONNECTION_NAME_OLD : VLAN_CONNECTION_NAME,
			create->DeviceName, &ver) == false)
		{
			// Installation Failed
			FreeKakushi(k);
			CiSetError(c, ERR_VLAN_INSTALL_ERROR);
			CiNotify(c);
			CiSendGlobalPulse(c);
			return false;
		}
	}
	else
	{
		// Perform the installation (Windows Vista)
		char tmp[MAX_SIZE];

		Format(tmp, sizeof(tmp), "upgradevlan %s", create->DeviceName);

		if (CncExecDriverInstaller(tmp) == false)
		{
			// Installation Failed
			FreeKakushi(k);
			CiSetError(c, ERR_VLAN_INSTALL_ERROR);
			CiNotify(c);
			CiSendGlobalPulse(c);
			return false;
		}
	}

	FreeKakushi(k);

	CLog(c, "LC_UPDATE_VLAN", create->DeviceName);

	CiNotify(c);
	CiSendGlobalPulse(c);

	return true;

#endif	// OS_WIN32
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
          int _len_c0 = 1;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_create0 = 1;
          int * create = (int *) malloc(_len_create0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_create0; _i0++) {
            create[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CtUpgradeVLan(c,create);
          printf("%d\n", benchRet); 
          free(c);
          free(create);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_create0 = 65025;
          int * create = (int *) malloc(_len_create0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_create0; _i0++) {
            create[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CtUpgradeVLan(c,create);
          printf("%d\n", benchRet); 
          free(c);
          free(create);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_create0 = 100;
          int * create = (int *) malloc(_len_create0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_create0; _i0++) {
            create[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CtUpgradeVLan(c,create);
          printf("%d\n", benchRet); 
          free(c);
          free(create);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
