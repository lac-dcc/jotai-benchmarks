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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int frm_fmt; int /*<<< orphan*/  stdid; } ;
struct TYPE_9__ {int storage_mode; int hpitch; int /*<<< orphan*/  stdid; } ;
struct vpif_params {TYPE_5__ std_info; TYPE_4__ video_params; } ;
struct video_obj {scalar_t__ buf_field; } ;
struct TYPE_6__ {int field; unsigned int sizeimage; unsigned int bytesperline; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct common_obj {unsigned int ytop_off; unsigned int ybtm_off; unsigned int ctop_off; unsigned int cbtm_off; TYPE_3__ fmt; } ;
struct channel_obj {struct vpif_params vpifparams; struct video_obj video; struct common_obj* common; } ;
typedef  enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;

/* Variables and functions */
 scalar_t__ V4L2_FIELD_ANY ; 
 scalar_t__ V4L2_FIELD_INTERLACED ; 
 scalar_t__ V4L2_FIELD_NONE ; 
 scalar_t__ V4L2_FIELD_SEQ_BT ; 
 scalar_t__ V4L2_FIELD_SEQ_TB ; 
 size_t VPIF_VIDEO_INDEX ; 

__attribute__((used)) static void vpif_calculate_offsets(struct channel_obj *ch)
{
	struct common_obj *common = &ch->common[VPIF_VIDEO_INDEX];
	struct vpif_params *vpifparams = &ch->vpifparams;
	enum v4l2_field field = common->fmt.fmt.pix.field;
	struct video_obj *vid_ch = &ch->video;
	unsigned int hpitch, sizeimage;

	if (V4L2_FIELD_ANY == common->fmt.fmt.pix.field) {
		if (ch->vpifparams.std_info.frm_fmt)
			vid_ch->buf_field = V4L2_FIELD_NONE;
		else
			vid_ch->buf_field = V4L2_FIELD_INTERLACED;
	} else {
		vid_ch->buf_field = common->fmt.fmt.pix.field;
	}

	sizeimage = common->fmt.fmt.pix.sizeimage;

	hpitch = common->fmt.fmt.pix.bytesperline;
	if ((V4L2_FIELD_NONE == vid_ch->buf_field) ||
	    (V4L2_FIELD_INTERLACED == vid_ch->buf_field)) {
		common->ytop_off = 0;
		common->ybtm_off = hpitch;
		common->ctop_off = sizeimage / 2;
		common->cbtm_off = sizeimage / 2 + hpitch;
	} else if (V4L2_FIELD_SEQ_TB == vid_ch->buf_field) {
		common->ytop_off = 0;
		common->ybtm_off = sizeimage / 4;
		common->ctop_off = sizeimage / 2;
		common->cbtm_off = common->ctop_off + sizeimage / 4;
	} else if (V4L2_FIELD_SEQ_BT == vid_ch->buf_field) {
		common->ybtm_off = 0;
		common->ytop_off = sizeimage / 4;
		common->cbtm_off = sizeimage / 2;
		common->ctop_off = common->cbtm_off + sizeimage / 4;
	}

	if ((V4L2_FIELD_NONE == vid_ch->buf_field) ||
	    (V4L2_FIELD_INTERLACED == vid_ch->buf_field)) {
		vpifparams->video_params.storage_mode = 1;
	} else {
		vpifparams->video_params.storage_mode = 0;
	}

	if (ch->vpifparams.std_info.frm_fmt == 1) {
		vpifparams->video_params.hpitch =
		    common->fmt.fmt.pix.bytesperline;
	} else {
		if ((field == V4L2_FIELD_ANY) ||
			(field == V4L2_FIELD_INTERLACED))
			vpifparams->video_params.hpitch =
			    common->fmt.fmt.pix.bytesperline * 2;
		else
			vpifparams->video_params.hpitch =
			    common->fmt.fmt.pix.bytesperline;
	}

	ch->vpifparams.video_params.stdid = ch->vpifparams.std_info.stdid;
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
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 48
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          int _len_ch0 = 65025;
          struct channel_obj * ch = (struct channel_obj *) malloc(_len_ch0*sizeof(struct channel_obj));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
              ch[_i0].vpifparams.std_info.frm_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.std_info.stdid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ch[_i0].vpifparams.video_params.storage_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.video_params.hpitch = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.video_params.stdid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          ch[_i0].video.buf_field = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ch__i0__common0 = 1;
          ch[_i0].common = (struct common_obj *) malloc(_len_ch__i0__common0*sizeof(struct common_obj));
          for(int _j0 = 0; _j0 < _len_ch__i0__common0; _j0++) {
              ch[_i0].common->ytop_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->ybtm_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->ctop_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->cbtm_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          }
        
          vpif_calculate_offsets(ch);
          for(int _aux = 0; _aux < _len_ch0; _aux++) {
          free(ch[_aux].common);
          }
          free(ch);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 48
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          int _len_ch0 = 100;
          struct channel_obj * ch = (struct channel_obj *) malloc(_len_ch0*sizeof(struct channel_obj));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
              ch[_i0].vpifparams.std_info.frm_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.std_info.stdid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ch[_i0].vpifparams.video_params.storage_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.video_params.hpitch = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.video_params.stdid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          ch[_i0].video.buf_field = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ch__i0__common0 = 1;
          ch[_i0].common = (struct common_obj *) malloc(_len_ch__i0__common0*sizeof(struct common_obj));
          for(int _j0 = 0; _j0 < _len_ch__i0__common0; _j0++) {
              ch[_i0].common->ytop_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->ybtm_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->ctop_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->cbtm_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          }
        
          vpif_calculate_offsets(ch);
          for(int _aux = 0; _aux < _len_ch0; _aux++) {
          free(ch[_aux].common);
          }
          free(ch);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 79
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 51
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 48
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          int _len_ch0 = 1;
          struct channel_obj * ch = (struct channel_obj *) malloc(_len_ch0*sizeof(struct channel_obj));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
              ch[_i0].vpifparams.std_info.frm_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.std_info.stdid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ch[_i0].vpifparams.video_params.storage_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.video_params.hpitch = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].vpifparams.video_params.stdid = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          ch[_i0].video.buf_field = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ch__i0__common0 = 1;
          ch[_i0].common = (struct common_obj *) malloc(_len_ch__i0__common0*sizeof(struct common_obj));
          for(int _j0 = 0; _j0 < _len_ch__i0__common0; _j0++) {
              ch[_i0].common->ytop_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->ybtm_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->ctop_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->cbtm_off = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          ch[_i0].common->fmt.fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          }
        
          vpif_calculate_offsets(ch);
          for(int _aux = 0; _aux < _len_ch0; _aux++) {
          free(ch[_aux].common);
          }
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
