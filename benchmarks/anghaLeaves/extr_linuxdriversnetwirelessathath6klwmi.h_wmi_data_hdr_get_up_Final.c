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

/* Type definitions */
typedef  int u8 ;
struct wmi_data_hdr {int info; } ;

/* Variables and functions */
 int WMI_DATA_HDR_UP_MASK ; 
 int WMI_DATA_HDR_UP_SHIFT ; 

__attribute__((used)) static inline u8 wmi_data_hdr_get_up(struct wmi_data_hdr *dhdr)
{
	return (dhdr->info >> WMI_DATA_HDR_UP_SHIFT) & WMI_DATA_HDR_UP_MASK;
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
          int _len_dhdr0 = 1;
          struct wmi_data_hdr * dhdr = (struct wmi_data_hdr *) malloc(_len_dhdr0*sizeof(struct wmi_data_hdr));
          for(int _i0 = 0; _i0 < _len_dhdr0; _i0++) {
            dhdr[_i0].info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wmi_data_hdr_get_up(dhdr);
          printf("%d\n", benchRet); 
          free(dhdr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dhdr0 = 100;
          struct wmi_data_hdr * dhdr = (struct wmi_data_hdr *) malloc(_len_dhdr0*sizeof(struct wmi_data_hdr));
          for(int _i0 = 0; _i0 < _len_dhdr0; _i0++) {
            dhdr[_i0].info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wmi_data_hdr_get_up(dhdr);
          printf("%d\n", benchRet); 
          free(dhdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
