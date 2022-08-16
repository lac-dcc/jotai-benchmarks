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
typedef  int /*<<< orphan*/  u32 ;
struct nfs_server {int /*<<< orphan*/ * attr_bitmask; } ;
struct nfs4_label {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 *
nfs4_bitmask(struct nfs_server *server, struct nfs4_label *label)
{ return server->attr_bitmask; }


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
          int _len_server0 = 1;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              int _len_server__i0__attr_bitmask0 = 1;
          server[_i0].attr_bitmask = (int *) malloc(_len_server__i0__attr_bitmask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_server__i0__attr_bitmask0; _j0++) {
            server[_i0].attr_bitmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_label0 = 1;
          struct nfs4_label * label = (struct nfs4_label *) malloc(_len_label0*sizeof(struct nfs4_label));
          for(int _i0 = 0; _i0 < _len_label0; _i0++) {
            label[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = nfs4_bitmask(server,label);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_server0; _aux++) {
          free(server[_aux].attr_bitmask);
          }
          free(server);
          free(label);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
