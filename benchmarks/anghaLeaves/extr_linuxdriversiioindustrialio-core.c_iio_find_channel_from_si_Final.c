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
struct iio_dev {int num_channels; struct iio_chan_spec const* channels; } ;
struct iio_chan_spec {int scan_index; } ;

/* Variables and functions */

const struct iio_chan_spec
*iio_find_channel_from_si(struct iio_dev *indio_dev, int si)
{
	int i;

	for (i = 0; i < indio_dev->num_channels; i++)
		if (indio_dev->channels[i].scan_index == si)
			return &indio_dev->channels[i];
	return NULL;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int si = 100;
        
          int _len_indio_dev0 = 1;
          struct iio_dev * indio_dev = (struct iio_dev *) malloc(_len_indio_dev0*sizeof(struct iio_dev));
          for(int _i0 = 0; _i0 < _len_indio_dev0; _i0++) {
              indio_dev[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_indio_dev__i0__channels0 = 1;
          indio_dev[_i0].channels = (const struct iio_chan_spec *) malloc(_len_indio_dev__i0__channels0*sizeof(const struct iio_chan_spec));
          for(int _j0 = 0; _j0 < _len_indio_dev__i0__channels0; _j0++) {
            
          }
        
          }
        
          const struct iio_chan_spec * benchRet = iio_find_channel_from_si(indio_dev,si);
          for(int _aux = 0; _aux < _len_indio_dev0; _aux++) {
          free(indio_dev[_aux].channels);
          }
          free(indio_dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int si = 255;
        
          int _len_indio_dev0 = 65025;
          struct iio_dev * indio_dev = (struct iio_dev *) malloc(_len_indio_dev0*sizeof(struct iio_dev));
          for(int _i0 = 0; _i0 < _len_indio_dev0; _i0++) {
              indio_dev[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_indio_dev__i0__channels0 = 1;
          indio_dev[_i0].channels = (const struct iio_chan_spec *) malloc(_len_indio_dev__i0__channels0*sizeof(const struct iio_chan_spec));
          for(int _j0 = 0; _j0 < _len_indio_dev__i0__channels0; _j0++) {
            
          }
        
          }
        
          const struct iio_chan_spec * benchRet = iio_find_channel_from_si(indio_dev,si);
          for(int _aux = 0; _aux < _len_indio_dev0; _aux++) {
          free(indio_dev[_aux].channels);
          }
          free(indio_dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int si = 10;
        
          int _len_indio_dev0 = 100;
          struct iio_dev * indio_dev = (struct iio_dev *) malloc(_len_indio_dev0*sizeof(struct iio_dev));
          for(int _i0 = 0; _i0 < _len_indio_dev0; _i0++) {
              indio_dev[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_indio_dev__i0__channels0 = 1;
          indio_dev[_i0].channels = (const struct iio_chan_spec *) malloc(_len_indio_dev__i0__channels0*sizeof(const struct iio_chan_spec));
          for(int _j0 = 0; _j0 < _len_indio_dev__i0__channels0; _j0++) {
            
          }
        
          }
        
          const struct iio_chan_spec * benchRet = iio_find_channel_from_si(indio_dev,si);
          for(int _aux = 0; _aux < _len_indio_dev0; _aux++) {
          free(indio_dev[_aux].channels);
          }
          free(indio_dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int si = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_indio_dev0 = 1;
          struct iio_dev * indio_dev = (struct iio_dev *) malloc(_len_indio_dev0*sizeof(struct iio_dev));
          for(int _i0 = 0; _i0 < _len_indio_dev0; _i0++) {
              indio_dev[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_indio_dev__i0__channels0 = 1;
          indio_dev[_i0].channels = (const struct iio_chan_spec *) malloc(_len_indio_dev__i0__channels0*sizeof(const struct iio_chan_spec));
          for(int _j0 = 0; _j0 < _len_indio_dev__i0__channels0; _j0++) {
            
          }
        
          }
        
          const struct iio_chan_spec * benchRet = iio_find_channel_from_si(indio_dev,si);
          for(int _aux = 0; _aux < _len_indio_dev0; _aux++) {
          free(indio_dev[_aux].channels);
          }
          free(indio_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
