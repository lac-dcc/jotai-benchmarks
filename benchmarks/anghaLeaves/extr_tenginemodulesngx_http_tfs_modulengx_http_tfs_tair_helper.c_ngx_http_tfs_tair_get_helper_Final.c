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
typedef  int /*<<< orphan*/  ngx_pool_t ;
typedef  int /*<<< orphan*/  ngx_log_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
typedef  int /*<<< orphan*/  ngx_http_tfs_tair_instance_t ;
typedef  int /*<<< orphan*/  ngx_http_tair_get_handler_pt ;
typedef  int /*<<< orphan*/  ngx_http_tair_data_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_ERROR ; 

ngx_int_t
ngx_http_tfs_tair_get_helper(ngx_http_tfs_tair_instance_t *instance,
    ngx_pool_t *pool, ngx_log_t *log,
    ngx_http_tair_data_t *key, ngx_http_tair_get_handler_pt callback,
    void *data)
{
    return NGX_ERROR;
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
          int callback = 100;
          int _len_instance0 = 1;
          int * instance = (int *) malloc(_len_instance0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
            instance[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pool0 = 1;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_log0 = 1;
          int * log = (int *) malloc(_len_log0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = ngx_http_tfs_tair_get_helper(instance,pool,log,key,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int callback = 255;
          int _len_instance0 = 65025;
          int * instance = (int *) malloc(_len_instance0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
            instance[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pool0 = 65025;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_log0 = 65025;
          int * log = (int *) malloc(_len_log0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = ngx_http_tfs_tair_get_helper(instance,pool,log,key,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int callback = 10;
          int _len_instance0 = 100;
          int * instance = (int *) malloc(_len_instance0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
            instance[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pool0 = 100;
          int * pool = (int *) malloc(_len_pool0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_log0 = 100;
          int * log = (int *) malloc(_len_log0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          int * key = (int *) malloc(_len_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = ngx_http_tfs_tair_get_helper(instance,pool,log,key,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
