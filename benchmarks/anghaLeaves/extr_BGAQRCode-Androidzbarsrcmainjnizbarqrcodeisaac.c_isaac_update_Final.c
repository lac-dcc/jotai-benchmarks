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
struct TYPE_3__ {unsigned int* m; unsigned int* r; unsigned int a; unsigned int b; unsigned int c; int n; } ;
typedef  TYPE_1__ isaac_ctx ;

/* Variables and functions */
 unsigned int ISAAC_MASK ; 
 int ISAAC_SZ ; 
 int ISAAC_SZ_LOG ; 

__attribute__((used)) static void isaac_update(isaac_ctx *_ctx){
  unsigned *m;
  unsigned *r;
  unsigned  a;
  unsigned  b;
  unsigned  x;
  unsigned  y;
  int       i;
  m=_ctx->m;
  r=_ctx->r;
  a=_ctx->a;
  b=_ctx->b+(++_ctx->c)&ISAAC_MASK;
  for(i=0;i<ISAAC_SZ/2;i++){
    x=m[i];
    a=(a^a<<13)+m[i+ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
    x=m[++i];
    a=(a^a>>6)+m[i+ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
    x=m[++i];
    a=(a^a<<2)+m[i+ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
    x=m[++i];
    a=(a^a>>16)+m[i+ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
  }
  for(i=ISAAC_SZ/2;i<ISAAC_SZ;i++){
    x=m[i];
    a=(a^a<<13)+m[i-ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
    x=m[++i];
    a=(a^a>>6)+m[i-ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
    x=m[++i];
    a=(a^a<<2)+m[i-ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
    x=m[++i];
    a=(a^a>>16)+m[i-ISAAC_SZ/2]&ISAAC_MASK;
    m[i]=y=m[(x&ISAAC_SZ-1<<2)>>2]+a+b&ISAAC_MASK;
    r[i]=b=m[y>>ISAAC_SZ_LOG+2&ISAAC_SZ-1]+x&ISAAC_MASK;
  }
  _ctx->b=b;
  _ctx->a=a;
  _ctx->n=ISAAC_SZ;
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
          int _len__ctx0 = 1;
          struct TYPE_3__ * _ctx = (struct TYPE_3__ *) malloc(_len__ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__ctx0; _i0++) {
              int _len__ctx__i0__m0 = 1;
          _ctx[_i0].m = (unsigned int *) malloc(_len__ctx__i0__m0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len__ctx__i0__m0; _j0++) {
            _ctx[_i0].m[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__ctx__i0__r0 = 1;
          _ctx[_i0].r = (unsigned int *) malloc(_len__ctx__i0__r0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len__ctx__i0__r0; _j0++) {
            _ctx[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        _ctx[_i0].a = ((-2 * (next_i()%2)) + 1) * next_i();
        _ctx[_i0].b = ((-2 * (next_i()%2)) + 1) * next_i();
        _ctx[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        _ctx[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isaac_update(_ctx);
          for(int _aux = 0; _aux < _len__ctx0; _aux++) {
          free(_ctx[_aux].m);
          }
          for(int _aux = 0; _aux < _len__ctx0; _aux++) {
          free(_ctx[_aux].r);
          }
          free(_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
