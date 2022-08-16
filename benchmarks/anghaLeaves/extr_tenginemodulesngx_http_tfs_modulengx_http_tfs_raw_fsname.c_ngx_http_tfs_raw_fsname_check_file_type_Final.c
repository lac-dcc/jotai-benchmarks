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
struct TYPE_3__ {scalar_t__* data; scalar_t__ len; } ;
typedef  TYPE_1__ ngx_str_t ;
typedef  int /*<<< orphan*/  ngx_http_tfs_raw_file_type_e ;

/* Variables and functions */
 scalar_t__ NGX_HTTP_TFS_FILE_NAME_LEN ; 
 int /*<<< orphan*/  NGX_HTTP_TFS_INVALID_FILE_TYPE ; 
 scalar_t__ NGX_HTTP_TFS_LARGE_FILE_KEY_CHAR ; 
 int /*<<< orphan*/  NGX_HTTP_TFS_LARGE_FILE_TYPE ; 
 scalar_t__ NGX_HTTP_TFS_SMALL_FILE_KEY_CHAR ; 
 int /*<<< orphan*/  NGX_HTTP_TFS_SMALL_FILE_TYPE ; 

ngx_http_tfs_raw_file_type_e
ngx_http_tfs_raw_fsname_check_file_type(ngx_str_t *tfs_name)
{
    ngx_http_tfs_raw_file_type_e file_type = NGX_HTTP_TFS_INVALID_FILE_TYPE;

    if (tfs_name->data != NULL
        && tfs_name->len >= NGX_HTTP_TFS_FILE_NAME_LEN)
    {
        if (tfs_name->data[0] == NGX_HTTP_TFS_LARGE_FILE_KEY_CHAR) {
            file_type = NGX_HTTP_TFS_LARGE_FILE_TYPE;

        } else if (tfs_name->data[0] == NGX_HTTP_TFS_SMALL_FILE_KEY_CHAR) {
            file_type = NGX_HTTP_TFS_SMALL_FILE_TYPE;
        }
    }

    return file_type;
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
          int _len_tfs_name0 = 1;
          struct TYPE_3__ * tfs_name = (struct TYPE_3__ *) malloc(_len_tfs_name0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tfs_name0; _i0++) {
              int _len_tfs_name__i0__data0 = 1;
          tfs_name[_i0].data = (long *) malloc(_len_tfs_name__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tfs_name__i0__data0; _j0++) {
            tfs_name[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tfs_name[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_tfs_raw_fsname_check_file_type(tfs_name);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tfs_name0; _aux++) {
          free(tfs_name[_aux].data);
          }
          free(tfs_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
