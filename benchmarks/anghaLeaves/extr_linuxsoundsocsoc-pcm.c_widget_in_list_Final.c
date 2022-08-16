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
struct snd_soc_dapm_widget_list {int num_widgets; struct snd_soc_dapm_widget** widgets; } ;
struct snd_soc_dapm_widget {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int widget_in_list(struct snd_soc_dapm_widget_list *list,
		struct snd_soc_dapm_widget *widget)
{
	int i;

	for (i = 0; i < list->num_widgets; i++) {
		if (widget == list->widgets[i])
			return 1;
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
          int _len_list0 = 1;
          struct snd_soc_dapm_widget_list * list = (struct snd_soc_dapm_widget_list *) malloc(_len_list0*sizeof(struct snd_soc_dapm_widget_list));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].num_widgets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__widgets0 = 1;
          list[_i0].widgets = (struct snd_soc_dapm_widget **) malloc(_len_list__i0__widgets0*sizeof(struct snd_soc_dapm_widget *));
          for(int _j0 = 0; _j0 < _len_list__i0__widgets0; _j0++) {
            int _len_list__i0__widgets1 = 1;
            list[_i0].widgets[_j0] = (struct snd_soc_dapm_widget *) malloc(_len_list__i0__widgets1*sizeof(struct snd_soc_dapm_widget));
            for(int _j1 = 0; _j1 < _len_list__i0__widgets1; _j1++) {
              list[_i0].widgets[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_widget0 = 1;
          struct snd_soc_dapm_widget * widget = (struct snd_soc_dapm_widget *) malloc(_len_widget0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_widget0; _i0++) {
            widget[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = widget_in_list(list,widget);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(*(list[_aux].widgets));
        free(list[_aux].widgets);
          }
          free(list);
          free(widget);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
