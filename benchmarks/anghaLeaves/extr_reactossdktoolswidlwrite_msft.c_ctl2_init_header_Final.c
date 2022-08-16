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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int magic1; int magic2; int posguid; int lcid; int lcid2; int varflags; int helpstring; int NameOffset; int helpfile; int CustomDataOffset; int res44; int res48; int dispatchpos; scalar_t__ nimpinfos; scalar_t__ nametablechars; scalar_t__ nametablecount; scalar_t__ helpcontext; scalar_t__ helpstringcontext; scalar_t__ nrtypeinfos; scalar_t__ flags; scalar_t__ version; } ;
struct TYPE_5__ {TYPE_1__ typelib_header; } ;
typedef  TYPE_2__ msft_typelib_t ;

/* Variables and functions */

__attribute__((used)) static void ctl2_init_header(
	msft_typelib_t *typelib) /* [I] The typelib to initialize. */
{
    typelib->typelib_header.magic1 = 0x5446534d;
    typelib->typelib_header.magic2 = 0x00010002;
    typelib->typelib_header.posguid = -1;
    typelib->typelib_header.lcid = 0x0409;
    typelib->typelib_header.lcid2 = 0x0;
    typelib->typelib_header.varflags = 0x40;
    typelib->typelib_header.version = 0;
    typelib->typelib_header.flags = 0;
    typelib->typelib_header.nrtypeinfos = 0;
    typelib->typelib_header.helpstring = -1;
    typelib->typelib_header.helpstringcontext = 0;
    typelib->typelib_header.helpcontext = 0;
    typelib->typelib_header.nametablecount = 0;
    typelib->typelib_header.nametablechars = 0;
    typelib->typelib_header.NameOffset = -1;
    typelib->typelib_header.helpfile = -1;
    typelib->typelib_header.CustomDataOffset = -1;
    typelib->typelib_header.res44 = 0x20;
    typelib->typelib_header.res48 = 0x80;
    typelib->typelib_header.dispatchpos = -1;
    typelib->typelib_header.nimpinfos = 0;
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
          int _len_typelib0 = 1;
          struct TYPE_5__ * typelib = (struct TYPE_5__ *) malloc(_len_typelib0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_typelib0; _i0++) {
            typelib[_i0].typelib_header.magic1 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.magic2 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.posguid = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.lcid = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.lcid2 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.varflags = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.helpstring = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.NameOffset = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.helpfile = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.CustomDataOffset = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.res44 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.res48 = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.dispatchpos = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.nimpinfos = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.nametablechars = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.nametablecount = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.helpcontext = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.helpstringcontext = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.nrtypeinfos = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        typelib[_i0].typelib_header.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ctl2_init_header(typelib);
          free(typelib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
