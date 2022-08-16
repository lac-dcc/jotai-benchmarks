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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int flags; scalar_t__ texinfo; } ;
typedef  TYPE_1__ side_t ;
struct TYPE_5__ {int contents; int numsides; TYPE_1__* original_sides; } ;
typedef  TYPE_2__ mapbrush_t ;

/* Variables and functions */
 int CONTENTS_AREAPORTAL ; 
 int CONTENTS_CLUSTERPORTAL ; 
 int CONTENTS_DONOTENTER ; 
 int CONTENTS_JUMPPAD ; 
 int CONTENTS_LADDER ; 
 int CONTENTS_LAVA ; 
 int CONTENTS_PLAYERCLIP ; 
 int CONTENTS_SLIME ; 
 int CONTENTS_TELEPORTER ; 
 int CONTENTS_WATER ; 
 int CONTENTS_WINDOW ; 
 int SFL_BEVEL ; 
 int SFL_TEXTURED ; 
 scalar_t__ TEXINFO_NODE ; 

void AAS_SetTexinfo(mapbrush_t *brush)
{
	int n;
	side_t *side;

	if (brush->contents & (CONTENTS_LADDER
									| CONTENTS_AREAPORTAL
									| CONTENTS_CLUSTERPORTAL
									| CONTENTS_TELEPORTER
									| CONTENTS_JUMPPAD
									| CONTENTS_DONOTENTER
									| CONTENTS_WATER
									| CONTENTS_LAVA
									| CONTENTS_SLIME
									| CONTENTS_WINDOW
									| CONTENTS_PLAYERCLIP))
	{
		//we just set texinfo to 0 because these brush sides MUST be used as
		//bsp splitters textured or not textured
		for (n = 0; n < brush->numsides; n++)
		{
			side = brush->original_sides + n;
			//side->flags |= SFL_TEXTURED|SFL_VISIBLE;
			side->texinfo = 0;
		} //end for
	} //end if
	else
	{
		//only use brush sides as splitters if they are textured
		//texinfo of non-textured sides will be set to TEXINFO_NODE
		for (n = 0; n < brush->numsides; n++)
		{
			side = brush->original_sides + n;
			//don't use side as splitter (set texinfo to TEXINFO_NODE) if not textured
			if (side->flags & (SFL_TEXTURED|SFL_BEVEL)) side->texinfo = 0;
			else side->texinfo = TEXINFO_NODE;
		} //end for
	} //end else
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
          int _len_brush0 = 1;
          struct TYPE_5__ * brush = (struct TYPE_5__ *) malloc(_len_brush0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].contents = ((-2 * (next_i()%2)) + 1) * next_i();
        brush[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__original_sides0 = 1;
          brush[_i0].original_sides = (struct TYPE_4__ *) malloc(_len_brush__i0__original_sides0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_brush__i0__original_sides0; _j0++) {
            brush[_i0].original_sides->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        brush[_i0].original_sides->texinfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          AAS_SetTexinfo(brush);
          for(int _aux = 0; _aux < _len_brush0; _aux++) {
          free(brush[_aux].original_sides);
          }
          free(brush);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
