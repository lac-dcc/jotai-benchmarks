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
       1            linked\n\
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
struct tegra_sor_hdmi_settings {unsigned long frequency; } ;
struct tegra_sor {unsigned int num_settings; struct tegra_sor_hdmi_settings* settings; } ;

/* Variables and functions */

__attribute__((used)) static struct tegra_sor_hdmi_settings *
tegra_sor_hdmi_find_settings(struct tegra_sor *sor, unsigned long frequency)
{
	unsigned int i;

	for (i = 0; i < sor->num_settings; i++)
		if (frequency <= sor->settings[i].frequency)
			return &sor->settings[i];

	return NULL;
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
          unsigned long frequency = 100;
          int _len_sor0 = 1;
          struct tegra_sor * sor = (struct tegra_sor *) malloc(_len_sor0*sizeof(struct tegra_sor));
          for(int _i0 = 0; _i0 < _len_sor0; _i0++) {
            sor[_i0].num_settings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sor__i0__settings0 = 1;
          sor[_i0].settings = (struct tegra_sor_hdmi_settings *) malloc(_len_sor__i0__settings0*sizeof(struct tegra_sor_hdmi_settings));
          for(int _j0 = 0; _j0 < _len_sor__i0__settings0; _j0++) {
            sor[_i0].settings->frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct tegra_sor_hdmi_settings * benchRet = tegra_sor_hdmi_find_settings(sor,frequency);
          printf("%lu\n", (*benchRet).frequency);
          for(int _aux = 0; _aux < _len_sor0; _aux++) {
          free(sor[_aux].settings);
          }
          free(sor);
        
        break;
    }
    // linked
    case 1:
    {
          unsigned long frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sor0 = 1;
          struct tegra_sor * sor = (struct tegra_sor *) malloc(_len_sor0*sizeof(struct tegra_sor));
          for(int _i0 = 0; _i0 < _len_sor0; _i0++) {
            sor[_i0].num_settings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sor__i0__settings0 = 1;
          sor[_i0].settings = (struct tegra_sor_hdmi_settings *) malloc(_len_sor__i0__settings0*sizeof(struct tegra_sor_hdmi_settings));
          for(int _j0 = 0; _j0 < _len_sor__i0__settings0; _j0++) {
            sor[_i0].settings->frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct tegra_sor_hdmi_settings * benchRet = tegra_sor_hdmi_find_settings(sor,frequency);
          printf("%lu\n", (*benchRet).frequency);
          for(int _aux = 0; _aux < _len_sor0; _aux++) {
          free(sor[_aux].settings);
          }
          free(sor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
