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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
typedef  scalar_t__ uint16_t ;
struct TYPE_3__ {int lock; size_t tail; size_t head; size_t size; int /*<<< orphan*/ * buf; } ;
typedef  TYPE_1__ FIFO_TypeDef ;

/* Variables and functions */

uint16_t  fifo_read(FIFO_TypeDef * f, void * buf, uint16_t  nbytes)
{
  uint16_t  i;
  uint8_t * p;
  p = buf;
  
  if(f->lock == 0)
  {
    f->lock = 1;
    for(i=0; i < nbytes; i++)
    {
      if( f->tail != f->head )
      { 
        *p++ = f->buf[f->tail];  
        f->tail++;  
        if( f->tail == f->size )
        {  
          f->tail = 0;
        }
      } else 
      {
        f->lock = 0;
        return i; 
      }
    }
  }
  f->lock = 0;
  return nbytes;
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
          long nbytes = 100;
          int _len_f0 = 1;
          struct TYPE_3__ * f = (struct TYPE_3__ *) malloc(_len_f0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].lock = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__buf0 = 1;
          f[_i0].buf = (int *) malloc(_len_f__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__buf0; _j0++) {
            f[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * buf;
          long benchRet = fifo_read(f,buf,nbytes);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].buf);
          }
          free(f);
        
        break;
    }
    // big-arr
    case 1:
    {
          long nbytes = 255;
          int _len_f0 = 65025;
          struct TYPE_3__ * f = (struct TYPE_3__ *) malloc(_len_f0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].lock = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__buf0 = 1;
          f[_i0].buf = (int *) malloc(_len_f__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__buf0; _j0++) {
            f[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * buf;
          long benchRet = fifo_read(f,buf,nbytes);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].buf);
          }
          free(f);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long nbytes = 10;
          int _len_f0 = 100;
          struct TYPE_3__ * f = (struct TYPE_3__ *) malloc(_len_f0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].lock = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__buf0 = 1;
          f[_i0].buf = (int *) malloc(_len_f__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f__i0__buf0; _j0++) {
            f[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * buf;
          long benchRet = fifo_read(f,buf,nbytes);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].buf);
          }
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
