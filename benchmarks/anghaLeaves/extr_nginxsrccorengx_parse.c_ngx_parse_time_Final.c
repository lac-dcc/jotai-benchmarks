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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  char u_char ;
typedef  int ngx_uint_t ;
struct TYPE_3__ {char* data; int len; } ;
typedef  TYPE_1__ ngx_str_t ;
typedef  char ngx_int_t ;

/* Variables and functions */
 char NGX_ERROR ; 
 int NGX_MAX_INT_T_VALUE ; 

ngx_int_t
ngx_parse_time(ngx_str_t *line, ngx_uint_t is_sec)
{
    u_char      *p, *last;
    ngx_int_t    value, total, scale;
    ngx_int_t    max, cutoff, cutlim;
    ngx_uint_t   valid;
    enum {
        st_start = 0,
        st_year,
        st_month,
        st_week,
        st_day,
        st_hour,
        st_min,
        st_sec,
        st_msec,
        st_last
    } step;

    valid = 0;
    value = 0;
    total = 0;
    cutoff = NGX_MAX_INT_T_VALUE / 10;
    cutlim = NGX_MAX_INT_T_VALUE % 10;
    step = is_sec ? st_start : st_month;

    p = line->data;
    last = p + line->len;

    while (p < last) {

        if (*p >= '0' && *p <= '9') {
            if (value >= cutoff && (value > cutoff || *p - '0' > cutlim)) {
                return NGX_ERROR;
            }

            value = value * 10 + (*p++ - '0');
            valid = 1;
            continue;
        }

        switch (*p++) {

        case 'y':
            if (step > st_start) {
                return NGX_ERROR;
            }
            step = st_year;
            max = NGX_MAX_INT_T_VALUE / (60 * 60 * 24 * 365);
            scale = 60 * 60 * 24 * 365;
            break;

        case 'M':
            if (step >= st_month) {
                return NGX_ERROR;
            }
            step = st_month;
            max = NGX_MAX_INT_T_VALUE / (60 * 60 * 24 * 30);
            scale = 60 * 60 * 24 * 30;
            break;

        case 'w':
            if (step >= st_week) {
                return NGX_ERROR;
            }
            step = st_week;
            max = NGX_MAX_INT_T_VALUE / (60 * 60 * 24 * 7);
            scale = 60 * 60 * 24 * 7;
            break;

        case 'd':
            if (step >= st_day) {
                return NGX_ERROR;
            }
            step = st_day;
            max = NGX_MAX_INT_T_VALUE / (60 * 60 * 24);
            scale = 60 * 60 * 24;
            break;

        case 'h':
            if (step >= st_hour) {
                return NGX_ERROR;
            }
            step = st_hour;
            max = NGX_MAX_INT_T_VALUE / (60 * 60);
            scale = 60 * 60;
            break;

        case 'm':
            if (p < last && *p == 's') {
                if (is_sec || step >= st_msec) {
                    return NGX_ERROR;
                }
                p++;
                step = st_msec;
                max = NGX_MAX_INT_T_VALUE;
                scale = 1;
                break;
            }

            if (step >= st_min) {
                return NGX_ERROR;
            }
            step = st_min;
            max = NGX_MAX_INT_T_VALUE / 60;
            scale = 60;
            break;

        case 's':
            if (step >= st_sec) {
                return NGX_ERROR;
            }
            step = st_sec;
            max = NGX_MAX_INT_T_VALUE;
            scale = 1;
            break;

        case ' ':
            if (step >= st_sec) {
                return NGX_ERROR;
            }
            step = st_last;
            max = NGX_MAX_INT_T_VALUE;
            scale = 1;
            break;

        default:
            return NGX_ERROR;
        }

        if (step != st_msec && !is_sec) {
            scale *= 1000;
            max /= 1000;
        }

        if (value > max) {
            return NGX_ERROR;
        }

        value *= scale;

        if (total > NGX_MAX_INT_T_VALUE - value) {
            return NGX_ERROR;
        }

        total += value;

        value = 0;

        while (p < last && *p == ' ') {
            p++;
        }
    }

    if (!valid) {
        return NGX_ERROR;
    }

    if (!is_sec) {
        if (value > NGX_MAX_INT_T_VALUE / 1000) {
            return NGX_ERROR;
        }

        value *= 1000;
    }

    if (total > NGX_MAX_INT_T_VALUE - value) {
        return NGX_ERROR;
    }

    return total + value;
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          int is_sec = 100;
        
          int _len_line0 = 1;
          struct TYPE_3__ * line = (struct TYPE_3__ *) malloc(_len_line0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              int _len_line__i0__data0 = 1;
          line[_i0].data = (char *) malloc(_len_line__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_line__i0__data0; _j0++) {
            line[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          line[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char benchRet = ngx_parse_time(line,is_sec);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_line0; _aux++) {
          free(line[_aux].data);
          }
          free(line);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          int is_sec = 255;
        
          int _len_line0 = 65025;
          struct TYPE_3__ * line = (struct TYPE_3__ *) malloc(_len_line0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              int _len_line__i0__data0 = 1;
          line[_i0].data = (char *) malloc(_len_line__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_line__i0__data0; _j0++) {
            line[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          line[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char benchRet = ngx_parse_time(line,is_sec);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_line0; _aux++) {
          free(line[_aux].data);
          }
          free(line);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          int is_sec = 10;
        
          int _len_line0 = 100;
          struct TYPE_3__ * line = (struct TYPE_3__ *) malloc(_len_line0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              int _len_line__i0__data0 = 1;
          line[_i0].data = (char *) malloc(_len_line__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_line__i0__data0; _j0++) {
            line[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          line[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char benchRet = ngx_parse_time(line,is_sec);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_line0; _aux++) {
          free(line[_aux].data);
          }
          free(line);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 76
          // ------------------------------- 

          int is_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_line0 = 1;
          struct TYPE_3__ * line = (struct TYPE_3__ *) malloc(_len_line0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
              int _len_line__i0__data0 = 1;
          line[_i0].data = (char *) malloc(_len_line__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_line__i0__data0; _j0++) {
            line[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          line[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          char benchRet = ngx_parse_time(line,is_sec);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_line0; _aux++) {
          free(line[_aux].data);
          }
          free(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
