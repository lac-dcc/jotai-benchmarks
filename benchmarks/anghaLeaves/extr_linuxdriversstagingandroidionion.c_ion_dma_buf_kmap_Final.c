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
struct ion_buffer {void* vaddr; } ;
struct dma_buf {struct ion_buffer* priv; } ;

/* Variables and functions */
 unsigned long PAGE_SIZE ; 

__attribute__((used)) static void *ion_dma_buf_kmap(struct dma_buf *dmabuf, unsigned long offset)
{
	struct ion_buffer *buffer = dmabuf->priv;

	return buffer->vaddr + offset * PAGE_SIZE;
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
          unsigned long offset = 100;
          int _len_dmabuf0 = 1;
          struct dma_buf * dmabuf = (struct dma_buf *) malloc(_len_dmabuf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dmabuf0; _i0++) {
              int _len_dmabuf__i0__priv0 = 1;
          dmabuf[_i0].priv = (struct ion_buffer *) malloc(_len_dmabuf__i0__priv0*sizeof(struct ion_buffer));
          for(int _j0 = 0; _j0 < _len_dmabuf__i0__priv0; _j0++) {
              }
          }
          void * benchRet = ion_dma_buf_kmap(dmabuf,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_dmabuf0; _aux++) {
          free(dmabuf[_aux].priv);
          }
          free(dmabuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          int _len_dmabuf0 = 65025;
          struct dma_buf * dmabuf = (struct dma_buf *) malloc(_len_dmabuf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dmabuf0; _i0++) {
              int _len_dmabuf__i0__priv0 = 1;
          dmabuf[_i0].priv = (struct ion_buffer *) malloc(_len_dmabuf__i0__priv0*sizeof(struct ion_buffer));
          for(int _j0 = 0; _j0 < _len_dmabuf__i0__priv0; _j0++) {
              }
          }
          void * benchRet = ion_dma_buf_kmap(dmabuf,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_dmabuf0; _aux++) {
          free(dmabuf[_aux].priv);
          }
          free(dmabuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          int _len_dmabuf0 = 100;
          struct dma_buf * dmabuf = (struct dma_buf *) malloc(_len_dmabuf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dmabuf0; _i0++) {
              int _len_dmabuf__i0__priv0 = 1;
          dmabuf[_i0].priv = (struct ion_buffer *) malloc(_len_dmabuf__i0__priv0*sizeof(struct ion_buffer));
          for(int _j0 = 0; _j0 < _len_dmabuf__i0__priv0; _j0++) {
              }
          }
          void * benchRet = ion_dma_buf_kmap(dmabuf,offset);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_dmabuf0; _aux++) {
          free(dmabuf[_aux].priv);
          }
          free(dmabuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
