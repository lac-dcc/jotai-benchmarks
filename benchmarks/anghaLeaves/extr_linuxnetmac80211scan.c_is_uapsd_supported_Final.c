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
typedef  int u8 ;
struct ieee802_11_elems {int* wmm_info; int wmm_info_len; int* wmm_param; int wmm_param_len; } ;

/* Variables and functions */
 int IEEE80211_WMM_IE_AP_QOSINFO_UAPSD ; 

__attribute__((used)) static bool is_uapsd_supported(struct ieee802_11_elems *elems)
{
	u8 qos_info;

	if (elems->wmm_info && elems->wmm_info_len == 7
	    && elems->wmm_info[5] == 1)
		qos_info = elems->wmm_info[6];
	else if (elems->wmm_param && elems->wmm_param_len == 24
		 && elems->wmm_param[5] == 1)
		qos_info = elems->wmm_param[6];
	else
		/* no valid wmm information or parameter element found */
		return false;

	return qos_info & IEEE80211_WMM_IE_AP_QOSINFO_UAPSD;
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
          int _len_elems0 = 1;
          struct ieee802_11_elems * elems = (struct ieee802_11_elems *) malloc(_len_elems0*sizeof(struct ieee802_11_elems));
          for(int _i0 = 0; _i0 < _len_elems0; _i0++) {
              int _len_elems__i0__wmm_info0 = 1;
          elems[_i0].wmm_info = (int *) malloc(_len_elems__i0__wmm_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elems__i0__wmm_info0; _j0++) {
            elems[_i0].wmm_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        elems[_i0].wmm_info_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_elems__i0__wmm_param0 = 1;
          elems[_i0].wmm_param = (int *) malloc(_len_elems__i0__wmm_param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elems__i0__wmm_param0; _j0++) {
            elems[_i0].wmm_param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        elems[_i0].wmm_param_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_uapsd_supported(elems);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_elems0; _aux++) {
          free(elems[_aux].wmm_info);
          }
          for(int _aux = 0; _aux < _len_elems0; _aux++) {
          free(elems[_aux].wmm_param);
          }
          free(elems);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
