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
struct TYPE_6__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_8__ {TYPE_1__ rect; } ;
struct TYPE_7__ {scalar_t__ right; scalar_t__ bottom; scalar_t__ left; scalar_t__ top; } ;
typedef  TYPE_2__ RECT ;
typedef  TYPE_3__ PluginHost ;

/* Variables and functions */

__attribute__((used)) static void get_pos_rect(PluginHost *host, RECT *ret)
{
    ret->top = 0;
    ret->left = 0;
    ret->bottom = host->rect.bottom - host->rect.top;
    ret->right = host->rect.right - host->rect.left;
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
          int _len_host0 = 1;
          struct TYPE_8__ * host = (struct TYPE_8__ *) malloc(_len_host0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].rect.left = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].rect.right = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].rect.top = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].rect.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ret0 = 1;
          struct TYPE_7__ * ret = (struct TYPE_7__ *) malloc(_len_ret0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_pos_rect(host,ret);
          free(host);
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
