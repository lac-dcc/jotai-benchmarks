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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            linked\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  u64 ;
struct ba_lun_info {int /*<<< orphan*/  free_aun_cnt; } ;
struct ba_lun {struct ba_lun_info* ba_lun_handle; } ;

/* Variables and functions */

__attribute__((used)) static u64 ba_space(struct ba_lun *ba_lun)
{
	struct ba_lun_info *bali = ba_lun->ba_lun_handle;

	return bali->free_aun_cnt;
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
          int _len_ba_lun0 = 1;
          struct ba_lun * ba_lun = (struct ba_lun *) malloc(_len_ba_lun0*sizeof(struct ba_lun));
          for(int _i0 = 0; _i0 < _len_ba_lun0; _i0++) {
              int _len_ba_lun__i0__ba_lun_handle0 = 1;
          ba_lun[_i0].ba_lun_handle = (struct ba_lun_info *) malloc(_len_ba_lun__i0__ba_lun_handle0*sizeof(struct ba_lun_info));
          for(int _j0 = 0; _j0 < _len_ba_lun__i0__ba_lun_handle0; _j0++) {
            ba_lun[_i0].ba_lun_handle->free_aun_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ba_space(ba_lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ba_lun0; _aux++) {
          free(ba_lun[_aux].ba_lun_handle);
          }
          free(ba_lun);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ba_lun0 = 65025;
          struct ba_lun * ba_lun = (struct ba_lun *) malloc(_len_ba_lun0*sizeof(struct ba_lun));
          for(int _i0 = 0; _i0 < _len_ba_lun0; _i0++) {
              int _len_ba_lun__i0__ba_lun_handle0 = 1;
          ba_lun[_i0].ba_lun_handle = (struct ba_lun_info *) malloc(_len_ba_lun__i0__ba_lun_handle0*sizeof(struct ba_lun_info));
          for(int _j0 = 0; _j0 < _len_ba_lun__i0__ba_lun_handle0; _j0++) {
            ba_lun[_i0].ba_lun_handle->free_aun_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ba_space(ba_lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ba_lun0; _aux++) {
          free(ba_lun[_aux].ba_lun_handle);
          }
          free(ba_lun);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ba_lun0 = 100;
          struct ba_lun * ba_lun = (struct ba_lun *) malloc(_len_ba_lun0*sizeof(struct ba_lun));
          for(int _i0 = 0; _i0 < _len_ba_lun0; _i0++) {
              int _len_ba_lun__i0__ba_lun_handle0 = 1;
          ba_lun[_i0].ba_lun_handle = (struct ba_lun_info *) malloc(_len_ba_lun__i0__ba_lun_handle0*sizeof(struct ba_lun_info));
          for(int _j0 = 0; _j0 < _len_ba_lun__i0__ba_lun_handle0; _j0++) {
            ba_lun[_i0].ba_lun_handle->free_aun_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ba_space(ba_lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ba_lun0; _aux++) {
          free(ba_lun[_aux].ba_lun_handle);
          }
          free(ba_lun);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_ba_lun0 = 1;
          struct ba_lun * ba_lun = (struct ba_lun *) malloc(_len_ba_lun0*sizeof(struct ba_lun));
          for(int _i0 = 0; _i0 < _len_ba_lun0; _i0++) {
              int _len_ba_lun__i0__ba_lun_handle0 = 1;
          ba_lun[_i0].ba_lun_handle = (struct ba_lun_info *) malloc(_len_ba_lun__i0__ba_lun_handle0*sizeof(struct ba_lun_info));
          for(int _j0 = 0; _j0 < _len_ba_lun__i0__ba_lun_handle0; _j0++) {
            ba_lun[_i0].ba_lun_handle->free_aun_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ba_space(ba_lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ba_lun0; _aux++) {
          free(ba_lun[_aux].ba_lun_handle);
          }
          free(ba_lun);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
