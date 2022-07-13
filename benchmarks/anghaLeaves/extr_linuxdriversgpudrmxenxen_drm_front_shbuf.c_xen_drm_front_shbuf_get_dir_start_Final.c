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
struct xen_drm_front_shbuf {int /*<<< orphan*/ * grefs; } ;
typedef  int /*<<< orphan*/  grant_ref_t ;

/* Variables and functions */
 int /*<<< orphan*/  GRANT_INVALID_REF ; 

grant_ref_t xen_drm_front_shbuf_get_dir_start(struct xen_drm_front_shbuf *buf)
{
	if (!buf->grefs)
		return GRANT_INVALID_REF;

	return buf->grefs[0];
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
          int _len_buf0 = 1;
          struct xen_drm_front_shbuf * buf = (struct xen_drm_front_shbuf *) malloc(_len_buf0*sizeof(struct xen_drm_front_shbuf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__grefs0 = 1;
          buf[_i0].grefs = (int *) malloc(_len_buf__i0__grefs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__grefs0; _j0++) {
            buf[_i0].grefs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xen_drm_front_shbuf_get_dir_start(buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].grefs);
          }
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          struct xen_drm_front_shbuf * buf = (struct xen_drm_front_shbuf *) malloc(_len_buf0*sizeof(struct xen_drm_front_shbuf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__grefs0 = 1;
          buf[_i0].grefs = (int *) malloc(_len_buf__i0__grefs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__grefs0; _j0++) {
            buf[_i0].grefs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xen_drm_front_shbuf_get_dir_start(buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].grefs);
          }
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          struct xen_drm_front_shbuf * buf = (struct xen_drm_front_shbuf *) malloc(_len_buf0*sizeof(struct xen_drm_front_shbuf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__grefs0 = 1;
          buf[_i0].grefs = (int *) malloc(_len_buf__i0__grefs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__grefs0; _j0++) {
            buf[_i0].grefs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xen_drm_front_shbuf_get_dir_start(buf);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].grefs);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
