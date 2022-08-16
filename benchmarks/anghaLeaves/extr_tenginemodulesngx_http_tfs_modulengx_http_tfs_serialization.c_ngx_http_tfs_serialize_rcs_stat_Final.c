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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint64_t ;
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  u_char ;
typedef  size_t ngx_int_t ;
struct TYPE_4__ {int oper_app_id; int oper_type; int /*<<< orphan*/  oper_succ; int /*<<< orphan*/  oper_rt; int /*<<< orphan*/  oper_size; int /*<<< orphan*/  oper_times; } ;
typedef  TYPE_1__ ngx_http_tfs_stat_rcs_t ;
struct TYPE_5__ {TYPE_1__* stat_rcs; } ;
typedef  TYPE_2__ ngx_http_tfs_rcs_info_t ;

/* Variables and functions */
 size_t NGX_ERROR ; 
 size_t NGX_HTTP_TFS_OPER_COUNT ; 
 size_t NGX_OK ; 

ngx_int_t
ngx_http_tfs_serialize_rcs_stat(u_char **p,
    ngx_http_tfs_rcs_info_t  *rc_info, ngx_int_t *count)
{
    ngx_int_t                    i;
    ngx_http_tfs_stat_rcs_t     *stat_rcs;

    if (p == NULL || rc_info == NULL || count == NULL) {
        return NGX_ERROR;
    }

    *count = 0;
    stat_rcs = rc_info->stat_rcs;

    for (i = 0; i < NGX_HTTP_TFS_OPER_COUNT; ++i) {
        if (stat_rcs[i].oper_app_id == 0) {
            continue;
        }

        *((uint32_t *)*p) = (stat_rcs[i].oper_app_id << 16) | stat_rcs[i].oper_type;
        (*p) += sizeof(uint32_t);

        *((uint32_t *)*p) = (stat_rcs[i].oper_app_id << 16) | stat_rcs[i].oper_type;
        (*p) += sizeof(uint32_t);
        *((uint64_t *)*p) = stat_rcs[i].oper_times;
        (*p) += sizeof(uint64_t);
        *((uint64_t *)*p) = stat_rcs[i].oper_size;
        (*p) += sizeof(uint64_t);
        *((uint64_t *)*p) = stat_rcs[i].oper_rt;
        (*p) += sizeof(uint64_t);
        *((uint64_t *)*p) = stat_rcs[i].oper_succ;
        (*p) += sizeof(uint64_t);

        ++(*count);
    }

    return NGX_OK;
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
          int _len_p0 = 1;
          int ** p = (int **) malloc(_len_p0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            int _len_p1 = 1;
            p[_i0] = (int *) malloc(_len_p1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_p1; _i1++) {
              p[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rc_info0 = 1;
          struct TYPE_5__ * rc_info = (struct TYPE_5__ *) malloc(_len_rc_info0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rc_info0; _i0++) {
              int _len_rc_info__i0__stat_rcs0 = 1;
          rc_info[_i0].stat_rcs = (struct TYPE_4__ *) malloc(_len_rc_info__i0__stat_rcs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rc_info__i0__stat_rcs0; _j0++) {
            rc_info[_i0].stat_rcs->oper_app_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rc_info[_i0].stat_rcs->oper_type = ((-2 * (next_i()%2)) + 1) * next_i();
        rc_info[_i0].stat_rcs->oper_succ = ((-2 * (next_i()%2)) + 1) * next_i();
        rc_info[_i0].stat_rcs->oper_rt = ((-2 * (next_i()%2)) + 1) * next_i();
        rc_info[_i0].stat_rcs->oper_size = ((-2 * (next_i()%2)) + 1) * next_i();
        rc_info[_i0].stat_rcs->oper_times = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_count0 = 1;
          unsigned long * count = (unsigned long *) malloc(_len_count0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ngx_http_tfs_serialize_rcs_stat(p,rc_info,count);
          printf("%lu\n", benchRet); 
          for(int i1 = 0; i1 < _len_p0; i1++) {
            int _len_p1 = 1;
              free(p[i1]);
          }
          free(p);
          for(int _aux = 0; _aux < _len_rc_info0; _aux++) {
          free(rc_info[_aux].stat_rcs);
          }
          free(rc_info);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
