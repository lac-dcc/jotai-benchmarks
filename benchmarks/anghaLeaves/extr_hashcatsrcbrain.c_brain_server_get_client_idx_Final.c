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
struct TYPE_3__ {int* client_slots; } ;
typedef  TYPE_1__ brain_server_dbs_t ;

/* Variables and functions */
 int BRAIN_SERVER_CLIENTS_MAX ; 

int brain_server_get_client_idx (brain_server_dbs_t *brain_server_dbs)
{
  for (int i = 1; i < BRAIN_SERVER_CLIENTS_MAX; i++)
  {
    if (brain_server_dbs->client_slots[i] == 0)
    {
      brain_server_dbs->client_slots[i] = 1;

      return i;
    }
  }

  return -1;
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
          int _len_brain_server_dbs0 = 1;
          struct TYPE_3__ * brain_server_dbs = (struct TYPE_3__ *) malloc(_len_brain_server_dbs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_brain_server_dbs0; _i0++) {
              int _len_brain_server_dbs__i0__client_slots0 = 1;
          brain_server_dbs[_i0].client_slots = (int *) malloc(_len_brain_server_dbs__i0__client_slots0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_brain_server_dbs__i0__client_slots0; _j0++) {
            brain_server_dbs[_i0].client_slots[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brain_server_get_client_idx(brain_server_dbs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_brain_server_dbs0; _aux++) {
          free(brain_server_dbs[_aux].client_slots);
          }
          free(brain_server_dbs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
