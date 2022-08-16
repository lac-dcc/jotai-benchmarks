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
typedef  int u16 ;

/* Variables and functions */
 int ENXIO ; 
 int ETP_FW_PAGE_SIZE ; 
 int ETP_FW_SIGNATURE_SIZE ; 

__attribute__((used)) static int elan_get_fwinfo(u16 ic_type, u16 *validpage_count,
			   u16 *signature_address)
{
	switch (ic_type) {
	case 0x00:
	case 0x06:
	case 0x08:
		*validpage_count = 512;
		break;
	case 0x03:
	case 0x07:
	case 0x09:
	case 0x0A:
	case 0x0B:
	case 0x0C:
		*validpage_count = 768;
		break;
	case 0x0D:
		*validpage_count = 896;
		break;
	case 0x0E:
		*validpage_count = 640;
		break;
	case 0x10:
		*validpage_count = 1024;
		break;
	default:
		/* unknown ic type clear value */
		*validpage_count = 0;
		*signature_address = 0;
		return -ENXIO;
	}

	*signature_address =
		(*validpage_count * ETP_FW_PAGE_SIZE) - ETP_FW_SIGNATURE_SIZE;

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
          int ic_type = 100;
          int _len_validpage_count0 = 1;
          int * validpage_count = (int *) malloc(_len_validpage_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_validpage_count0; _i0++) {
            validpage_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_signature_address0 = 1;
          int * signature_address = (int *) malloc(_len_signature_address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_signature_address0; _i0++) {
            signature_address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = elan_get_fwinfo(ic_type,validpage_count,signature_address);
          printf("%d\n", benchRet); 
          free(validpage_count);
          free(signature_address);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
