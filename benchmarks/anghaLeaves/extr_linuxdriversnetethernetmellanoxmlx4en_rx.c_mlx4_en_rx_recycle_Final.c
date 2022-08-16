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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct mlx4_en_page_cache {size_t index; TYPE_1__* buf; } ;
struct mlx4_en_rx_ring {struct mlx4_en_page_cache page_cache; } ;
struct mlx4_en_rx_alloc {int /*<<< orphan*/  dma; int /*<<< orphan*/  page; } ;
struct TYPE_2__ {int /*<<< orphan*/  dma; int /*<<< orphan*/  page; } ;

/* Variables and functions */
 size_t MLX4_EN_CACHE_SIZE ; 

bool mlx4_en_rx_recycle(struct mlx4_en_rx_ring *ring,
			struct mlx4_en_rx_alloc *frame)
{
	struct mlx4_en_page_cache *cache = &ring->page_cache;

	if (cache->index >= MLX4_EN_CACHE_SIZE)
		return false;

	cache->buf[cache->index].page = frame->page;
	cache->buf[cache->index].dma = frame->dma;
	cache->index++;
	return true;
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
          int _len_ring0 = 1;
          struct mlx4_en_rx_ring * ring = (struct mlx4_en_rx_ring *) malloc(_len_ring0*sizeof(struct mlx4_en_rx_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].page_cache.index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__page_cache_buf0 = 1;
          ring[_i0].page_cache.buf = (struct TYPE_2__ *) malloc(_len_ring__i0__page_cache_buf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__page_cache_buf0; _j0++) {
            ring[_i0].page_cache.buf->dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].page_cache.buf->page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_frame0 = 1;
          struct mlx4_en_rx_alloc * frame = (struct mlx4_en_rx_alloc *) malloc(_len_frame0*sizeof(struct mlx4_en_rx_alloc));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].page = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_en_rx_recycle(ring,frame);
          printf("%d\n", benchRet); 
          free(ring);
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
