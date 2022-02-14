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
       0            big-arr\n\
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
struct disassemble_info {int dummy; } ;
typedef  enum map_type { ____Placeholder_map_type } map_type ;

/* Variables and functions */
 int FALSE ; 

__attribute__((used)) static int
get_sym_code_type (struct disassemble_info *info,
		   int n,
		   enum map_type *map_type)
{
return FALSE;
#if 0
  elf_symbol_type *es;
  unsigned int type;

  /* If the symbol is in a different section, ignore it.  */
  if (info->section != NULL && info->section != info->symtab[n]->section)
    return FALSE;

  es = *(elf_symbol_type **)(info->symtab + n);
  type = ELF_ST_TYPE (es->internal_elf_sym.st_info);

  /* If the symbol has function type then use that.  */
  if (type == STT_FUNC || type == STT_GNU_IFUNC)
    {
      if (ARM_GET_SYM_BRANCH_TYPE (es->internal_elf_sym.st_target_internal)
	  == ST_BRANCH_TO_THUMB)
	*map_type = MAP_THUMB;
      else
	*map_type = MAP_ARM;
      return TRUE;
    }

  return FALSE;
#endif
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

    // big-arr
    case 0:
    {
          int n = 255;
          int _len_info0 = 1;
          struct disassemble_info * info = (struct disassemble_info *) malloc(_len_info0*sizeof(struct disassemble_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_map_type0 = 65025;
          enum map_type * map_type = (enum map_type *) malloc(_len_map_type0*sizeof(enum map_type));
          for(int _i0 = 0; _i0 < _len_map_type0; _i0++) {
            map_type[_i0] = 0;
          }
          int benchRet = get_sym_code_type(info,n,map_type);
          printf("%d\n", benchRet); 
          free(info);
          free(map_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
