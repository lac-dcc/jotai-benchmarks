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
struct mt_device {int dummy; } ;
struct mt_application {int /*<<< orphan*/  quirks; int /*<<< orphan*/  have_contact_count; } ;

/* Variables and functions */
 int /*<<< orphan*/  MT_QUIRK_CONTACT_CNT_ACCURATE ; 

__attribute__((used)) static void mt_post_parse(struct mt_device *td, struct mt_application *app)
{
	if (!app->have_contact_count)
		app->quirks &= ~MT_QUIRK_CONTACT_CNT_ACCURATE;
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
          int _len_td0 = 1;
          struct mt_device * td = (struct mt_device *) malloc(_len_td0*sizeof(struct mt_device));
          for(int _i0 = 0; _i0 < _len_td0; _i0++) {
            td[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_app0 = 1;
          struct mt_application * app = (struct mt_application *) malloc(_len_app0*sizeof(struct mt_application));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
        app[_i0].have_contact_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mt_post_parse(td,app);
          free(td);
          free(app);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
