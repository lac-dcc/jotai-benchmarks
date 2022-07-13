// ========================================================================= //

// includes
#include <math.h>
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int shape; float value; float time; float* param; TYPE_1__* next; int /*<<< orphan*/  bias; int /*<<< orphan*/  continuity; int /*<<< orphan*/  tension; } ;
typedef  TYPE_2__ lwKey ;
struct TYPE_5__ {float time; float value; } ;

/* Variables and functions */
#define  ID_BEZ2 133 
#define  ID_BEZI 132 
#define  ID_HERM 131 
#define  ID_LINE 130 
#define  ID_STEP 129 
#define  ID_TCB 128 

__attribute__((used)) static float incoming( lwKey *key0, lwKey *key1 ){
	float a, b, d, t, in;

	switch ( key1->shape )
	{
	case ID_LINE:
		d = key1->value - key0->value;
		if ( key1->next ) {
			t = ( key1->time - key0->time ) / ( key1->next->time - key0->time );
			in = t * ( key1->next->value - key1->value + d );
		}
		else{
			in = d;
		}
		break;

	case ID_TCB:
		a = ( 1.0f - key1->tension )
			* ( 1.0f - key1->continuity )
			* ( 1.0f + key1->bias );
		b = ( 1.0f - key1->tension )
			* ( 1.0f + key1->continuity )
			* ( 1.0f - key1->bias );
		d = key1->value - key0->value;

		if ( key1->next ) {
			t = ( key1->time - key0->time ) / ( key1->next->time - key0->time );
			in = t * ( b * ( key1->next->value - key1->value ) + a * d );
		}
		else{
			in = a * d;
		}
		break;

	case ID_BEZI:
	case ID_HERM:
		in = key1->param[ 0 ];
		if ( key1->next ) {
			in *= ( key1->time - key0->time ) / ( key1->next->time - key0->time );
		}
		break;
		return in;

	case ID_BEZ2:
		in = key1->param[ 1 ] * ( key1->time - key0->time );
		if ( fabs( key1->param[ 0 ] ) > 1e-5f ) {
			in /= key1->param[ 0 ];
		}
		else{
			in *= 1e5f;
		}
		break;

	case ID_STEP:
	default:
		in = 0.0f;
		break;
	}

	return in;
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
          int _len_key00 = 1;
          struct TYPE_6__ * key0 = (struct TYPE_6__ *) malloc(_len_key00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_key00; _i0++) {
            key0[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key0[_i0].time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_key0__i0__param0 = 1;
          key0[_i0].param = (float *) malloc(_len_key0__i0__param0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_key0__i0__param0; _j0++) {
            key0[_i0].param[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_key0__i0__next0 = 1;
          key0[_i0].next = (struct TYPE_5__ *) malloc(_len_key0__i0__next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_key0__i0__next0; _j0++) {
            key0[_i0].next->time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key0[_i0].next->value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        key0[_i0].bias = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].continuity = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].tension = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key10 = 1;
          struct TYPE_6__ * key1 = (struct TYPE_6__ *) malloc(_len_key10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_key10; _i0++) {
            key1[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key1[_i0].time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_key1__i0__param0 = 1;
          key1[_i0].param = (float *) malloc(_len_key1__i0__param0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_key1__i0__param0; _j0++) {
            key1[_i0].param[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_key1__i0__next0 = 1;
          key1[_i0].next = (struct TYPE_5__ *) malloc(_len_key1__i0__next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_key1__i0__next0; _j0++) {
            key1[_i0].next->time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key1[_i0].next->value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        key1[_i0].bias = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].continuity = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].tension = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = incoming(key0,key1);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_key00; _aux++) {
          free(key0[_aux].param);
          }
          for(int _aux = 0; _aux < _len_key00; _aux++) {
          free(key0[_aux].next);
          }
          free(key0);
          for(int _aux = 0; _aux < _len_key10; _aux++) {
          free(key1[_aux].param);
          }
          for(int _aux = 0; _aux < _len_key10; _aux++) {
          free(key1[_aux].next);
          }
          free(key1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key00 = 65025;
          struct TYPE_6__ * key0 = (struct TYPE_6__ *) malloc(_len_key00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_key00; _i0++) {
            key0[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key0[_i0].time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_key0__i0__param0 = 1;
          key0[_i0].param = (float *) malloc(_len_key0__i0__param0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_key0__i0__param0; _j0++) {
            key0[_i0].param[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_key0__i0__next0 = 1;
          key0[_i0].next = (struct TYPE_5__ *) malloc(_len_key0__i0__next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_key0__i0__next0; _j0++) {
            key0[_i0].next->time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key0[_i0].next->value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        key0[_i0].bias = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].continuity = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].tension = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key10 = 65025;
          struct TYPE_6__ * key1 = (struct TYPE_6__ *) malloc(_len_key10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_key10; _i0++) {
            key1[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key1[_i0].time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_key1__i0__param0 = 1;
          key1[_i0].param = (float *) malloc(_len_key1__i0__param0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_key1__i0__param0; _j0++) {
            key1[_i0].param[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_key1__i0__next0 = 1;
          key1[_i0].next = (struct TYPE_5__ *) malloc(_len_key1__i0__next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_key1__i0__next0; _j0++) {
            key1[_i0].next->time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key1[_i0].next->value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        key1[_i0].bias = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].continuity = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].tension = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = incoming(key0,key1);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_key00; _aux++) {
          free(key0[_aux].param);
          }
          for(int _aux = 0; _aux < _len_key00; _aux++) {
          free(key0[_aux].next);
          }
          free(key0);
          for(int _aux = 0; _aux < _len_key10; _aux++) {
          free(key1[_aux].param);
          }
          for(int _aux = 0; _aux < _len_key10; _aux++) {
          free(key1[_aux].next);
          }
          free(key1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key00 = 100;
          struct TYPE_6__ * key0 = (struct TYPE_6__ *) malloc(_len_key00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_key00; _i0++) {
            key0[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key0[_i0].time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_key0__i0__param0 = 1;
          key0[_i0].param = (float *) malloc(_len_key0__i0__param0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_key0__i0__param0; _j0++) {
            key0[_i0].param[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_key0__i0__next0 = 1;
          key0[_i0].next = (struct TYPE_5__ *) malloc(_len_key0__i0__next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_key0__i0__next0; _j0++) {
            key0[_i0].next->time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key0[_i0].next->value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        key0[_i0].bias = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].continuity = ((-2 * (next_i()%2)) + 1) * next_i();
        key0[_i0].tension = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key10 = 100;
          struct TYPE_6__ * key1 = (struct TYPE_6__ *) malloc(_len_key10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_key10; _i0++) {
            key1[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key1[_i0].time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_key1__i0__param0 = 1;
          key1[_i0].param = (float *) malloc(_len_key1__i0__param0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_key1__i0__param0; _j0++) {
            key1[_i0].param[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_key1__i0__next0 = 1;
          key1[_i0].next = (struct TYPE_5__ *) malloc(_len_key1__i0__next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_key1__i0__next0; _j0++) {
            key1[_i0].next->time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        key1[_i0].next->value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        key1[_i0].bias = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].continuity = ((-2 * (next_i()%2)) + 1) * next_i();
        key1[_i0].tension = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = incoming(key0,key1);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_key00; _aux++) {
          free(key0[_aux].param);
          }
          for(int _aux = 0; _aux < _len_key00; _aux++) {
          free(key0[_aux].next);
          }
          free(key0);
          for(int _aux = 0; _aux < _len_key10; _aux++) {
          free(key1[_aux].param);
          }
          for(int _aux = 0; _aux < _len_key10; _aux++) {
          free(key1[_aux].next);
          }
          free(key1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
