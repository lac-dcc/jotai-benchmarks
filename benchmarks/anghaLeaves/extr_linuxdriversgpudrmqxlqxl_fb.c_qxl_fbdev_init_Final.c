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
       1            big-arr-10x\n\
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
struct qxl_device {int dummy; } ;

/* Variables and functions */

int qxl_fbdev_init(struct qxl_device *qdev)
{
	int ret = 0;

#ifdef CONFIG_DRM_FBDEV_EMULATION
	struct qxl_fbdev *qfbdev;
	int bpp_sel = 32; /* TODO: parameter from somewhere? */

	qfbdev = kzalloc(sizeof(struct qxl_fbdev), GFP_KERNEL);
	if (!qfbdev)
		return -ENOMEM;

	qfbdev->qdev = qdev;
	qdev->mode_info.qfbdev = qfbdev;
	spin_lock_init(&qfbdev->delayed_ops_lock);
	INIT_LIST_HEAD(&qfbdev->delayed_ops);

	drm_fb_helper_prepare(&qdev->ddev, &qfbdev->helper,
			      &qxl_fb_helper_funcs);

	ret = drm_fb_helper_init(&qdev->ddev, &qfbdev->helper,
				 QXLFB_CONN_LIMIT);
	if (ret)
		goto free;

	ret = drm_fb_helper_single_add_all_connectors(&qfbdev->helper);
	if (ret)
		goto fini;

	ret = drm_fb_helper_initial_config(&qfbdev->helper, bpp_sel);
	if (ret)
		goto fini;

	return 0;

fini:
	drm_fb_helper_fini(&qfbdev->helper);
free:
	kfree(qfbdev);
#endif

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

    // int-bounds
    case 0:
    {
          int _len_qdev0 = 1;
          struct qxl_device * qdev = (struct qxl_device *) malloc(_len_qdev0*sizeof(struct qxl_device));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_fbdev_init(qdev);
          printf("%d\n", benchRet); 
          free(qdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_qdev0 = 100;
          struct qxl_device * qdev = (struct qxl_device *) malloc(_len_qdev0*sizeof(struct qxl_device));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_fbdev_init(qdev);
          printf("%d\n", benchRet); 
          free(qdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
