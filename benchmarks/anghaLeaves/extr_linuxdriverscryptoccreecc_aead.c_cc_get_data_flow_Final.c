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
typedef  enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;
typedef  enum cc_flow_mode { ____Placeholder_cc_flow_mode } cc_flow_mode ;

/* Variables and functions */
 int AES_and_HASH ; 
 int AES_to_HASH_and_DOUT ; 
 int DES_and_HASH ; 
 int DES_to_HASH_and_DOUT ; 
 int DIN_AES_DOUT ; 
 int DIN_DES_DOUT ; 
 int DRV_CRYPTO_DIRECTION_ENCRYPT ; 
 int S_DIN_to_AES ; 

__attribute__((used)) static enum cc_flow_mode cc_get_data_flow(enum drv_crypto_direction direct,
					  enum cc_flow_mode setup_flow_mode,
					  bool is_single_pass)
{
	enum cc_flow_mode data_flow_mode;

	if (direct == DRV_CRYPTO_DIRECTION_ENCRYPT) {
		if (setup_flow_mode == S_DIN_to_AES)
			data_flow_mode = is_single_pass ?
				AES_to_HASH_and_DOUT : DIN_AES_DOUT;
		else
			data_flow_mode = is_single_pass ?
				DES_to_HASH_and_DOUT : DIN_DES_DOUT;
	} else { /* Decrypt */
		if (setup_flow_mode == S_DIN_to_AES)
			data_flow_mode = is_single_pass ?
				AES_and_HASH : DIN_AES_DOUT;
		else
			data_flow_mode = is_single_pass ?
				DES_and_HASH : DIN_DES_DOUT;
	}

	return data_flow_mode;
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
          enum drv_crypto_direction direct = 0;
          enum cc_flow_mode setup_flow_mode = 0;
          int is_single_pass = 100;
          enum cc_flow_mode benchRet = cc_get_data_flow(direct,setup_flow_mode,is_single_pass);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum drv_crypto_direction direct = 0;
          enum cc_flow_mode setup_flow_mode = 0;
          int is_single_pass = 255;
          enum cc_flow_mode benchRet = cc_get_data_flow(direct,setup_flow_mode,is_single_pass);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum drv_crypto_direction direct = 0;
          enum cc_flow_mode setup_flow_mode = 0;
          int is_single_pass = 10;
          enum cc_flow_mode benchRet = cc_get_data_flow(direct,setup_flow_mode,is_single_pass);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
