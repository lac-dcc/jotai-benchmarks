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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int WORD ;
struct TYPE_4__ {scalar_t__ fClusterStart; } ;
struct TYPE_5__ {TYPE_1__ sva; } ;
typedef  TYPE_2__ SCRIPT_GLYPHPROP ;

/* Variables and functions */

__attribute__((used)) static void UpdateClustersFromGlyphProp(const int cGlyphs, const int cChars, WORD* pwLogClust, SCRIPT_GLYPHPROP *pGlyphProp)
{
    int i;

    for (i = 0; i < cGlyphs; i++)
    {
        if (!pGlyphProp[i].sva.fClusterStart)
        {
            int j;
            for (j = 0; j < cChars; j++)
            {
                if (pwLogClust[j] == i)
                {
                    int k = j;
                    while (k >= 0 && k <cChars && !pGlyphProp[pwLogClust[k]].sva.fClusterStart)
                        k-=1;
                    if (k >= 0 && k <cChars && pGlyphProp[pwLogClust[k]].sva.fClusterStart)
                        pwLogClust[j] = pwLogClust[k];
                }
            }
        }
    }
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
          const int cGlyphs = 255;
        
          const int cChars = 255;
        
          int _len_pwLogClust0 = 65025;
          int * pwLogClust = (int *) malloc(_len_pwLogClust0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pGlyphProp0 = 65025;
          struct TYPE_5__ * pGlyphProp = (struct TYPE_5__ *) malloc(_len_pGlyphProp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pGlyphProp0; _i0++) {
              pGlyphProp[_i0].sva.fClusterStart = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          UpdateClustersFromGlyphProp(cGlyphs,cChars,pwLogClust,pGlyphProp);
          free(pwLogClust);
          free(pGlyphProp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          const int cGlyphs = 10;
        
          const int cChars = 10;
        
          int _len_pwLogClust0 = 100;
          int * pwLogClust = (int *) malloc(_len_pwLogClust0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pGlyphProp0 = 100;
          struct TYPE_5__ * pGlyphProp = (struct TYPE_5__ *) malloc(_len_pGlyphProp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pGlyphProp0; _i0++) {
              pGlyphProp[_i0].sva.fClusterStart = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          UpdateClustersFromGlyphProp(cGlyphs,cChars,pwLogClust,pGlyphProp);
          free(pwLogClust);
          free(pGlyphProp);
        
        break;
    }
    // empty
    case 2:
    {
          const int cGlyphs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const int cChars = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pwLogClust0 = 1;
          int * pwLogClust = (int *) malloc(_len_pwLogClust0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwLogClust0; _i0++) {
            pwLogClust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pGlyphProp0 = 1;
          struct TYPE_5__ * pGlyphProp = (struct TYPE_5__ *) malloc(_len_pGlyphProp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pGlyphProp0; _i0++) {
              pGlyphProp[_i0].sva.fClusterStart = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          UpdateClustersFromGlyphProp(cGlyphs,cChars,pwLogClust,pGlyphProp);
          free(pwLogClust);
          free(pGlyphProp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
