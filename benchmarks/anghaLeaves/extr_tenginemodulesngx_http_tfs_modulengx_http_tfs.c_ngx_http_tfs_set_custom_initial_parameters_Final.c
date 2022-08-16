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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int code; } ;
struct TYPE_8__ {int /*<<< orphan*/  size; int /*<<< orphan*/  offset; int /*<<< orphan*/  file_type; int /*<<< orphan*/  file_path_s; int /*<<< orphan*/  file_path_d; TYPE_1__ action; int /*<<< orphan*/  file_suffix; } ;
struct TYPE_7__ {int /*<<< orphan*/  left_length; int /*<<< orphan*/  file_offset; } ;
struct TYPE_9__ {int last_file_pid; TYPE_3__ r_ctx; TYPE_2__ file; int /*<<< orphan*/  last_file_type; int /*<<< orphan*/  last_file_path; int /*<<< orphan*/  file_name; } ;
typedef  TYPE_4__ ngx_http_tfs_t ;

/* Variables and functions */
#define  NGX_HTTP_TFS_ACTION_CREATE_DIR 135 
#define  NGX_HTTP_TFS_ACTION_CREATE_FILE 134 
#define  NGX_HTTP_TFS_ACTION_LS_DIR 133 
#define  NGX_HTTP_TFS_ACTION_LS_FILE 132 
#define  NGX_HTTP_TFS_ACTION_MOVE_DIR 131 
#define  NGX_HTTP_TFS_ACTION_MOVE_FILE 130 
#define  NGX_HTTP_TFS_ACTION_READ_FILE 129 
#define  NGX_HTTP_TFS_ACTION_REMOVE_FILE 128 

void
ngx_http_tfs_set_custom_initial_parameters(ngx_http_tfs_t *t)
{
    /* for stat log */
    t->file_name = t->r_ctx.file_path_s;
    t->r_ctx.file_suffix = t->r_ctx.file_path_d;

    switch(t->r_ctx.action.code) {
    case NGX_HTTP_TFS_ACTION_CREATE_DIR:
    case NGX_HTTP_TFS_ACTION_CREATE_FILE:
        t->last_file_path = t->r_ctx.file_path_s;
        break;

    case NGX_HTTP_TFS_ACTION_MOVE_DIR:
    case NGX_HTTP_TFS_ACTION_MOVE_FILE:
        t->last_file_path = t->r_ctx.file_path_d;
        break;

    case NGX_HTTP_TFS_ACTION_LS_DIR:
    case NGX_HTTP_TFS_ACTION_LS_FILE:
        /* set initial ls parameter */
        t->last_file_path = t->r_ctx.file_path_s;
        t->last_file_pid = -1;
        t->last_file_type = t->r_ctx.file_type;
        break;

    case NGX_HTTP_TFS_ACTION_READ_FILE:
    case NGX_HTTP_TFS_ACTION_REMOVE_FILE:
        t->file.file_offset = t->r_ctx.offset;
        t->file.left_length = t->r_ctx.size;
        break;
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
          int _len_t0 = 1;
          struct TYPE_9__ * t = (struct TYPE_9__ *) malloc(_len_t0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].last_file_pid = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.size = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.file_type = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.file_path_s = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.file_path_d = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.action.code = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].r_ctx.file_suffix = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.left_length = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file.file_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].last_file_type = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].last_file_path = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].file_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_tfs_set_custom_initial_parameters(t);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
