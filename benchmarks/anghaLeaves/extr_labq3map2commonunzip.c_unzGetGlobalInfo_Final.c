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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  gi; } ;
typedef  TYPE_1__ unz_s ;
typedef  int /*<<< orphan*/  unz_global_info ;
typedef  int /*<<< orphan*/ * unzFile ;

/* Variables and functions */
 int UNZ_OK ; 
 int UNZ_PARAMERROR ; 

extern int unzGetGlobalInfo (unzFile file,unz_global_info *pglobal_info)
{
	unz_s* s;
	if (file==NULL)
		return UNZ_PARAMERROR;
	s=(unz_s*)file;
	*pglobal_info=s->gi;
	return UNZ_OK;
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
          int _len_file0 = 1;
          int * file = (int *) malloc(_len_file0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pglobal_info0 = 1;
          int * pglobal_info = (int *) malloc(_len_pglobal_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pglobal_info0; _i0++) {
            pglobal_info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = unzGetGlobalInfo(file,pglobal_info);
          printf("%d\n", benchRet); 
          free(file);
          free(pglobal_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
