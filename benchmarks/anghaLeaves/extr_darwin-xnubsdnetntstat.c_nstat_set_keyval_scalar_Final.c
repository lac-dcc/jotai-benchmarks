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
typedef  int /*<<< orphan*/  u_int32_t ;
struct TYPE_4__ {int /*<<< orphan*/  nstat_sysinfo_scalar; } ;
struct TYPE_5__ {int nstat_sysinfo_key; int nstat_sysinfo_valsize; TYPE_1__ u; int /*<<< orphan*/  nstat_sysinfo_flags; } ;
typedef  TYPE_2__ nstat_sysinfo_keyval ;

/* Variables and functions */
 int /*<<< orphan*/  NSTAT_SYSINFO_FLAG_SCALAR ; 

__attribute__((used)) static void
nstat_set_keyval_scalar(nstat_sysinfo_keyval *kv, int key, u_int32_t val)
{
	kv->nstat_sysinfo_key = key;
	kv->nstat_sysinfo_flags = NSTAT_SYSINFO_FLAG_SCALAR;
	kv->u.nstat_sysinfo_scalar = val;
	kv->nstat_sysinfo_valsize = sizeof(kv->u.nstat_sysinfo_scalar);
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
          int key = 100;
          int val = 100;
          int _len_kv0 = 1;
          struct TYPE_5__ * kv = (struct TYPE_5__ *) malloc(_len_kv0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0].nstat_sysinfo_key = ((-2 * (next_i()%2)) + 1) * next_i();
        kv[_i0].nstat_sysinfo_valsize = ((-2 * (next_i()%2)) + 1) * next_i();
        kv[_i0].u.nstat_sysinfo_scalar = ((-2 * (next_i()%2)) + 1) * next_i();
        kv[_i0].nstat_sysinfo_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nstat_set_keyval_scalar(kv,key,val);
          free(kv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
