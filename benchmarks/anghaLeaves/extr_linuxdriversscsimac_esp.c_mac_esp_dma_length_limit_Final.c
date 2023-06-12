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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u32 ;
struct esp {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static u32 mac_esp_dma_length_limit(struct esp *esp, u32 dma_addr, u32 dma_len)
{
	return dma_len > 0xFFFF ? 0xFFFF : dma_len;
}

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
          int dma_addr = 100;
        
          int dma_len = 100;
        
          int _len_esp0 = 1;
          struct esp * esp = (struct esp *) malloc(_len_esp0*sizeof(struct esp));
          for(int _i0 = 0; _i0 < _len_esp0; _i0++) {
              esp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mac_esp_dma_length_limit(esp,dma_addr,dma_len);
          printf("%d\n", benchRet); 
          free(esp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dma_addr = 255;
        
          int dma_len = 255;
        
          int _len_esp0 = 65025;
          struct esp * esp = (struct esp *) malloc(_len_esp0*sizeof(struct esp));
          for(int _i0 = 0; _i0 < _len_esp0; _i0++) {
              esp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mac_esp_dma_length_limit(esp,dma_addr,dma_len);
          printf("%d\n", benchRet); 
          free(esp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dma_addr = 10;
        
          int dma_len = 10;
        
          int _len_esp0 = 100;
          struct esp * esp = (struct esp *) malloc(_len_esp0*sizeof(struct esp));
          for(int _i0 = 0; _i0 < _len_esp0; _i0++) {
              esp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mac_esp_dma_length_limit(esp,dma_addr,dma_len);
          printf("%d\n", benchRet); 
          free(esp);
        
        break;
    }
    // empty
    case 3:
    {
          int dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dma_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_esp0 = 1;
          struct esp * esp = (struct esp *) malloc(_len_esp0*sizeof(struct esp));
          for(int _i0 = 0; _i0 < _len_esp0; _i0++) {
              esp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mac_esp_dma_length_limit(esp,dma_addr,dma_len);
          printf("%d\n", benchRet); 
          free(esp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
