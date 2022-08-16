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
struct media_interface {int type; } ;

/* Variables and functions */
#define  MEDIA_INTF_T_DVB_CA 138 
#define  MEDIA_INTF_T_DVB_DEMUX 137 
#define  MEDIA_INTF_T_DVB_DVR 136 
#define  MEDIA_INTF_T_DVB_FE 135 
#define  MEDIA_INTF_T_DVB_NET 134 
#define  MEDIA_INTF_T_V4L_RADIO 133 
#define  MEDIA_INTF_T_V4L_SUBDEV 132 
#define  MEDIA_INTF_T_V4L_SWRADIO 131 
#define  MEDIA_INTF_T_V4L_TOUCH 130 
#define  MEDIA_INTF_T_V4L_VBI 129 
#define  MEDIA_INTF_T_V4L_VIDEO 128 

__attribute__((used)) static inline const char *intf_type(struct media_interface *intf)
{
	switch (intf->type) {
	case MEDIA_INTF_T_DVB_FE:
		return "dvb-frontend";
	case MEDIA_INTF_T_DVB_DEMUX:
		return "dvb-demux";
	case MEDIA_INTF_T_DVB_DVR:
		return "dvb-dvr";
	case MEDIA_INTF_T_DVB_CA:
		return  "dvb-ca";
	case MEDIA_INTF_T_DVB_NET:
		return "dvb-net";
	case MEDIA_INTF_T_V4L_VIDEO:
		return "v4l-video";
	case MEDIA_INTF_T_V4L_VBI:
		return "v4l-vbi";
	case MEDIA_INTF_T_V4L_RADIO:
		return "v4l-radio";
	case MEDIA_INTF_T_V4L_SUBDEV:
		return "v4l-subdev";
	case MEDIA_INTF_T_V4L_SWRADIO:
		return "v4l-swradio";
	case MEDIA_INTF_T_V4L_TOUCH:
		return "v4l-touch";
	default:
		return "unknown-intf";
	}
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
          int _len_intf0 = 1;
          struct media_interface * intf = (struct media_interface *) malloc(_len_intf0*sizeof(struct media_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
            intf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = intf_type(intf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(intf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_intf0 = 100;
          struct media_interface * intf = (struct media_interface *) malloc(_len_intf0*sizeof(struct media_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
            intf[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = intf_type(intf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(intf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
