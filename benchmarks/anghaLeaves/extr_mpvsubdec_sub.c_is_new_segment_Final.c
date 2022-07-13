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
struct demux_packet {scalar_t__ start; scalar_t__ end; scalar_t__ codec; scalar_t__ segmented; } ;
struct dec_sub {scalar_t__ start; scalar_t__ end; scalar_t__ codec; } ;

/* Variables and functions */

__attribute__((used)) static bool is_new_segment(struct dec_sub *sub, struct demux_packet *p)
{
    return p->segmented &&
        (p->start != sub->start || p->end != sub->end || p->codec != sub->codec);
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
          int _len_sub0 = 1;
          struct dec_sub * sub = (struct dec_sub *) malloc(_len_sub0*sizeof(struct dec_sub));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        sub[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        sub[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct demux_packet * p = (struct demux_packet *) malloc(_len_p0*sizeof(struct demux_packet));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].segmented = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_new_segment(sub,p);
          printf("%d\n", benchRet); 
          free(sub);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sub0 = 65025;
          struct dec_sub * sub = (struct dec_sub *) malloc(_len_sub0*sizeof(struct dec_sub));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        sub[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        sub[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          struct demux_packet * p = (struct demux_packet *) malloc(_len_p0*sizeof(struct demux_packet));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].segmented = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_new_segment(sub,p);
          printf("%d\n", benchRet); 
          free(sub);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sub0 = 100;
          struct dec_sub * sub = (struct dec_sub *) malloc(_len_sub0*sizeof(struct dec_sub));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        sub[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        sub[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          struct demux_packet * p = (struct demux_packet *) malloc(_len_p0*sizeof(struct demux_packet));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].codec = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].segmented = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_new_segment(sub,p);
          printf("%d\n", benchRet); 
          free(sub);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
