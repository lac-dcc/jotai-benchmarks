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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct drm_mode_object {scalar_t__ type; } ;
struct drm_file {scalar_t__ universal_planes; } ;
struct drm_device {int dummy; } ;

/* Variables and functions */
 scalar_t__ DRM_MODE_OBJECT_CONNECTOR ; 
 scalar_t__ DRM_MODE_OBJECT_CRTC ; 
 scalar_t__ DRM_MODE_OBJECT_PLANE ; 
 int EINVAL ; 

__attribute__((used)) static int validate_lease(struct drm_device *dev,
			  struct drm_file *lessor_priv,
			  int object_count,
			  struct drm_mode_object **objects)
{
	int o;
	int has_crtc = -1;
	int has_connector = -1;
	int has_plane = -1;

	/* we want to confirm that there is at least one crtc, plane
	   connector object. */

	for (o = 0; o < object_count; o++) {
		if (objects[o]->type == DRM_MODE_OBJECT_CRTC && has_crtc == -1) {
			has_crtc = o;
		}
		if (objects[o]->type == DRM_MODE_OBJECT_CONNECTOR && has_connector == -1)
			has_connector = o;

		if (lessor_priv->universal_planes) {
			if (objects[o]->type == DRM_MODE_OBJECT_PLANE && has_plane == -1)
				has_plane = o;
		}
	}
	if (has_crtc == -1 || has_connector == -1)
		return -EINVAL;
	if (lessor_priv->universal_planes && has_plane == -1)
		return -EINVAL;
	return 0;
}

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
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 7672
          // ------------------------------- 
          // static_instructions_O1 : 54
          // dynamic_instructions_O1 : 5642
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 5637
          // ------------------------------- 
          // static_instructions_O3 : 52
          // dynamic_instructions_O3 : 5132
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 5132
          // ------------------------------- 
          // static_instructions_Os : 49
          // dynamic_instructions_Os : 5637
          // ------------------------------- 
          // static_instructions_Oz : 46
          // dynamic_instructions_Oz : 5890
          // ------------------------------- 

          int object_count = 255;
        
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_lessor_priv0 = 65025;
          struct drm_file * lessor_priv = (struct drm_file *) malloc(_len_lessor_priv0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_lessor_priv0; _i0++) {
              lessor_priv[_i0].universal_planes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_objects0 = 65025;
          struct drm_mode_object ** objects = (struct drm_mode_object **) malloc(_len_objects0*sizeof(struct drm_mode_object *));
          for(int _i0 = 0; _i0 < _len_objects0; _i0++) {
            int _len_objects1 = 1;
            objects[_i0] = (struct drm_mode_object *) malloc(_len_objects1*sizeof(struct drm_mode_object));
            for(int _i1 = 0; _i1 < _len_objects1; _i1++) {
                objects[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = validate_lease(dev,lessor_priv,object_count,objects);
          printf("%d\n", benchRet); 
          free(dev);
          free(lessor_priv);
          for(int i1 = 0; i1 < _len_objects0; i1++) {
              free(objects[i1]);
          }
          free(objects);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 322
          // ------------------------------- 
          // static_instructions_O1 : 54
          // dynamic_instructions_O1 : 252
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 247
          // ------------------------------- 
          // static_instructions_O3 : 52
          // dynamic_instructions_O3 : 232
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 232
          // ------------------------------- 
          // static_instructions_Os : 49
          // dynamic_instructions_Os : 247
          // ------------------------------- 
          // static_instructions_Oz : 46
          // dynamic_instructions_Oz : 255
          // ------------------------------- 

          int object_count = 10;
        
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_lessor_priv0 = 100;
          struct drm_file * lessor_priv = (struct drm_file *) malloc(_len_lessor_priv0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_lessor_priv0; _i0++) {
              lessor_priv[_i0].universal_planes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_objects0 = 100;
          struct drm_mode_object ** objects = (struct drm_mode_object **) malloc(_len_objects0*sizeof(struct drm_mode_object *));
          for(int _i0 = 0; _i0 < _len_objects0; _i0++) {
            int _len_objects1 = 1;
            objects[_i0] = (struct drm_mode_object *) malloc(_len_objects1*sizeof(struct drm_mode_object));
            for(int _i1 = 0; _i1 < _len_objects1; _i1++) {
                objects[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = validate_lease(dev,lessor_priv,object_count,objects);
          printf("%d\n", benchRet); 
          free(dev);
          free(lessor_priv);
          for(int i1 = 0; i1 < _len_objects0; i1++) {
              free(objects[i1]);
          }
          free(objects);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int object_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_lessor_priv0 = 1;
          struct drm_file * lessor_priv = (struct drm_file *) malloc(_len_lessor_priv0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_lessor_priv0; _i0++) {
              lessor_priv[_i0].universal_planes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_objects0 = 1;
          struct drm_mode_object ** objects = (struct drm_mode_object **) malloc(_len_objects0*sizeof(struct drm_mode_object *));
          for(int _i0 = 0; _i0 < _len_objects0; _i0++) {
            int _len_objects1 = 1;
            objects[_i0] = (struct drm_mode_object *) malloc(_len_objects1*sizeof(struct drm_mode_object));
            for(int _i1 = 0; _i1 < _len_objects1; _i1++) {
                objects[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int benchRet = validate_lease(dev,lessor_priv,object_count,objects);
          printf("%d\n", benchRet); 
          free(dev);
          free(lessor_priv);
          for(int i1 = 0; i1 < _len_objects0; i1++) {
              free(objects[i1]);
          }
          free(objects);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
