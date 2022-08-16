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
typedef  scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ buffer_start; scalar_t__ buffer_end; } ;
typedef  TYPE_1__ Packets_Array ;

/* Variables and functions */
 scalar_t__ CRYPTO_PACKET_BUFFER_SIZE ; 

__attribute__((used)) static int set_buffer_end(Packets_Array *array, uint32_t number)
{
    if ((number - array->buffer_start) > CRYPTO_PACKET_BUFFER_SIZE)
        return -1;

    if ((number - array->buffer_end) > CRYPTO_PACKET_BUFFER_SIZE)
        return -1;

    array->buffer_end = number;
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
          long number = 100;
          int _len_array0 = 1;
          struct TYPE_3__ * array = (struct TYPE_3__ *) malloc(_len_array0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0].buffer_start = ((-2 * (next_i()%2)) + 1) * next_i();
        array[_i0].buffer_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_buffer_end(array,number);
          printf("%d\n", benchRet); 
          free(array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
