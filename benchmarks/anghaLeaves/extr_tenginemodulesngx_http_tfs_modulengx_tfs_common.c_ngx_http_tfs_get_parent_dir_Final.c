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
typedef  int ngx_uint_t ;
struct TYPE_3__ {int len; char* data; } ;
typedef  TYPE_1__ ngx_str_t ;
typedef  int ngx_int_t ;

/* Variables and functions */

ngx_int_t
ngx_http_tfs_get_parent_dir(ngx_str_t *file_path, ngx_int_t *dir_level)
{
    ngx_uint_t  i, last_slash_pos;

    last_slash_pos = 0;

    if (dir_level != NULL) {
        *dir_level = 0;
    }

    for (i = 0; i < (file_path->len - 1); i++) {
        if (file_path->data[i] == '/'
            && (file_path->data[i + 1]) != '/')
        {
            last_slash_pos = i;
            if (dir_level != NULL) {
                (*dir_level)++;
            }
        }
    }

    return last_slash_pos + 1;
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
          int _len_file_path0 = 1;
          struct TYPE_3__ * file_path = (struct TYPE_3__ *) malloc(_len_file_path0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_file_path0; _i0++) {
            file_path[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file_path__i0__data0 = 1;
          file_path[_i0].data = (char *) malloc(_len_file_path__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_file_path__i0__data0; _j0++) {
            file_path[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dir_level0 = 1;
          int * dir_level = (int *) malloc(_len_dir_level0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dir_level0; _i0++) {
            dir_level[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_tfs_get_parent_dir(file_path,dir_level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_file_path0; _aux++) {
          free(file_path[_aux].data);
          }
          free(file_path);
          free(dir_level);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
