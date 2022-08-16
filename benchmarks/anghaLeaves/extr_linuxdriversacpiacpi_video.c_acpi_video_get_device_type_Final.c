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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int int_val; } ;
struct acpi_video_enumerated_device {TYPE_1__ value; } ;
struct acpi_video_bus {int attached_count; struct acpi_video_enumerated_device* attached_array; } ;

/* Variables and functions */

__attribute__((used)) static int
acpi_video_get_device_type(struct acpi_video_bus *video,
			   unsigned long device_id)
{
	struct acpi_video_enumerated_device *ids;
	int i;

	for (i = 0; i < video->attached_count; i++) {
		ids = &video->attached_array[i];
		if ((ids->value.int_val & 0xffff) == device_id)
			return ids->value.int_val;
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
          unsigned long device_id = 100;
          int _len_video0 = 1;
          struct acpi_video_bus * video = (struct acpi_video_bus *) malloc(_len_video0*sizeof(struct acpi_video_bus));
          for(int _i0 = 0; _i0 < _len_video0; _i0++) {
            video[_i0].attached_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_video__i0__attached_array0 = 1;
          video[_i0].attached_array = (struct acpi_video_enumerated_device *) malloc(_len_video__i0__attached_array0*sizeof(struct acpi_video_enumerated_device));
          for(int _j0 = 0; _j0 < _len_video__i0__attached_array0; _j0++) {
            video[_i0].attached_array->value.int_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = acpi_video_get_device_type(video,device_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_video0; _aux++) {
          free(video[_aux].attached_array);
          }
          free(video);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
