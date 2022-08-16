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
typedef  TYPE_1__* png_structrp ;
struct TYPE_3__ {scalar_t__ num_trans; int* trans_alpha; int transformations; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int PNG_BACKGROUND_EXPAND ; 
 int PNG_COMPOSE ; 
 int PNG_ENCODE_ALPHA ; 
 int /*<<< orphan*/  PNG_FLAG_OPTIMIZE_ALPHA ; 

__attribute__((used)) static void /* PRIVATE */
png_init_palette_transformations(png_structrp png_ptr)
{
   /* Called to handle the (input) palette case.  In png_do_read_transformations
    * the first step is to expand the palette if requested, so this code must
    * take care to only make changes that are invariant with respect to the
    * palette expansion, or only do them if there is no expansion.
    *
    * STRIP_ALPHA has already been handled in the caller (by setting num_trans
    * to 0.)
    */
   int input_has_alpha = 0;
   int input_has_transparency = 0;

   if (png_ptr->num_trans > 0)
   {
      int i;

      /* Ignore if all the entries are opaque (unlikely!) */
      for (i=0; i<png_ptr->num_trans; ++i)
      {
         if (png_ptr->trans_alpha[i] == 255)
            continue;
         else if (png_ptr->trans_alpha[i] == 0)
            input_has_transparency = 1;
         else
         {
            input_has_transparency = 1;
            input_has_alpha = 1;
            break;
         }
      }
   }

   /* If no alpha we can optimize. */
   if (input_has_alpha == 0)
   {
      /* Any alpha means background and associative alpha processing is
       * required, however if the alpha is 0 or 1 throughout OPTIMIZE_ALPHA
       * and ENCODE_ALPHA are irrelevant.
       */
      png_ptr->transformations &= ~PNG_ENCODE_ALPHA;
      png_ptr->flags &= ~PNG_FLAG_OPTIMIZE_ALPHA;

      if (input_has_transparency == 0)
         png_ptr->transformations &= ~(PNG_COMPOSE | PNG_BACKGROUND_EXPAND);
   }

#if defined(PNG_READ_EXPAND_SUPPORTED) && defined(PNG_READ_BACKGROUND_SUPPORTED)
   /* png_set_background handling - deals with the complexity of whether the
    * background color is in the file format or the screen format in the case
    * where an 'expand' will happen.
    */

   /* The following code cannot be entered in the alpha pre-multiplication case
    * because PNG_BACKGROUND_EXPAND is cancelled below.
    */
   if ((png_ptr->transformations & PNG_BACKGROUND_EXPAND) != 0 &&
       (png_ptr->transformations & PNG_EXPAND) != 0)
   {
      {
         png_ptr->background.red   =
             png_ptr->palette[png_ptr->background.index].red;
         png_ptr->background.green =
             png_ptr->palette[png_ptr->background.index].green;
         png_ptr->background.blue  =
             png_ptr->palette[png_ptr->background.index].blue;

#ifdef PNG_READ_INVERT_ALPHA_SUPPORTED
        if ((png_ptr->transformations & PNG_INVERT_ALPHA) != 0)
        {
           if ((png_ptr->transformations & PNG_EXPAND_tRNS) == 0)
           {
              /* Invert the alpha channel (in tRNS) unless the pixels are
               * going to be expanded, in which case leave it for later
               */
              int i, istop = png_ptr->num_trans;

              for (i=0; i<istop; i++)
                 png_ptr->trans_alpha[i] = (png_byte)(255 -
                    png_ptr->trans_alpha[i]);
           }
        }
#endif /* READ_INVERT_ALPHA */
      }
   } /* background expand and (therefore) no alpha association. */
#endif /* READ_EXPAND && READ_BACKGROUND */
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
          int _len_png_ptr0 = 1;
          struct TYPE_3__ * png_ptr = (struct TYPE_3__ *) malloc(_len_png_ptr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_png_ptr0; _i0++) {
            png_ptr[_i0].num_trans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_png_ptr__i0__trans_alpha0 = 1;
          png_ptr[_i0].trans_alpha = (int *) malloc(_len_png_ptr__i0__trans_alpha0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_png_ptr__i0__trans_alpha0; _j0++) {
            png_ptr[_i0].trans_alpha[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        png_ptr[_i0].transformations = ((-2 * (next_i()%2)) + 1) * next_i();
        png_ptr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          png_init_palette_transformations(png_ptr);
          for(int _aux = 0; _aux < _len_png_ptr0; _aux++) {
          free(png_ptr[_aux].trans_alpha);
          }
          free(png_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
