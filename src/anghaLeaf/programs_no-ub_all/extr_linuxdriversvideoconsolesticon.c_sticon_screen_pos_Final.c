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
       0            big-arr\n\
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
typedef  int /*<<< orphan*/  u16 ;
struct vc_data {scalar_t__ vc_num; int vc_size_row; scalar_t__ vc_origin; } ;

/* Variables and functions */
 scalar_t__ fg_console ; 
 unsigned long softback_buf ; 
 int softback_curr ; 
 unsigned long softback_end ; 
 int softback_lines ; 

__attribute__((used)) static u16 *sticon_screen_pos(struct vc_data *conp, int offset)
{
    int line;
    unsigned long p;

    if (conp->vc_num != fg_console || !softback_lines)
    	return (u16 *)(conp->vc_origin + offset);
    line = offset / conp->vc_size_row;
    if (line >= softback_lines)
    	return (u16 *)(conp->vc_origin + offset - softback_lines * conp->vc_size_row);
    p = softback_curr + offset;
    if (p >= softback_end)
    	p += softback_buf - softback_end;
    return (u16 *)p;
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

    // big-arr
    case 0:
    {
          int offset = 255;
          int _len_conp0 = 1;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
            conp->vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
        conp->vc_size_row = ((-2 * (next_i()%2)) + 1) * next_i();
        conp->vc_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = sticon_screen_pos(conp,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          free(conp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
