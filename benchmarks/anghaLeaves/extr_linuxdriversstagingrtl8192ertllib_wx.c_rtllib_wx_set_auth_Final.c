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
struct rtllib_device {int tkip_countermeasures; int drop_unencrypted; int open_wep; int auth_mode; int wpa_enabled; int ieee802_1x; int privacy_invoked; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;

/* Variables and functions */
 int EINVAL ; 
 int EOPNOTSUPP ; 
#define  IW_AUTH_80211_AUTH_ALG 137 
 int IW_AUTH_ALG_LEAP ; 
 int IW_AUTH_ALG_OPEN_SYSTEM ; 
 int IW_AUTH_ALG_SHARED_KEY ; 
#define  IW_AUTH_CIPHER_GROUP 136 
#define  IW_AUTH_CIPHER_PAIRWISE 135 
#define  IW_AUTH_DROP_UNENCRYPTED 134 
 int IW_AUTH_INDEX ; 
#define  IW_AUTH_KEY_MGMT 133 
#define  IW_AUTH_PRIVACY_INVOKED 132 
#define  IW_AUTH_RX_UNENCRYPTED_EAPOL 131 
#define  IW_AUTH_TKIP_COUNTERMEASURES 130 
#define  IW_AUTH_WPA_ENABLED 129 
#define  IW_AUTH_WPA_VERSION 128 

int rtllib_wx_set_auth(struct rtllib_device *ieee,
			       struct iw_request_info *info,
			       struct iw_param *data, char *extra)
{
	switch (data->flags & IW_AUTH_INDEX) {
	case IW_AUTH_WPA_VERSION:
		break;
	case IW_AUTH_CIPHER_PAIRWISE:
	case IW_AUTH_CIPHER_GROUP:
	case IW_AUTH_KEY_MGMT:
		/* Host AP driver does not use these parameters and allows
		 * wpa_supplicant to control them internally.
		 */
		break;
	case IW_AUTH_TKIP_COUNTERMEASURES:
		ieee->tkip_countermeasures = data->value;
		break;
	case IW_AUTH_DROP_UNENCRYPTED:
		ieee->drop_unencrypted = data->value;
		break;

	case IW_AUTH_80211_AUTH_ALG:
		if (data->value & IW_AUTH_ALG_SHARED_KEY) {
			ieee->open_wep = 0;
			ieee->auth_mode = 1;
		} else if (data->value & IW_AUTH_ALG_OPEN_SYSTEM) {
			ieee->open_wep = 1;
			ieee->auth_mode = 0;
		} else if (data->value & IW_AUTH_ALG_LEAP) {
			ieee->open_wep = 1;
			ieee->auth_mode = 2;
		} else
			return -EINVAL;
		break;

	case IW_AUTH_WPA_ENABLED:
		ieee->wpa_enabled = (data->value) ? 1 : 0;
		break;

	case IW_AUTH_RX_UNENCRYPTED_EAPOL:
		ieee->ieee802_1x = data->value;
		break;
	case IW_AUTH_PRIVACY_INVOKED:
		ieee->privacy_invoked = data->value;
		break;
	default:
		return -EOPNOTSUPP;
	}
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
          int _len_ieee0 = 1;
          struct rtllib_device * ieee = (struct rtllib_device *) malloc(_len_ieee0*sizeof(struct rtllib_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].tkip_countermeasures = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].drop_unencrypted = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].open_wep = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].auth_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].wpa_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].ieee802_1x = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].privacy_invoked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct iw_param * data = (struct iw_param *) malloc(_len_data0*sizeof(struct iw_param));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extra0 = 1;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtllib_wx_set_auth(ieee,info,data,extra);
          printf("%d\n", benchRet); 
          free(ieee);
          free(info);
          free(data);
          free(extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
