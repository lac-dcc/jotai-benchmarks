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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_6__ {scalar_t__ cipher_group; } ;
struct TYPE_4__ {TYPE_3__ crypto; } ;
struct TYPE_5__ {TYPE_1__ connect; } ;
struct wireless_dev {TYPE_2__ wext; } ;

/* Variables and functions */
 int EINVAL ; 
 int IW_AUTH_CIPHER_AES_CMAC ; 
 int IW_AUTH_CIPHER_CCMP ; 
 int IW_AUTH_CIPHER_NONE ; 
 int IW_AUTH_CIPHER_TKIP ; 
 int IW_AUTH_CIPHER_WEP104 ; 
 int IW_AUTH_CIPHER_WEP40 ; 
 scalar_t__ WLAN_CIPHER_SUITE_AES_CMAC ; 
 scalar_t__ WLAN_CIPHER_SUITE_CCMP ; 
 scalar_t__ WLAN_CIPHER_SUITE_TKIP ; 
 scalar_t__ WLAN_CIPHER_SUITE_WEP104 ; 
 scalar_t__ WLAN_CIPHER_SUITE_WEP40 ; 

__attribute__((used)) static int cfg80211_set_cipher_group(struct wireless_dev *wdev, u32 cipher)
{
	if (cipher & IW_AUTH_CIPHER_WEP40)
		wdev->wext.connect.crypto.cipher_group =
			WLAN_CIPHER_SUITE_WEP40;
	else if (cipher & IW_AUTH_CIPHER_WEP104)
		wdev->wext.connect.crypto.cipher_group =
			WLAN_CIPHER_SUITE_WEP104;
	else if (cipher & IW_AUTH_CIPHER_TKIP)
		wdev->wext.connect.crypto.cipher_group =
			WLAN_CIPHER_SUITE_TKIP;
	else if (cipher & IW_AUTH_CIPHER_CCMP)
		wdev->wext.connect.crypto.cipher_group =
			WLAN_CIPHER_SUITE_CCMP;
	else if (cipher & IW_AUTH_CIPHER_AES_CMAC)
		wdev->wext.connect.crypto.cipher_group =
			WLAN_CIPHER_SUITE_AES_CMAC;
	else if (cipher & IW_AUTH_CIPHER_NONE)
		wdev->wext.connect.crypto.cipher_group = 0;
	else
		return -EINVAL;

	return 0;
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
          int cipher = 100;
          int _len_wdev0 = 1;
          struct wireless_dev * wdev = (struct wireless_dev *) malloc(_len_wdev0*sizeof(struct wireless_dev));
          for(int _i0 = 0; _i0 < _len_wdev0; _i0++) {
            wdev[_i0].wext.connect.crypto.cipher_group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_set_cipher_group(wdev,cipher);
          printf("%d\n", benchRet); 
          free(wdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int cipher = 10;
          int _len_wdev0 = 100;
          struct wireless_dev * wdev = (struct wireless_dev *) malloc(_len_wdev0*sizeof(struct wireless_dev));
          for(int _i0 = 0; _i0 < _len_wdev0; _i0++) {
            wdev[_i0].wext.connect.crypto.cipher_group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_set_cipher_group(wdev,cipher);
          printf("%d\n", benchRet); 
          free(wdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
