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

/* Type definitions */
struct common_obj {int /*<<< orphan*/  set_addr; } ;
struct channel_obj {scalar_t__ channel_id; struct common_obj* common; } ;

/* Variables and functions */
 scalar_t__ VPIF_CHANNEL3_VIDEO ; 
 size_t VPIF_VIDEO_INDEX ; 
 int /*<<< orphan*/  ch2_set_videobuf_addr ; 
 int /*<<< orphan*/  ch2_set_videobuf_addr_yc_nmux ; 
 int /*<<< orphan*/  ch3_set_videobuf_addr ; 

__attribute__((used)) static void vpif_config_addr(struct channel_obj *ch, int muxmode)
{
	struct common_obj *common = &ch->common[VPIF_VIDEO_INDEX];

	if (VPIF_CHANNEL3_VIDEO == ch->channel_id) {
		common->set_addr = ch3_set_videobuf_addr;
	} else {
		if (2 == muxmode)
			common->set_addr = ch2_set_videobuf_addr_yc_nmux;
		else
			common->set_addr = ch2_set_videobuf_addr;
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
          int muxmode = 100;
          int _len_ch0 = 1;
          struct channel_obj * ch = (struct channel_obj *) malloc(_len_ch0*sizeof(struct channel_obj));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].channel_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ch__i0__common0 = 1;
          ch[_i0].common = (struct common_obj *) malloc(_len_ch__i0__common0*sizeof(struct common_obj));
          for(int _j0 = 0; _j0 < _len_ch__i0__common0; _j0++) {
            ch[_i0].common->set_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vpif_config_addr(ch,muxmode);
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
