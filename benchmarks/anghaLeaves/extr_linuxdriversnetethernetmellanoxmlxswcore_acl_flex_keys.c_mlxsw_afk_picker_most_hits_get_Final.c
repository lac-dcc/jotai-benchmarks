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
struct mlxsw_afk_picker {TYPE_1__* hits; } ;
struct mlxsw_afk {int blocks_count; } ;
struct TYPE_2__ {int total; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mlxsw_afk_picker_most_hits_get(struct mlxsw_afk *mlxsw_afk,
					  struct mlxsw_afk_picker *picker)
{
	int most_index = -EINVAL; /* Should never happen to return this */
	int most_hits = 0;
	int i;

	for (i = 0; i < mlxsw_afk->blocks_count; i++) {
		if (picker->hits[i].total > most_hits) {
			most_hits = picker->hits[i].total;
			most_index = i;
		}
	}
	return most_index;
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
          int _len_mlxsw_afk0 = 1;
          struct mlxsw_afk * mlxsw_afk = (struct mlxsw_afk *) malloc(_len_mlxsw_afk0*sizeof(struct mlxsw_afk));
          for(int _i0 = 0; _i0 < _len_mlxsw_afk0; _i0++) {
            mlxsw_afk[_i0].blocks_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picker0 = 1;
          struct mlxsw_afk_picker * picker = (struct mlxsw_afk_picker *) malloc(_len_picker0*sizeof(struct mlxsw_afk_picker));
          for(int _i0 = 0; _i0 < _len_picker0; _i0++) {
              int _len_picker__i0__hits0 = 1;
          picker[_i0].hits = (struct TYPE_2__ *) malloc(_len_picker__i0__hits0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_picker__i0__hits0; _j0++) {
            picker[_i0].hits->total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlxsw_afk_picker_most_hits_get(mlxsw_afk,picker);
          printf("%d\n", benchRet); 
          free(mlxsw_afk);
          for(int _aux = 0; _aux < _len_picker0; _aux++) {
          free(picker[_aux].hits);
          }
          free(picker);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
