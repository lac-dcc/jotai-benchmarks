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
       1            big-arr-10x\n\
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
struct sst_dev_stream_map {int dev_num; int direction; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int sst_get_stream_mapping(int dev, int sdev, int dir,
	struct sst_dev_stream_map *map, int size)
{
	int i;

	if (map == NULL)
		return -EINVAL;


	/* index 0 is not used in stream map */
	for (i = 1; i < size; i++) {
		if ((map[i].dev_num == dev) && (map[i].direction == dir))
			return i;
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

    // big-arr
    case 0:
    {
          int dev = 255;
          int sdev = 255;
          int dir = 255;
          int size = 255;
          int _len_map0 = 65025;
          struct sst_dev_stream_map * map = (struct sst_dev_stream_map *) malloc(_len_map0*sizeof(struct sst_dev_stream_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sst_get_stream_mapping(dev,sdev,dir,map,size);
          printf("%d\n", benchRet); 
          free(map);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int dev = 10;
          int sdev = 10;
          int dir = 10;
          int size = 10;
          int _len_map0 = 100;
          struct sst_dev_stream_map * map = (struct sst_dev_stream_map *) malloc(_len_map0*sizeof(struct sst_dev_stream_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sst_get_stream_mapping(dev,sdev,dir,map,size);
          printf("%d\n", benchRet); 
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
