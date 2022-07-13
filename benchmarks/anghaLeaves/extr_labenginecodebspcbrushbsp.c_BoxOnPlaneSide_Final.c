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
typedef  scalar_t__* vec3_t ;
struct TYPE_3__ {int type; float dist; int signbits; scalar_t__* normal; } ;
typedef  TYPE_1__ plane_t ;

/* Variables and functions */
 scalar_t__ PLANESIDE_EPSILON ; 
 int PSIDE_BACK ; 
 int PSIDE_FRONT ; 

int BoxOnPlaneSide (vec3_t emins, vec3_t emaxs, plane_t *p)
{
	float	dist1, dist2;
	int sides;

	// axial planes are easy
	if (p->type < 3)
	{
		sides = 0;
		if (emaxs[p->type] > p->dist+PLANESIDE_EPSILON) sides |= PSIDE_FRONT;
		if (emins[p->type] < p->dist-PLANESIDE_EPSILON) sides |= PSIDE_BACK;
		return sides;
	} //end if
	
// general case
	switch (p->signbits)
	{
	case 0:
		dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
		dist2 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
		break;
	case 1:
		dist1 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
		dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
		break;
	case 2:
		dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
		dist2 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
		break;
	case 3:
		dist1 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
		dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
		break;
	case 4:
		dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
		dist2 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
		break;
	case 5:
		dist1 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
		dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
		break;
	case 6:
		dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
		dist2 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
		break;
	case 7:
		dist1 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
		dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
		break;
	default:
		dist1 = dist2 = 0;		// shut up compiler
//		assert( 0 );
		break;
	}

	sides = 0;
	if (dist1 - p->dist >= PLANESIDE_EPSILON) sides = PSIDE_FRONT;
	if (dist2 - p->dist < PLANESIDE_EPSILON) sides |= PSIDE_BACK;

//	assert(sides != 0);

	return sides;
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
          int _len_emins0 = 1;
          long * emins = (long *) malloc(_len_emins0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_emins0; _i0++) {
            emins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_emaxs0 = 1;
          long * emaxs = (long *) malloc(_len_emaxs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_emaxs0; _i0++) {
            emaxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].signbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (long *) malloc(_len_p__i0__normal0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BoxOnPlaneSide(emins,emaxs,p);
          printf("%d\n", benchRet); 
          free(emins);
          free(emaxs);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].normal);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_emins0 = 65025;
          long * emins = (long *) malloc(_len_emins0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_emins0; _i0++) {
            emins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_emaxs0 = 65025;
          long * emaxs = (long *) malloc(_len_emaxs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_emaxs0; _i0++) {
            emaxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].signbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (long *) malloc(_len_p__i0__normal0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BoxOnPlaneSide(emins,emaxs,p);
          printf("%d\n", benchRet); 
          free(emins);
          free(emaxs);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].normal);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_emins0 = 100;
          long * emins = (long *) malloc(_len_emins0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_emins0; _i0++) {
            emins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_emaxs0 = 100;
          long * emaxs = (long *) malloc(_len_emaxs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_emaxs0; _i0++) {
            emaxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].signbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (long *) malloc(_len_p__i0__normal0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BoxOnPlaneSide(emins,emaxs,p);
          printf("%d\n", benchRet); 
          free(emins);
          free(emaxs);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].normal);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
