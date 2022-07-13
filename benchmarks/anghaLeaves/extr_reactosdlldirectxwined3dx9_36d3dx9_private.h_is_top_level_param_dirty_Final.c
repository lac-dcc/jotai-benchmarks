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
struct d3dx_top_level_parameter {scalar_t__ update_version; struct d3dx_shared_data* shared_data; } ;
struct d3dx_shared_data {scalar_t__ update_version; } ;
typedef  scalar_t__ ULONG64 ;
typedef  int BOOL ;

/* Variables and functions */

__attribute__((used)) static inline BOOL is_top_level_param_dirty(struct d3dx_top_level_parameter *param, ULONG64 update_version)
{
    struct d3dx_shared_data *shared_data;

    if ((shared_data = param->shared_data))
        return update_version < shared_data->update_version;
    else
        return update_version < param->update_version;
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
          long update_version = 100;
          int _len_param0 = 1;
          struct d3dx_top_level_parameter * param = (struct d3dx_top_level_parameter *) malloc(_len_param0*sizeof(struct d3dx_top_level_parameter));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].update_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__shared_data0 = 1;
          param[_i0].shared_data = (struct d3dx_shared_data *) malloc(_len_param__i0__shared_data0*sizeof(struct d3dx_shared_data));
          for(int _j0 = 0; _j0 < _len_param__i0__shared_data0; _j0++) {
            param[_i0].shared_data->update_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_top_level_param_dirty(param,update_version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].shared_data);
          }
          free(param);
        
        break;
    }
    // big-arr
    case 1:
    {
          long update_version = 255;
          int _len_param0 = 65025;
          struct d3dx_top_level_parameter * param = (struct d3dx_top_level_parameter *) malloc(_len_param0*sizeof(struct d3dx_top_level_parameter));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].update_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__shared_data0 = 1;
          param[_i0].shared_data = (struct d3dx_shared_data *) malloc(_len_param__i0__shared_data0*sizeof(struct d3dx_shared_data));
          for(int _j0 = 0; _j0 < _len_param__i0__shared_data0; _j0++) {
            param[_i0].shared_data->update_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_top_level_param_dirty(param,update_version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].shared_data);
          }
          free(param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long update_version = 10;
          int _len_param0 = 100;
          struct d3dx_top_level_parameter * param = (struct d3dx_top_level_parameter *) malloc(_len_param0*sizeof(struct d3dx_top_level_parameter));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].update_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__shared_data0 = 1;
          param[_i0].shared_data = (struct d3dx_shared_data *) malloc(_len_param__i0__shared_data0*sizeof(struct d3dx_shared_data));
          for(int _j0 = 0; _j0 < _len_param__i0__shared_data0; _j0++) {
            param[_i0].shared_data->update_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_top_level_param_dirty(param,update_version);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].shared_data);
          }
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
