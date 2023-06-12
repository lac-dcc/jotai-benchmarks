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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct hclge_pkt_buf_alloc {TYPE_1__* priv_buf; } ;
struct TYPE_2__ {scalar_t__ tx_buf_size; } ;

/* Variables and functions */
 size_t HCLGE_MAX_TC_NUM ; 

__attribute__((used)) static u32 hclge_get_tx_buff_alloced(struct hclge_pkt_buf_alloc *buf_alloc)
{
	u32 i, total_tx_size = 0;

	for (i = 0; i < HCLGE_MAX_TC_NUM; i++)
		total_tx_size += buf_alloc->priv_buf[i].tx_buf_size;

	return total_tx_size;
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
          int _len_buf_alloc0 = 65025;
          struct hclge_pkt_buf_alloc * buf_alloc = (struct hclge_pkt_buf_alloc *) malloc(_len_buf_alloc0*sizeof(struct hclge_pkt_buf_alloc));
          for(int _i0 = 0; _i0 < _len_buf_alloc0; _i0++) {
              int _len_buf_alloc__i0__priv_buf0 = 1;
          buf_alloc[_i0].priv_buf = (struct TYPE_2__ *) malloc(_len_buf_alloc__i0__priv_buf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf_alloc__i0__priv_buf0; _j0++) {
              buf_alloc[_i0].priv_buf->tx_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = hclge_get_tx_buff_alloced(buf_alloc);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf_alloc0; _aux++) {
          free(buf_alloc[_aux].priv_buf);
          }
          free(buf_alloc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_buf_alloc0 = 100;
          struct hclge_pkt_buf_alloc * buf_alloc = (struct hclge_pkt_buf_alloc *) malloc(_len_buf_alloc0*sizeof(struct hclge_pkt_buf_alloc));
          for(int _i0 = 0; _i0 < _len_buf_alloc0; _i0++) {
              int _len_buf_alloc__i0__priv_buf0 = 1;
          buf_alloc[_i0].priv_buf = (struct TYPE_2__ *) malloc(_len_buf_alloc__i0__priv_buf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf_alloc__i0__priv_buf0; _j0++) {
              buf_alloc[_i0].priv_buf->tx_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = hclge_get_tx_buff_alloced(buf_alloc);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf_alloc0; _aux++) {
          free(buf_alloc[_aux].priv_buf);
          }
          free(buf_alloc);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_buf_alloc0 = 1;
          struct hclge_pkt_buf_alloc * buf_alloc = (struct hclge_pkt_buf_alloc *) malloc(_len_buf_alloc0*sizeof(struct hclge_pkt_buf_alloc));
          for(int _i0 = 0; _i0 < _len_buf_alloc0; _i0++) {
              int _len_buf_alloc__i0__priv_buf0 = 1;
          buf_alloc[_i0].priv_buf = (struct TYPE_2__ *) malloc(_len_buf_alloc__i0__priv_buf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf_alloc__i0__priv_buf0; _j0++) {
              buf_alloc[_i0].priv_buf->tx_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = hclge_get_tx_buff_alloced(buf_alloc);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf_alloc0; _aux++) {
          free(buf_alloc[_aux].priv_buf);
          }
          free(buf_alloc);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
