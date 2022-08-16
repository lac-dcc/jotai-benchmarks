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
       1            big-arr-10x\n\
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
struct snd_uart16550 {scalar_t__ buff_in_count; } ;

/* Variables and functions */
 scalar_t__ TX_BUFF_SIZE ; 

__attribute__((used)) static inline int snd_uart16550_buffer_can_write(struct snd_uart16550 *uart,
						 int Num)
{
	if (uart->buff_in_count + Num < TX_BUFF_SIZE)
		return 1;
	else
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
          int Num = 100;
          int _len_uart0 = 1;
          struct snd_uart16550 * uart = (struct snd_uart16550 *) malloc(_len_uart0*sizeof(struct snd_uart16550));
          for(int _i0 = 0; _i0 < _len_uart0; _i0++) {
            uart[_i0].buff_in_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_uart16550_buffer_can_write(uart,Num);
          printf("%d\n", benchRet); 
          free(uart);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int Num = 10;
          int _len_uart0 = 100;
          struct snd_uart16550 * uart = (struct snd_uart16550 *) malloc(_len_uart0*sizeof(struct snd_uart16550));
          for(int _i0 = 0; _i0 < _len_uart0; _i0++) {
            uart[_i0].buff_in_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_uart16550_buffer_can_write(uart,Num);
          printf("%d\n", benchRet); 
          free(uart);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
