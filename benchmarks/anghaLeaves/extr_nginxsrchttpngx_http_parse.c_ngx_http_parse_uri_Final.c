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
typedef  char u_char ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_3__ {char* uri_start; char* uri_end; int space_in_uri; int complex_uri; int quoted_uri; char* args_start; int plus_in_uri; char* uri_ext; } ;
typedef  TYPE_1__ ngx_http_request_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_ERROR ; 
 int /*<<< orphan*/  NGX_OK ; 
 unsigned int* usual ; 

ngx_int_t
ngx_http_parse_uri(ngx_http_request_t *r)
{
    u_char  *p, ch;
    enum {
        sw_start = 0,
        sw_after_slash_in_uri,
        sw_check_uri,
        sw_uri
    } state;

    state = sw_start;

    for (p = r->uri_start; p != r->uri_end; p++) {

        ch = *p;

        switch (state) {

        case sw_start:

            if (ch != '/') {
                return NGX_ERROR;
            }

            state = sw_after_slash_in_uri;
            break;

        /* check "/.", "//", "%", and "\" (Win32) in URI */
        case sw_after_slash_in_uri:

            if (usual[ch >> 5] & (1U << (ch & 0x1f))) {
                state = sw_check_uri;
                break;
            }

            switch (ch) {
            case ' ':
                r->space_in_uri = 1;
                state = sw_check_uri;
                break;
            case '.':
                r->complex_uri = 1;
                state = sw_uri;
                break;
            case '%':
                r->quoted_uri = 1;
                state = sw_uri;
                break;
            case '/':
                r->complex_uri = 1;
                state = sw_uri;
                break;
#if (NGX_WIN32)
            case '\\':
                r->complex_uri = 1;
                state = sw_uri;
                break;
#endif
            case '?':
                r->args_start = p + 1;
                state = sw_uri;
                break;
            case '#':
                r->complex_uri = 1;
                state = sw_uri;
                break;
            case '+':
                r->plus_in_uri = 1;
                break;
            default:
                state = sw_check_uri;
                break;
            }
            break;

        /* check "/", "%" and "\" (Win32) in URI */
        case sw_check_uri:

            if (usual[ch >> 5] & (1U << (ch & 0x1f))) {
                break;
            }

            switch (ch) {
            case '/':
#if (NGX_WIN32)
                if (r->uri_ext == p) {
                    r->complex_uri = 1;
                    state = sw_uri;
                    break;
                }
#endif
                r->uri_ext = NULL;
                state = sw_after_slash_in_uri;
                break;
            case '.':
                r->uri_ext = p + 1;
                break;
            case ' ':
                r->space_in_uri = 1;
                break;
#if (NGX_WIN32)
            case '\\':
                r->complex_uri = 1;
                state = sw_after_slash_in_uri;
                break;
#endif
            case '%':
                r->quoted_uri = 1;
                state = sw_uri;
                break;
            case '?':
                r->args_start = p + 1;
                state = sw_uri;
                break;
            case '#':
                r->complex_uri = 1;
                state = sw_uri;
                break;
            case '+':
                r->plus_in_uri = 1;
                break;
            }
            break;

        /* URI */
        case sw_uri:

            if (usual[ch >> 5] & (1U << (ch & 0x1f))) {
                break;
            }

            switch (ch) {
            case ' ':
                r->space_in_uri = 1;
                break;
            case '#':
                r->complex_uri = 1;
                break;
            }
            break;
        }
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
          int _len_r0 = 1;
          struct TYPE_3__ * r = (struct TYPE_3__ *) malloc(_len_r0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__uri_start0 = 1;
          r[_i0].uri_start = (char *) malloc(_len_r__i0__uri_start0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_r__i0__uri_start0; _j0++) {
            r[_i0].uri_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r__i0__uri_end0 = 1;
          r[_i0].uri_end = (char *) malloc(_len_r__i0__uri_end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_r__i0__uri_end0; _j0++) {
            r[_i0].uri_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].space_in_uri = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].complex_uri = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].quoted_uri = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__args_start0 = 1;
          r[_i0].args_start = (char *) malloc(_len_r__i0__args_start0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_r__i0__args_start0; _j0++) {
            r[_i0].args_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].plus_in_uri = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__uri_ext0 = 1;
          r[_i0].uri_ext = (char *) malloc(_len_r__i0__uri_ext0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_r__i0__uri_ext0; _j0++) {
            r[_i0].uri_ext[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_parse_uri(r);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].uri_start);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].uri_end);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].args_start);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].uri_ext);
          }
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
