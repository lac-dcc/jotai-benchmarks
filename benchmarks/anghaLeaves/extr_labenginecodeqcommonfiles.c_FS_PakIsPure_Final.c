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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  qboolean ;
struct TYPE_3__ {scalar_t__ checksum; } ;
typedef  TYPE_1__ pack_t ;

/* Variables and functions */
 int fs_numServerPaks ; 
 scalar_t__* fs_serverPaks ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean FS_PakIsPure( pack_t *pack ) {
	int i;

	if ( fs_numServerPaks ) {
		for ( i = 0 ; i < fs_numServerPaks ; i++ ) {
			// FIXME: also use hashed file names
			// NOTE TTimo: a pk3 with same checksum but different name would be validated too
			//   I don't see this as allowing for any exploit, it would only happen if the client does manips of its file names 'not a bug'
			if ( pack->checksum == fs_serverPaks[i] ) {
				return qtrue;		// on the aproved list
			}
		}
		return qfalse;	// not on the pure server pak list
	}
	return qtrue;
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
          int _len_pack0 = 1;
          struct TYPE_3__ * pack = (struct TYPE_3__ *) malloc(_len_pack0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
            pack[_i0].checksum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = FS_PakIsPure(pack);
          printf("%d\n", benchRet); 
          free(pack);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pack0 = 100;
          struct TYPE_3__ * pack = (struct TYPE_3__ *) malloc(_len_pack0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
            pack[_i0].checksum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = FS_PakIsPure(pack);
          printf("%d\n", benchRet); 
          free(pack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
