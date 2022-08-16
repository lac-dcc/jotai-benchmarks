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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct nfs_cache_array {scalar_t__ size; scalar_t__ eof_index; TYPE_1__* array; } ;
struct TYPE_7__ {scalar_t__ current_index; unsigned int cache_entry_index; int eof; int /*<<< orphan*/ * dir_cookie; TYPE_2__* ctx; } ;
typedef  TYPE_3__ nfs_readdir_descriptor_t ;
typedef  scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ pos; } ;
struct TYPE_5__ {int /*<<< orphan*/  cookie; } ;

/* Variables and functions */
 int EAGAIN ; 
 int EBADCOOKIE ; 

__attribute__((used)) static
int nfs_readdir_search_for_pos(struct nfs_cache_array *array, nfs_readdir_descriptor_t *desc)
{
	loff_t diff = desc->ctx->pos - desc->current_index;
	unsigned int index;

	if (diff < 0)
		goto out_eof;
	if (diff >= array->size) {
		if (array->eof_index >= 0)
			goto out_eof;
		return -EAGAIN;
	}

	index = (unsigned int)diff;
	*desc->dir_cookie = array->array[index].cookie;
	desc->cache_entry_index = index;
	return 0;
out_eof:
	desc->eof = true;
	return -EBADCOOKIE;
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
          int _len_array0 = 1;
          struct nfs_cache_array * array = (struct nfs_cache_array *) malloc(_len_array0*sizeof(struct nfs_cache_array));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        array[_i0].eof_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_array__i0__array0 = 1;
          array[_i0].array = (struct TYPE_5__ *) malloc(_len_array__i0__array0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_array__i0__array0; _j0++) {
            array[_i0].array->cookie = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_desc0 = 1;
          struct TYPE_7__ * desc = (struct TYPE_7__ *) malloc(_len_desc0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].current_index = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].cache_entry_index = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].eof = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__dir_cookie0 = 1;
          desc[_i0].dir_cookie = (int *) malloc(_len_desc__i0__dir_cookie0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__dir_cookie0; _j0++) {
            desc[_i0].dir_cookie[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__ctx0 = 1;
          desc[_i0].ctx = (struct TYPE_6__ *) malloc(_len_desc__i0__ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_desc__i0__ctx0; _j0++) {
            desc[_i0].ctx->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs_readdir_search_for_pos(array,desc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_array0; _aux++) {
          free(array[_aux].array);
          }
          free(array);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].dir_cookie);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].ctx);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
