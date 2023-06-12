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
struct magic_set {size_t indir_max; size_t name_max; size_t elf_phnum_max; size_t elf_shnum_max; size_t elf_notes_max; size_t regex_max; size_t bytes_max; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
#define  MAGIC_PARAM_BYTES_MAX 134 
#define  MAGIC_PARAM_ELF_NOTES_MAX 133 
#define  MAGIC_PARAM_ELF_PHNUM_MAX 132 
#define  MAGIC_PARAM_ELF_SHNUM_MAX 131 
#define  MAGIC_PARAM_INDIR_MAX 130 
#define  MAGIC_PARAM_NAME_MAX 129 
#define  MAGIC_PARAM_REGEX_MAX 128 
 int /*<<< orphan*/  errno ; 

int
magic_getparam(struct magic_set *ms, int param, void *val)
{
	switch (param) {
	case MAGIC_PARAM_INDIR_MAX:
		*(size_t *)val = ms->indir_max;
		return 0;
	case MAGIC_PARAM_NAME_MAX:
		*(size_t *)val = ms->name_max;
		return 0;
	case MAGIC_PARAM_ELF_PHNUM_MAX:
		*(size_t *)val = ms->elf_phnum_max;
		return 0;
	case MAGIC_PARAM_ELF_SHNUM_MAX:
		*(size_t *)val = ms->elf_shnum_max;
		return 0;
	case MAGIC_PARAM_ELF_NOTES_MAX:
		*(size_t *)val = ms->elf_notes_max;
		return 0;
	case MAGIC_PARAM_REGEX_MAX:
		*(size_t *)val = ms->regex_max;
		return 0;
	case MAGIC_PARAM_BYTES_MAX:
		*(size_t *)val = ms->bytes_max;
		return 0;
	default:
		errno = EINVAL;
		return -1;
	}
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
          int param = 100;
        
          int _len_ms0 = 1;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              ms[_i0].indir_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].name_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_phnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_shnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_notes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].regex_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * val;
        
          int benchRet = magic_getparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
        
        break;
    }
    // big-arr
    case 1:
    {
          int param = 255;
        
          int _len_ms0 = 65025;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              ms[_i0].indir_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].name_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_phnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_shnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_notes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].regex_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * val;
        
          int benchRet = magic_getparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int param = 10;
        
          int _len_ms0 = 100;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              ms[_i0].indir_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].name_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_phnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_shnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_notes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].regex_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * val;
        
          int benchRet = magic_getparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
        
        break;
    }
    // empty
    case 3:
    {
          int param = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ms0 = 1;
          struct magic_set * ms = (struct magic_set *) malloc(_len_ms0*sizeof(struct magic_set));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
              ms[_i0].indir_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].name_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_phnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_shnum_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].elf_notes_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].regex_max = ((-2 * (next_i()%2)) + 1) * next_i();
          ms[_i0].bytes_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * val;
        
          int benchRet = magic_getparam(ms,param,val);
          printf("%d\n", benchRet); 
          free(ms);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
