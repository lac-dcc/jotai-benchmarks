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
struct gl_material {float* ShineTable; } ;

/* Variables and functions */
 int SHINE_TABLE_SIZE ; 

void gl_compute_material_shine_table( struct gl_material *m )
{
   int i;

   m->ShineTable[0] = 0.0F;
   for (i=1;i<SHINE_TABLE_SIZE;i++) {
#if 0
      double x = pow( i/(double)(SHINE_TABLE_SIZE-1), exponent );
      if (x<1.0e-10) {
         m->ShineTable[i] = 0.0F;
      }
      else {
         m->ShineTable[i] = x;
      }
#else
      /* just invalidate the table */
      m->ShineTable[i] = -1.0;
#endif
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
          int _len_m0 = 1;
          struct gl_material * m = (struct gl_material *) malloc(_len_m0*sizeof(struct gl_material));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              int _len_m__i0__ShineTable0 = 1;
          m[_i0].ShineTable = (float *) malloc(_len_m__i0__ShineTable0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_m__i0__ShineTable0; _j0++) {
            m[_i0].ShineTable[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          gl_compute_material_shine_table(m);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].ShineTable);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
