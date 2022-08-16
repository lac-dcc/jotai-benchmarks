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
typedef  enum qlink_hidden_ssid { ____Placeholder_qlink_hidden_ssid } qlink_hidden_ssid ;
typedef  enum nl80211_hidden_ssid { ____Placeholder_nl80211_hidden_ssid } nl80211_hidden_ssid ;

/* Variables and functions */
#define  NL80211_HIDDEN_SSID_NOT_IN_USE 130 
#define  NL80211_HIDDEN_SSID_ZERO_CONTENTS 129 
#define  NL80211_HIDDEN_SSID_ZERO_LEN 128 
 int QLINK_HIDDEN_SSID_NOT_IN_USE ; 
 int QLINK_HIDDEN_SSID_ZERO_CONTENTS ; 
 int QLINK_HIDDEN_SSID_ZERO_LEN ; 

enum qlink_hidden_ssid qlink_hidden_ssid_nl2q(enum nl80211_hidden_ssid nl_val)
{
	switch (nl_val) {
	case NL80211_HIDDEN_SSID_ZERO_LEN:
		return QLINK_HIDDEN_SSID_ZERO_LEN;
	case NL80211_HIDDEN_SSID_ZERO_CONTENTS:
		return QLINK_HIDDEN_SSID_ZERO_CONTENTS;
	case NL80211_HIDDEN_SSID_NOT_IN_USE:
	default:
		return QLINK_HIDDEN_SSID_NOT_IN_USE;
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

    // int-bounds
    case 0:
    {
          enum nl80211_hidden_ssid nl_val = 0;
          enum qlink_hidden_ssid benchRet = qlink_hidden_ssid_nl2q(nl_val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
