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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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

/* Type definitions */
typedef  int /*<<< orphan*/  ngx_int_t ;
typedef  int /*<<< orphan*/  ngx_conf_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 
 int /*<<< orphan*/  next_close_stream ; 
 int /*<<< orphan*/  next_pause ; 
 int /*<<< orphan*/  next_play ; 
 int /*<<< orphan*/  next_seek ; 
 int /*<<< orphan*/  ngx_rtmp_close_stream ; 
 int /*<<< orphan*/  ngx_rtmp_pause ; 
 int /*<<< orphan*/  ngx_rtmp_play ; 
 int /*<<< orphan*/  ngx_rtmp_play_close_stream ; 
 int /*<<< orphan*/  ngx_rtmp_play_pause ; 
 int /*<<< orphan*/  ngx_rtmp_play_play ; 
 int /*<<< orphan*/  ngx_rtmp_play_seek ; 
 int /*<<< orphan*/  ngx_rtmp_seek ; 

__attribute__((used)) static ngx_int_t
ngx_rtmp_play_postconfiguration(ngx_conf_t *cf)
{
    next_play = ngx_rtmp_play;
    ngx_rtmp_play = ngx_rtmp_play_play;

    next_close_stream = ngx_rtmp_close_stream;
    ngx_rtmp_close_stream = ngx_rtmp_play_close_stream;

    next_seek = ngx_rtmp_seek;
    ngx_rtmp_seek = ngx_rtmp_play_seek;

    next_pause = ngx_rtmp_pause;
    ngx_rtmp_pause = ngx_rtmp_play_pause;

    return NGX_OK;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_cf0 = 65025;
          int * cf = (int *) malloc(_len_cf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_rtmp_play_postconfiguration(cf);
          printf("%d\n", benchRet); 
          free(cf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cf0 = 100;
          int * cf = (int *) malloc(_len_cf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_rtmp_play_postconfiguration(cf);
          printf("%d\n", benchRet); 
          free(cf);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_cf0 = 1;
          int * cf = (int *) malloc(_len_cf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_rtmp_play_postconfiguration(cf);
          printf("%d\n", benchRet); 
          free(cf);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
