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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  ngx_pool_t ;
typedef  int /*<<< orphan*/  ngx_log_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
typedef  int /*<<< orphan*/  ngx_http_tfs_tair_instance_t ;
typedef  int /*<<< orphan*/  ngx_http_tair_mget_handler_pt ;
typedef  int /*<<< orphan*/  ngx_array_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_ERROR ; 

ngx_int_t ngx_http_tfs_tair_mget_helper(ngx_http_tfs_tair_instance_t *instance,
    ngx_pool_t *pool, ngx_log_t *log,
    ngx_array_t *kvs, ngx_http_tair_mget_handler_pt callback, void *data)
{
    return NGX_ERROR;
}

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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

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
        
          int _len_kvs0 = 1;
          int * kvs = (int *) malloc(_len_kvs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kvs0; _i0++) {
            kvs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * data;
        
          int benchRet = ngx_http_tfs_tair_mget_helper(instance,pool,log,kvs,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(kvs);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

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
        
          int _len_kvs0 = 65025;
          int * kvs = (int *) malloc(_len_kvs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kvs0; _i0++) {
            kvs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * data;
        
          int benchRet = ngx_http_tfs_tair_mget_helper(instance,pool,log,kvs,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(kvs);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

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
        
          int _len_kvs0 = 100;
          int * kvs = (int *) malloc(_len_kvs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kvs0; _i0++) {
            kvs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * data;
        
          int benchRet = ngx_http_tfs_tair_mget_helper(instance,pool,log,kvs,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(kvs);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
        
          int _len_kvs0 = 1;
          int * kvs = (int *) malloc(_len_kvs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kvs0; _i0++) {
            kvs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          void * data;
        
          int benchRet = ngx_http_tfs_tair_mget_helper(instance,pool,log,kvs,callback,data);
          printf("%d\n", benchRet); 
          free(instance);
          free(pool);
          free(log);
          free(kvs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
