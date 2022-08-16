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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  crc; int /*<<< orphan*/  flag; int /*<<< orphan*/  create_time; int /*<<< orphan*/  modify_time; int /*<<< orphan*/  u_size; int /*<<< orphan*/  size; int /*<<< orphan*/  offset; int /*<<< orphan*/  id; } ;
typedef  TYPE_1__ ngx_http_tfs_raw_file_stat_t ;
struct TYPE_6__ {int /*<<< orphan*/  crc; int /*<<< orphan*/  flag; int /*<<< orphan*/  create_time; int /*<<< orphan*/  modify_time; int /*<<< orphan*/  u_size; int /*<<< orphan*/  size; int /*<<< orphan*/  offset; int /*<<< orphan*/  id; } ;
typedef  TYPE_2__ ngx_http_tfs_raw_file_info_t ;

/* Variables and functions */

void
ngx_http_tfs_wrap_raw_file_info(ngx_http_tfs_raw_file_info_t *file_info,
    ngx_http_tfs_raw_file_stat_t *file_stat)
{
    if (file_info != NULL && file_stat != NULL) {
        file_stat->id = file_info->id;
        file_stat->offset = file_info->offset;
        file_stat->size = file_info->size;
        file_stat->u_size = file_info->u_size;
        file_stat->modify_time = file_info->modify_time;
        file_stat->create_time = file_info->create_time;
        file_stat->flag = file_info->flag;
        file_stat->crc = file_info->crc;
    }
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
          int _len_file_info0 = 1;
          struct TYPE_6__ * file_info = (struct TYPE_6__ *) malloc(_len_file_info0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_file_info0; _i0++) {
            file_info[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].create_time = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].modify_time = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].u_size = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        file_info[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file_stat0 = 1;
          struct TYPE_5__ * file_stat = (struct TYPE_5__ *) malloc(_len_file_stat0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_file_stat0; _i0++) {
            file_stat[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].create_time = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].modify_time = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].u_size = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        file_stat[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_tfs_wrap_raw_file_info(file_info,file_stat);
          free(file_info);
          free(file_stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
