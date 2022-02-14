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

/* Type definitions */
struct ieee80211_key_conf {int cipher; } ;
typedef  enum cipher { ____Placeholder_cipher } cipher ;

/* Variables and functions */
 int CIPHER_AES ; 
 int CIPHER_NONE ; 
 int CIPHER_TKIP ; 
 int CIPHER_WEP128 ; 
 int CIPHER_WEP64 ; 
#define  WLAN_CIPHER_SUITE_CCMP 131 
#define  WLAN_CIPHER_SUITE_TKIP 130 
#define  WLAN_CIPHER_SUITE_WEP104 129 
#define  WLAN_CIPHER_SUITE_WEP40 128 

enum cipher rt2x00crypto_key_to_cipher(struct ieee80211_key_conf *key)
{
	switch (key->cipher) {
	case WLAN_CIPHER_SUITE_WEP40:
		return CIPHER_WEP64;
	case WLAN_CIPHER_SUITE_WEP104:
		return CIPHER_WEP128;
	case WLAN_CIPHER_SUITE_TKIP:
		return CIPHER_TKIP;
	case WLAN_CIPHER_SUITE_CCMP:
		return CIPHER_AES;
	default:
		return CIPHER_NONE;
	}
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
          int _len_key0 = 1;
          struct ieee80211_key_conf * key = (struct ieee80211_key_conf *) malloc(_len_key0*sizeof(struct ieee80211_key_conf));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key->cipher = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum cipher benchRet = rt2x00crypto_key_to_cipher(key);
          printf("{{other_type}} %p\n", &benchRet); 
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
