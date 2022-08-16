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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  int64_t ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {scalar_t__ timestamp; } ;
struct TYPE_6__ {scalar_t__ last_timestamp; int /*<<< orphan*/  pts; } ;
typedef  TYPE_1__ DHAVStream ;
typedef  TYPE_2__ DHAVContext ;
typedef  TYPE_3__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ AV_NOPTS_VALUE ; 

__attribute__((used)) static int64_t get_pts(AVFormatContext *s, DHAVStream *st)
{
    DHAVContext *dhav = s->priv_data;
    /*
    int year, month, day, hour, min, sec;
    struct tm timeinfo;

    sec   =   dhav->date        & 0x3F;
    min   =  (dhav->date >>  6) & 0x3F;
    hour  =  (dhav->date >> 12) & 0x1F;
    day   =  (dhav->date >> 17) & 0x1F;
    month =  (dhav->date >> 22) & 0x0F;
    year  = ((dhav->date >> 26) & 0x3F) + 2000;

    timeinfo.tm_year = year - 1900;
    timeinfo.tm_mon  = month - 1;
    timeinfo.tm_mday = day;
    timeinfo.tm_hour = hour;
    timeinfo.tm_min  = min;
    timeinfo.tm_sec  = sec;*/

    if (st->last_timestamp == AV_NOPTS_VALUE) {
        st->last_timestamp = dhav->timestamp;
    }

    if (st->last_timestamp <= dhav->timestamp) {
        st->pts += dhav->timestamp - st->last_timestamp;
    } else {
        st->pts += 65535 + dhav->timestamp - st->last_timestamp;
    }

    st->last_timestamp = dhav->timestamp;

    return st->pts;
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
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_st0 = 1;
          struct TYPE_6__ * st = (struct TYPE_6__ *) malloc(_len_st0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].last_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_pts(s,st);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
