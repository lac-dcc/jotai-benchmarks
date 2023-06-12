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
       0            empty\n\
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
typedef  scalar_t__ u8 ;
struct mipi_dbi {scalar_t__* read_commands; } ;

/* Variables and functions */

__attribute__((used)) static bool mipi_dbi_command_is_read(struct mipi_dbi *mipi, u8 cmd)
{
	unsigned int i;

	if (!mipi->read_commands)
		return false;

	for (i = 0; i < 0xff; i++) {
		if (!mipi->read_commands[i])
			return false;
		if (cmd == mipi->read_commands[i])
			return true;
	}

	return false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          long cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mipi0 = 1;
          struct mipi_dbi * mipi = (struct mipi_dbi *) malloc(_len_mipi0*sizeof(struct mipi_dbi));
          for(int _i0 = 0; _i0 < _len_mipi0; _i0++) {
              int _len_mipi__i0__read_commands0 = 1;
          mipi[_i0].read_commands = (long *) malloc(_len_mipi__i0__read_commands0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mipi__i0__read_commands0; _j0++) {
            mipi[_i0].read_commands[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = mipi_dbi_command_is_read(mipi,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mipi0; _aux++) {
          free(mipi[_aux].read_commands);
          }
          free(mipi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
