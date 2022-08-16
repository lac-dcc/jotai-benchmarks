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
struct bsd_db {int /*<<< orphan*/  checkpoint; scalar_t__ ratio; scalar_t__ incomp_count; scalar_t__ in_count; scalar_t__ bytes_out; int /*<<< orphan*/  n_bits; scalar_t__ max_ent; int /*<<< orphan*/  clear_count; } ;

/* Variables and functions */
 int /*<<< orphan*/  BSD_INIT_BITS ; 
 int /*<<< orphan*/  CHECK_GAP ; 
 scalar_t__ FIRST ; 

__attribute__((used)) static void bsd_clear(struct bsd_db *db)
{
	db->clear_count++;
	db->max_ent      = FIRST - 1;
	db->n_bits       = BSD_INIT_BITS;
	db->bytes_out    = 0;
	db->in_count     = 0;
	db->incomp_count = 0;
	db->ratio	     = 0;
	db->checkpoint   = CHECK_GAP;
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
          int _len_db0 = 1;
          struct bsd_db * db = (struct bsd_db *) malloc(_len_db0*sizeof(struct bsd_db));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0].checkpoint = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].incomp_count = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].in_count = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].bytes_out = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].n_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].max_ent = ((-2 * (next_i()%2)) + 1) * next_i();
        db[_i0].clear_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bsd_clear(db);
          free(db);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
