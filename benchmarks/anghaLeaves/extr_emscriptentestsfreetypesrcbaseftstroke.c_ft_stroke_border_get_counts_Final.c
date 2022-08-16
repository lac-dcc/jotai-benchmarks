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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ num_points; int* tags; int /*<<< orphan*/  valid; int /*<<< orphan*/ * points; } ;
typedef  int /*<<< orphan*/  FT_Vector ;
typedef  scalar_t__ FT_UInt ;
typedef  TYPE_1__* FT_StrokeBorder ;
typedef  int FT_Int ;
typedef  int /*<<< orphan*/  FT_Error ;
typedef  int FT_Byte ;

/* Variables and functions */
 int /*<<< orphan*/  FT_Err_Ok ; 
 int FT_STROKE_TAG_BEGIN ; 
 int FT_STROKE_TAG_END ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static FT_Error
  ft_stroke_border_get_counts( FT_StrokeBorder  border,
                               FT_UInt         *anum_points,
                               FT_UInt         *anum_contours )
  {
    FT_Error  error        = FT_Err_Ok;
    FT_UInt   num_points   = 0;
    FT_UInt   num_contours = 0;

    FT_UInt     count      = border->num_points;
    FT_Vector*  point      = border->points;
    FT_Byte*    tags       = border->tags;
    FT_Int      in_contour = 0;


    for ( ; count > 0; count--, num_points++, point++, tags++ )
    {
      if ( tags[0] & FT_STROKE_TAG_BEGIN )
      {
        if ( in_contour != 0 )
          goto Fail;

        in_contour = 1;
      }
      else if ( in_contour == 0 )
        goto Fail;

      if ( tags[0] & FT_STROKE_TAG_END )
      {
        in_contour = 0;
        num_contours++;
      }
    }

    if ( in_contour != 0 )
      goto Fail;

    border->valid = TRUE;

  Exit:
    *anum_points   = num_points;
    *anum_contours = num_contours;
    return error;

  Fail:
    num_points   = 0;
    num_contours = 0;
    goto Exit;
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
          int _len_border0 = 1;
          struct TYPE_3__ * border = (struct TYPE_3__ *) malloc(_len_border0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_border0; _i0++) {
            border[_i0].num_points = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_border__i0__tags0 = 1;
          border[_i0].tags = (int *) malloc(_len_border__i0__tags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_border__i0__tags0; _j0++) {
            border[_i0].tags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        border[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_border__i0__points0 = 1;
          border[_i0].points = (int *) malloc(_len_border__i0__points0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_border__i0__points0; _j0++) {
            border[_i0].points[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_anum_points0 = 1;
          long * anum_points = (long *) malloc(_len_anum_points0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_anum_points0; _i0++) {
            anum_points[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_anum_contours0 = 1;
          long * anum_contours = (long *) malloc(_len_anum_contours0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_anum_contours0; _i0++) {
            anum_contours[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ft_stroke_border_get_counts(border,anum_points,anum_contours);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_border0; _aux++) {
          free(border[_aux].tags);
          }
          for(int _aux = 0; _aux < _len_border0; _aux++) {
          free(border[_aux].points);
          }
          free(border);
          free(anum_points);
          free(anum_contours);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
