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
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int shared_out_nid; int shared_mic_nid; } ;
typedef  int hda_nid_t ;

/* Variables and functions */
#define  VNID_MIC 129 
#define  VNID_SPK 128 

__attribute__((used)) static bool ca0132_is_vnode_effective(struct hda_codec *codec,
				     hda_nid_t vnid,
				     hda_nid_t *shared_nid)
{
	struct ca0132_spec *spec = codec->spec;
	hda_nid_t nid;

	switch (vnid) {
	case VNID_SPK:
		nid = spec->shared_out_nid;
		break;
	case VNID_MIC:
		nid = spec->shared_mic_nid;
		break;
	default:
		return false;
	}

	if (shared_nid)
		*shared_nid = nid;

	return true;
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
          int vnid = 100;
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct ca0132_spec *) malloc(_len_codec__i0__spec0*sizeof(struct ca0132_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->shared_out_nid = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].spec->shared_mic_nid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_shared_nid0 = 1;
          int * shared_nid = (int *) malloc(_len_shared_nid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_shared_nid0; _i0++) {
            shared_nid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ca0132_is_vnode_effective(codec,vnid,shared_nid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
          free(shared_nid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
