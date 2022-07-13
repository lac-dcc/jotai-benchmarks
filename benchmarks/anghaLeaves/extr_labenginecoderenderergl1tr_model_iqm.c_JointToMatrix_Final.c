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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  float* vec4_t ;
typedef  float* vec3_t ;

/* Variables and functions */

__attribute__((used)) static void JointToMatrix( vec4_t rot, vec3_t scale, vec3_t trans,
			   float *mat ) {
	float xx = 2.0f * rot[0] * rot[0];
	float yy = 2.0f * rot[1] * rot[1];
	float zz = 2.0f * rot[2] * rot[2];
	float xy = 2.0f * rot[0] * rot[1];
	float xz = 2.0f * rot[0] * rot[2];
	float yz = 2.0f * rot[1] * rot[2];
	float wx = 2.0f * rot[3] * rot[0];
	float wy = 2.0f * rot[3] * rot[1];
	float wz = 2.0f * rot[3] * rot[2];

	mat[ 0] = scale[0] * (1.0f - (yy + zz));
	mat[ 1] = scale[0] * (xy - wz);
	mat[ 2] = scale[0] * (xz + wy);
	mat[ 3] = trans[0];
	mat[ 4] = scale[1] * (xy + wz);
	mat[ 5] = scale[1] * (1.0f - (xx + zz));
	mat[ 6] = scale[1] * (yz - wx);
	mat[ 7] = trans[1];
	mat[ 8] = scale[2] * (xz - wy);
	mat[ 9] = scale[2] * (yz + wx);
	mat[10] = scale[2] * (1.0f - (xx + yy));
	mat[11] = trans[2];
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

    // big-arr
    case 0:
    {
          int _len_rot0 = 65025;
          float * rot = (float *) malloc(_len_rot0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_rot0; _i0++) {
            rot[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale0 = 65025;
          float * scale = (float *) malloc(_len_scale0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_trans0 = 65025;
          float * trans = (float *) malloc(_len_trans0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
            trans[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_mat0 = 65025;
          float * mat = (float *) malloc(_len_mat0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mat0; _i0++) {
            mat[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          JointToMatrix(rot,scale,trans,mat);
          free(rot);
          free(scale);
          free(trans);
          free(mat);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_rot0 = 100;
          float * rot = (float *) malloc(_len_rot0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_rot0; _i0++) {
            rot[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale0 = 100;
          float * scale = (float *) malloc(_len_scale0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_trans0 = 100;
          float * trans = (float *) malloc(_len_trans0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
            trans[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_mat0 = 100;
          float * mat = (float *) malloc(_len_mat0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mat0; _i0++) {
            mat[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          JointToMatrix(rot,scale,trans,mat);
          free(rot);
          free(scale);
          free(trans);
          free(mat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
