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
typedef  scalar_t__ u16 ;
struct vio_version {scalar_t__ major; } ;
struct vio_driver_state {int ver_table_entries; struct vio_version* ver_table; } ;

/* Variables and functions */

__attribute__((used)) static struct vio_version *find_by_major(struct vio_driver_state *vio,
					 u16 major)
{
	struct vio_version *ret = NULL;
	int i;

	for (i = 0; i < vio->ver_table_entries; i++) {
		struct vio_version *v = &vio->ver_table[i];
		if (v->major <= major) {
			ret = v;
			break;
		}
	}
	return ret;
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
          long major = 255;
          int _len_vio0 = 65025;
          struct vio_driver_state * vio = (struct vio_driver_state *) malloc(_len_vio0*sizeof(struct vio_driver_state));
          for(int _i0 = 0; _i0 < _len_vio0; _i0++) {
            vio[_i0].ver_table_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vio__i0__ver_table0 = 1;
          vio[_i0].ver_table = (struct vio_version *) malloc(_len_vio__i0__ver_table0*sizeof(struct vio_version));
          for(int _j0 = 0; _j0 < _len_vio__i0__ver_table0; _j0++) {
            vio[_i0].ver_table->major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct vio_version * benchRet = find_by_major(vio,major);
          printf("%ld\n", (*benchRet).major);
          for(int _aux = 0; _aux < _len_vio0; _aux++) {
          free(vio[_aux].ver_table);
          }
          free(vio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
