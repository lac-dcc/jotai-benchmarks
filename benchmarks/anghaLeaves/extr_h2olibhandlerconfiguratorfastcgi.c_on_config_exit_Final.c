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
typedef  int /*<<< orphan*/  yoml_t ;
struct fastcgi_configurator_t {int /*<<< orphan*/  vars; } ;
typedef  int /*<<< orphan*/  h2o_configurator_t ;
typedef  int /*<<< orphan*/  h2o_configurator_context_t ;

/* Variables and functions */

__attribute__((used)) static int on_config_exit(h2o_configurator_t *_self, h2o_configurator_context_t *ctx, yoml_t *node)
{
    struct fastcgi_configurator_t *self = (void *)_self;

    --self->vars;
    return 0;
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
          int _len__self0 = 65025;
          int * _self = (int *) malloc(_len__self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__self0; _i0++) {
            _self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ctx0 = 65025;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_node0 = 65025;
          int * node = (int *) malloc(_len_node0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = on_config_exit(_self,ctx,node);
          printf("%d\n", benchRet); 
          free(_self);
          free(ctx);
          free(node);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len__self0 = 100;
          int * _self = (int *) malloc(_len__self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__self0; _i0++) {
            _self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ctx0 = 100;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_node0 = 100;
          int * node = (int *) malloc(_len_node0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = on_config_exit(_self,ctx,node);
          printf("%d\n", benchRet); 
          free(_self);
          free(ctx);
          free(node);
        
        break;
    }
    // empty
    case 2:
    {
          int _len__self0 = 1;
          int * _self = (int *) malloc(_len__self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__self0; _i0++) {
            _self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ctx0 = 1;
          int * ctx = (int *) malloc(_len_ctx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_node0 = 1;
          int * node = (int *) malloc(_len_node0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = on_config_exit(_self,ctx,node);
          printf("%d\n", benchRet); 
          free(_self);
          free(ctx);
          free(node);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
