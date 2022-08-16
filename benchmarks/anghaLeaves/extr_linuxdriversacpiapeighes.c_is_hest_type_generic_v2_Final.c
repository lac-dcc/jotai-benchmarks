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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ghes {TYPE_2__* generic; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ header; } ;

/* Variables and functions */
 scalar_t__ ACPI_HEST_TYPE_GENERIC_ERROR_V2 ; 

__attribute__((used)) static inline bool is_hest_type_generic_v2(struct ghes *ghes)
{
	return ghes->generic->header.type == ACPI_HEST_TYPE_GENERIC_ERROR_V2;
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
          int _len_ghes0 = 1;
          struct ghes * ghes = (struct ghes *) malloc(_len_ghes0*sizeof(struct ghes));
          for(int _i0 = 0; _i0 < _len_ghes0; _i0++) {
              int _len_ghes__i0__generic0 = 1;
          ghes[_i0].generic = (struct TYPE_4__ *) malloc(_len_ghes__i0__generic0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ghes__i0__generic0; _j0++) {
            ghes[_i0].generic->header.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_hest_type_generic_v2(ghes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ghes0; _aux++) {
          free(ghes[_aux].generic);
          }
          free(ghes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
