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
typedef  int /*<<< orphan*/  ngx_str_t ;
typedef  int /*<<< orphan*/  ngx_open_file_info_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
typedef  int /*<<< orphan*/  ngx_http_request_t ;
typedef  int /*<<< orphan*/  ngx_http_core_loc_conf_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

ngx_int_t
ngx_http_set_disable_symlinks(ngx_http_request_t *r,
    ngx_http_core_loc_conf_t *clcf, ngx_str_t *path, ngx_open_file_info_t *of)
{
#if (NGX_HAVE_OPENAT)
    u_char     *p;
    ngx_str_t   from;

    of->disable_symlinks = clcf->disable_symlinks;

    if (clcf->disable_symlinks_from == NULL) {
        return NGX_OK;
    }

    if (ngx_http_complex_value(r, clcf->disable_symlinks_from, &from)
        != NGX_OK)
    {
        return NGX_ERROR;
    }

    if (from.len == 0
        || from.len > path->len
        || ngx_memcmp(path->data, from.data, from.len) != 0)
    {
        return NGX_OK;
    }

    if (from.len == path->len) {
        of->disable_symlinks = NGX_DISABLE_SYMLINKS_OFF;
        return NGX_OK;
    }

    p = path->data + from.len;

    if (*p == '/') {
        of->disable_symlinks_from = from.len;
        return NGX_OK;
    }

    p--;

    if (*p == '/') {
        of->disable_symlinks_from = from.len - 1;
    }
#endif

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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int _len_r0 = 65025;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clcf0 = 65025;
          int * clcf = (int *) malloc(_len_clcf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clcf0; _i0++) {
            clcf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_path0 = 65025;
          int * path = (int *) malloc(_len_path0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_of0 = 65025;
          int * of = (int *) malloc(_len_of0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_of0; _i0++) {
            of[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_http_set_disable_symlinks(r,clcf,path,of);
          printf("%d\n", benchRet); 
          free(r);
          free(clcf);
          free(path);
          free(of);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int _len_r0 = 100;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clcf0 = 100;
          int * clcf = (int *) malloc(_len_clcf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clcf0; _i0++) {
            clcf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_path0 = 100;
          int * path = (int *) malloc(_len_path0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_of0 = 100;
          int * of = (int *) malloc(_len_of0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_of0; _i0++) {
            of[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_http_set_disable_symlinks(r,clcf,path,of);
          printf("%d\n", benchRet); 
          free(r);
          free(clcf);
          free(path);
          free(of);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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

          int _len_r0 = 1;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_clcf0 = 1;
          int * clcf = (int *) malloc(_len_clcf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clcf0; _i0++) {
            clcf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_path0 = 1;
          int * path = (int *) malloc(_len_path0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_of0 = 1;
          int * of = (int *) malloc(_len_of0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_of0; _i0++) {
            of[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ngx_http_set_disable_symlinks(r,clcf,path,of);
          printf("%d\n", benchRet); 
          free(r);
          free(clcf);
          free(path);
          free(of);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
