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
struct ndis_802_11_ssid {int SsidLength; int* Ssid; } ;

/* Variables and functions */

__attribute__((used)) static u8 validate_ssid(struct ndis_802_11_ssid *ssid)
{
	u8 i;

	if (ssid->SsidLength > 32)
		return false;
	for (i = 0; i < ssid->SsidLength; i++) {
		/* wifi, printable ascii code must be supported */
		if (!((ssid->Ssid[i] >= 0x20) && (ssid->Ssid[i] <= 0x7e)))
			return false;
	}
	return true;
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
          int _len_ssid0 = 1;
          struct ndis_802_11_ssid * ssid = (struct ndis_802_11_ssid *) malloc(_len_ssid0*sizeof(struct ndis_802_11_ssid));
          for(int _i0 = 0; _i0 < _len_ssid0; _i0++) {
            ssid[_i0].SsidLength = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ssid__i0__Ssid0 = 1;
          ssid[_i0].Ssid = (int *) malloc(_len_ssid__i0__Ssid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ssid__i0__Ssid0; _j0++) {
            ssid[_i0].Ssid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = validate_ssid(ssid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ssid0; _aux++) {
          free(ssid[_aux].Ssid);
          }
          free(ssid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
