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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ tx_buff_size; scalar_t__ tx_buff_pos; } ;
struct atmel_private {scalar_t__ tx_buff_tail; int tx_desc_free; scalar_t__ tx_free_mem; TYPE_1__ host_info; } ;

/* Variables and functions */

__attribute__((used)) static u16 find_tx_buff(struct atmel_private *priv, u16 len)
{
	u16 bottom_free = priv->host_info.tx_buff_size - priv->tx_buff_tail;

	if (priv->tx_desc_free == 3 || priv->tx_free_mem < len)
		return 0;

	if (bottom_free >= len)
		return priv->host_info.tx_buff_pos + priv->tx_buff_tail;

	if (priv->tx_free_mem - bottom_free >= len) {
		priv->tx_buff_tail = 0;
		return priv->host_info.tx_buff_pos;
	}

	return 0;
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
          long len = 100;
          int _len_priv0 = 1;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].tx_buff_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_desc_free = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_free_mem = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].host_info.tx_buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].host_info.tx_buff_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = find_tx_buff(priv,len);
          printf("%ld\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          long len = 255;
          int _len_priv0 = 65025;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].tx_buff_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_desc_free = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_free_mem = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].host_info.tx_buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].host_info.tx_buff_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = find_tx_buff(priv,len);
          printf("%ld\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long len = 10;
          int _len_priv0 = 100;
          struct atmel_private * priv = (struct atmel_private *) malloc(_len_priv0*sizeof(struct atmel_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].tx_buff_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_desc_free = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_free_mem = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].host_info.tx_buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].host_info.tx_buff_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = find_tx_buff(priv,len);
          printf("%ld\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
