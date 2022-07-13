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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* png_row_infop ;
typedef  void** png_bytep ;
struct TYPE_3__ {size_t rowbytes; int channels; int bit_depth; int pixel_depth; scalar_t__ color_type; } ;

/* Variables and functions */
 scalar_t__ PNG_COLOR_TYPE_GRAY ; 
 scalar_t__ PNG_COLOR_TYPE_GRAY_ALPHA ; 
 scalar_t__ PNG_COLOR_TYPE_RGB ; 
 scalar_t__ PNG_COLOR_TYPE_RGB_ALPHA ; 

void /* PRIVATE */
png_do_strip_channel(png_row_infop row_info, png_bytep row, int at_start)
{
   png_bytep sp = row; /* source pointer */
   png_bytep dp = row; /* destination pointer */
   png_bytep ep = row + row_info->rowbytes; /* One beyond end of row */

   /* At the start sp will point to the first byte to copy and dp to where
    * it is copied to.  ep always points just beyond the end of the row, so
    * the loop simply copies (channels-1) channels until sp reaches ep.
    *
    * at_start:        0 -- convert AG, XG, ARGB, XRGB, AAGG, XXGG, etc.
    *            nonzero -- convert GA, GX, RGBA, RGBX, GGAA, RRGGBBXX, etc.
    */

   /* GA, GX, XG cases */
   if (row_info->channels == 2)
   {
      if (row_info->bit_depth == 8)
      {
         if (at_start != 0) /* Skip initial filler */
            ++sp;
         else          /* Skip initial channel and, for sp, the filler */
         {
            sp += 2; ++dp;
         }

         /* For a 1 pixel wide image there is nothing to do */
         while (sp < ep)
         {
            *dp++ = *sp; sp += 2;
         }

         row_info->pixel_depth = 8;
      }

      else if (row_info->bit_depth == 16)
      {
         if (at_start != 0) /* Skip initial filler */
            sp += 2;
         else          /* Skip initial channel and, for sp, the filler */
         {
            sp += 4; dp += 2;
         }

         while (sp < ep)
         {
            *dp++ = *sp++; *dp++ = *sp; sp += 3;
         }

         row_info->pixel_depth = 16;
      }

      else
         return; /* bad bit depth */

      row_info->channels = 1;

      /* Finally fix the color type if it records an alpha channel */
      if (row_info->color_type == PNG_COLOR_TYPE_GRAY_ALPHA)
         row_info->color_type = PNG_COLOR_TYPE_GRAY;
   }

   /* RGBA, RGBX, XRGB cases */
   else if (row_info->channels == 4)
   {
      if (row_info->bit_depth == 8)
      {
         if (at_start != 0) /* Skip initial filler */
            ++sp;
         else          /* Skip initial channels and, for sp, the filler */
         {
            sp += 4; dp += 3;
         }

         /* Note that the loop adds 3 to dp and 4 to sp each time. */
         while (sp < ep)
         {
            *dp++ = *sp++; *dp++ = *sp++; *dp++ = *sp; sp += 2;
         }

         row_info->pixel_depth = 24;
      }

      else if (row_info->bit_depth == 16)
      {
         if (at_start != 0) /* Skip initial filler */
            sp += 2;
         else          /* Skip initial channels and, for sp, the filler */
         {
            sp += 8; dp += 6;
         }

         while (sp < ep)
         {
            /* Copy 6 bytes, skip 2 */
            *dp++ = *sp++; *dp++ = *sp++;
            *dp++ = *sp++; *dp++ = *sp++;
            *dp++ = *sp++; *dp++ = *sp; sp += 3;
         }

         row_info->pixel_depth = 48;
      }

      else
         return; /* bad bit depth */

      row_info->channels = 3;

      /* Finally fix the color type if it records an alpha channel */
      if (row_info->color_type == PNG_COLOR_TYPE_RGB_ALPHA)
         row_info->color_type = PNG_COLOR_TYPE_RGB;
   }

   else
      return; /* The filler channel has gone already */

   /* Fix the rowbytes value. */
   row_info->rowbytes = (size_t)(dp-row);
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
          int at_start = 100;
          int _len_row_info0 = 1;
          struct TYPE_3__ * row_info = (struct TYPE_3__ *) malloc(_len_row_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_row_info0; _i0++) {
            row_info[_i0].rowbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].pixel_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].color_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_row0 = 1;
          void ** row = (void **) malloc(_len_row0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
          }
          png_do_strip_channel(row_info,row,at_start);
          free(row_info);
          for(int i1 = 0; i1 < _len_row0; i1++) {
            int _len_row1 = 1;
              }
          free(row);
        
        break;
    }
    // big-arr
    case 1:
    {
          int at_start = 255;
          int _len_row_info0 = 65025;
          struct TYPE_3__ * row_info = (struct TYPE_3__ *) malloc(_len_row_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_row_info0; _i0++) {
            row_info[_i0].rowbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].pixel_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].color_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_row0 = 65025;
          void ** row = (void **) malloc(_len_row0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
          }
          png_do_strip_channel(row_info,row,at_start);
          free(row_info);
          for(int i1 = 0; i1 < _len_row0; i1++) {
            int _len_row1 = 1;
              }
          free(row);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int at_start = 10;
          int _len_row_info0 = 100;
          struct TYPE_3__ * row_info = (struct TYPE_3__ *) malloc(_len_row_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_row_info0; _i0++) {
            row_info[_i0].rowbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].pixel_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        row_info[_i0].color_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_row0 = 100;
          void ** row = (void **) malloc(_len_row0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
          }
          png_do_strip_channel(row_info,row,at_start);
          free(row_info);
          for(int i1 = 0; i1 < _len_row0; i1++) {
            int _len_row1 = 1;
              }
          free(row);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
