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
       0            big-arr\n\
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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  __le16 ;

/* Variables and functions */

void qed_set_fw_mac_addr(__le16 *fw_msb,
			 __le16 *fw_mid, __le16 *fw_lsb, u8 *mac)
{
	((u8 *)fw_msb)[0] = mac[1];
	((u8 *)fw_msb)[1] = mac[0];
	((u8 *)fw_mid)[0] = mac[3];
	((u8 *)fw_mid)[1] = mac[2];
	((u8 *)fw_lsb)[0] = mac[5];
	((u8 *)fw_lsb)[1] = mac[4];
}

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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_fw_msb0 = 65025;
          int * fw_msb = (int *) malloc(_len_fw_msb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_msb0; _i0++) {
            fw_msb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_fw_mid0 = 65025;
          int * fw_mid = (int *) malloc(_len_fw_mid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_mid0; _i0++) {
            fw_mid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_fw_lsb0 = 65025;
          int * fw_lsb = (int *) malloc(_len_fw_lsb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_lsb0; _i0++) {
            fw_lsb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mac0 = 65025;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          qed_set_fw_mac_addr(fw_msb,fw_mid,fw_lsb,mac);
          free(fw_msb);
          free(fw_mid);
          free(fw_lsb);
          free(mac);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_fw_msb0 = 100;
          int * fw_msb = (int *) malloc(_len_fw_msb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_msb0; _i0++) {
            fw_msb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_fw_mid0 = 100;
          int * fw_mid = (int *) malloc(_len_fw_mid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_mid0; _i0++) {
            fw_mid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_fw_lsb0 = 100;
          int * fw_lsb = (int *) malloc(_len_fw_lsb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_lsb0; _i0++) {
            fw_lsb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mac0 = 100;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          qed_set_fw_mac_addr(fw_msb,fw_mid,fw_lsb,mac);
          free(fw_msb);
          free(fw_mid);
          free(fw_lsb);
          free(mac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
