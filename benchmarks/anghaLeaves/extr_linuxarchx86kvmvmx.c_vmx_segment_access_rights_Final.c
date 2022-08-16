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

/* Type definitions */
typedef  int u32 ;
struct kvm_segment {int present; int type; int s; int dpl; int avl; int l; int db; int g; scalar_t__ unusable; } ;

/* Variables and functions */

__attribute__((used)) static u32 vmx_segment_access_rights(struct kvm_segment *var)
{
	u32 ar;

	if (var->unusable || !var->present)
		ar = 1 << 16;
	else {
		ar = var->type & 15;
		ar |= (var->s & 1) << 4;
		ar |= (var->dpl & 3) << 5;
		ar |= (var->present & 1) << 7;
		ar |= (var->avl & 1) << 12;
		ar |= (var->l & 1) << 13;
		ar |= (var->db & 1) << 14;
		ar |= (var->g & 1) << 15;
	}

	return ar;
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
          int _len_var0 = 1;
          struct kvm_segment * var = (struct kvm_segment *) malloc(_len_var0*sizeof(struct kvm_segment));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].present = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].dpl = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].avl = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].db = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].g = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].unusable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmx_segment_access_rights(var);
          printf("%d\n", benchRet); 
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
