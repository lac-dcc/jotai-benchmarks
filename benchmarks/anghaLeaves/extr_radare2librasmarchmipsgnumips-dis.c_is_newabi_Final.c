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
struct TYPE_3__ {scalar_t__* e_ident; int e_flags; } ;
typedef  TYPE_1__ Elf_Internal_Ehdr ;

/* Variables and functions */
 int EF_MIPS_ABI2 ; 
 size_t EI_CLASS ; 
 scalar_t__ ELFCLASS64 ; 

__attribute__((used)) static int
is_newabi (Elf_Internal_Ehdr *header)
{
  /* There are no old-style ABIs which use 64-bit ELF.  */
  if (header->e_ident[EI_CLASS] == ELFCLASS64) {
	  return 1;
  }

  /* If a 32-bit ELF file, n32 is a new-style ABI.  */
  if ((header->e_flags & EF_MIPS_ABI2) != 0) {
	  return 1;
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
          int _len_header0 = 1;
          struct TYPE_3__ * header = (struct TYPE_3__ *) malloc(_len_header0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
              int _len_header__i0__e_ident0 = 1;
          header[_i0].e_ident = (long *) malloc(_len_header__i0__e_ident0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_header__i0__e_ident0; _j0++) {
            header[_i0].e_ident[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        header[_i0].e_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_newabi(header);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_header0; _aux++) {
          free(header[_aux].e_ident);
          }
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
