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

/* Variables and functions */

__attribute__((used)) static const char *
banked_regname (unsigned reg)
{
  switch (reg)
    {
      case 15: return "CPSR";
      case 32: return "R8_usr";
      case 33: return "R9_usr";
      case 34: return "R10_usr";
      case 35: return "R11_usr";
      case 36: return "R12_usr";
      case 37: return "SP_usr";
      case 38: return "LR_usr";
      case 40: return "R8_fiq";
      case 41: return "R9_fiq";
      case 42: return "R10_fiq";
      case 43: return "R11_fiq";
      case 44: return "R12_fiq";
      case 45: return "SP_fiq";
      case 46: return "LR_fiq";
      case 48: return "LR_irq";
      case 49: return "SP_irq";
      case 50: return "LR_svc";
      case 51: return "SP_svc";
      case 52: return "LR_abt";
      case 53: return "SP_abt";
      case 54: return "LR_und";
      case 55: return "SP_und";
      case 60: return "LR_mon";
      case 61: return "SP_mon";
      case 62: return "ELR_hyp";
      case 63: return "SP_hyp";
      case 79: return "SPSR";
      case 110: return "SPSR_fiq";
      case 112: return "SPSR_irq";
      case 114: return "SPSR_svc";
      case 116: return "SPSR_abt";
      case 118: return "SPSR_und";
      case 124: return "SPSR_mon";
      case 126: return "SPSR_hyp";
      default: return NULL;
    }
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
          unsigned int reg = 100;
          const char * benchRet = banked_regname(reg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          const char * benchRet = banked_regname(reg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          const char * benchRet = banked_regname(reg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
