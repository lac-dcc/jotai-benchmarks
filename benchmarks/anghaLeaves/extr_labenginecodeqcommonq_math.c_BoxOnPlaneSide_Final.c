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

/* Type definitions */
typedef  float* vec3_t ;
struct cplane_s {int type; float dist; int signbits; float* normal; } ;

/* Variables and functions */

int BoxOnPlaneSide(vec3_t emins, vec3_t emaxs, struct cplane_s *p)
{
	float	dist[2];
	int		sides, b, i;

	// fast axial cases
	if (p->type < 3)
	{
		if (p->dist <= emins[p->type])
			return 1;
		if (p->dist >= emaxs[p->type])
			return 2;
		return 3;
	}

	// general case
	dist[0] = dist[1] = 0;
	if (p->signbits < 8) // >= 8: default case is original code (dist[0]=dist[1]=0)
	{
		for (i=0 ; i<3 ; i++)
		{
			b = (p->signbits >> i) & 1;
			dist[ b] += p->normal[i]*emaxs[i];
			dist[!b] += p->normal[i]*emins[i];
		}
	}

	sides = 0;
	if (dist[0] >= p->dist)
		sides = 1;
	if (dist[1] < p->dist)
		sides |= 2;

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
          float * emins = (float *) malloc(_len_emins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_emins0; _i0++) {
            emins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_emaxs0 = 1;
          float * emaxs = (float *) malloc(_len_emaxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_emaxs0; _i0++) {
            emaxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 1;
          struct cplane_s * p = (struct cplane_s *) malloc(_len_p0*sizeof(struct cplane_s));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].signbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (float *) malloc(_len_p__i0__normal0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
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
          float * emins = (float *) malloc(_len_emins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_emins0; _i0++) {
            emins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_emaxs0 = 65025;
          float * emaxs = (float *) malloc(_len_emaxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_emaxs0; _i0++) {
            emaxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 65025;
          struct cplane_s * p = (struct cplane_s *) malloc(_len_p0*sizeof(struct cplane_s));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].signbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (float *) malloc(_len_p__i0__normal0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
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
          float * emins = (float *) malloc(_len_emins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_emins0; _i0++) {
            emins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_emaxs0 = 100;
          float * emaxs = (float *) malloc(_len_emaxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_emaxs0; _i0++) {
            emaxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 100;
          struct cplane_s * p = (struct cplane_s *) malloc(_len_p0*sizeof(struct cplane_s));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        p[_i0].signbits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (float *) malloc(_len_p__i0__normal0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
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
