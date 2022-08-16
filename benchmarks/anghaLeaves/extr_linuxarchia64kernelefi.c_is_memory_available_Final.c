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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int attribute; int type; } ;
typedef  TYPE_1__ efi_memory_desc_t ;

/* Variables and functions */
#define  EFI_BOOT_SERVICES_CODE 132 
#define  EFI_BOOT_SERVICES_DATA 131 
#define  EFI_CONVENTIONAL_MEMORY 130 
#define  EFI_LOADER_CODE 129 
#define  EFI_LOADER_DATA 128 
 int EFI_MEMORY_WB ; 

__attribute__((used)) static int
is_memory_available (efi_memory_desc_t *md)
{
	if (!(md->attribute & EFI_MEMORY_WB))
		return 0;

	switch (md->type) {
	      case EFI_LOADER_CODE:
	      case EFI_LOADER_DATA:
	      case EFI_BOOT_SERVICES_CODE:
	      case EFI_BOOT_SERVICES_DATA:
	      case EFI_CONVENTIONAL_MEMORY:
		return 1;
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
          int _len_md0 = 1;
          struct TYPE_3__ * md = (struct TYPE_3__ *) malloc(_len_md0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].attribute = ((-2 * (next_i()%2)) + 1) * next_i();
        md[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_memory_available(md);
          printf("%d\n", benchRet); 
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
