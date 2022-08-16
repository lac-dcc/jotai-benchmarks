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
struct bfi_ioc_image_hdr {scalar_t__* md5sum; } ;

/* Variables and functions */
 int BFI_IOC_MD5SUM_SZ ; 

__attribute__((used)) static bool
bfa_ioc_fwver_md5_check(struct bfi_ioc_image_hdr *fwhdr_1,
			struct bfi_ioc_image_hdr *fwhdr_2)
{
	int i;

	for (i = 0; i < BFI_IOC_MD5SUM_SZ; i++) {
		if (fwhdr_1->md5sum[i] != fwhdr_2->md5sum[i])
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
          int _len_fwhdr_10 = 1;
          struct bfi_ioc_image_hdr * fwhdr_1 = (struct bfi_ioc_image_hdr *) malloc(_len_fwhdr_10*sizeof(struct bfi_ioc_image_hdr));
          for(int _i0 = 0; _i0 < _len_fwhdr_10; _i0++) {
              int _len_fwhdr_1__i0__md5sum0 = 1;
          fwhdr_1[_i0].md5sum = (long *) malloc(_len_fwhdr_1__i0__md5sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fwhdr_1__i0__md5sum0; _j0++) {
            fwhdr_1[_i0].md5sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fwhdr_20 = 1;
          struct bfi_ioc_image_hdr * fwhdr_2 = (struct bfi_ioc_image_hdr *) malloc(_len_fwhdr_20*sizeof(struct bfi_ioc_image_hdr));
          for(int _i0 = 0; _i0 < _len_fwhdr_20; _i0++) {
              int _len_fwhdr_2__i0__md5sum0 = 1;
          fwhdr_2[_i0].md5sum = (long *) malloc(_len_fwhdr_2__i0__md5sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fwhdr_2__i0__md5sum0; _j0++) {
            fwhdr_2[_i0].md5sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bfa_ioc_fwver_md5_check(fwhdr_1,fwhdr_2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fwhdr_10; _aux++) {
          free(fwhdr_1[_aux].md5sum);
          }
          free(fwhdr_1);
          for(int _aux = 0; _aux < _len_fwhdr_20; _aux++) {
          free(fwhdr_2[_aux].md5sum);
          }
          free(fwhdr_2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
