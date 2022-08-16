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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  o_tree; } ;
typedef  TYPE_1__ list_t ;
struct TYPE_6__ {scalar_t__ A; scalar_t__ N; int /*<<< orphan*/ * root; } ;

/* Variables and functions */
 TYPE_1__* M_List ; 
 scalar_t__ M_dates ; 
 scalar_t__ M_flags ; 
 scalar_t__ M_flags_small ; 
 scalar_t__ M_global_id_list ; 
 scalar_t__ M_metafile ; 
 scalar_t__ M_metafile_size ; 
 scalar_t__ M_obj_id_list ; 
 scalar_t__ M_sorted_global_id_list ; 
 scalar_t__ M_sublist_temp_id_by_global ; 
 scalar_t__ M_sublist_temp_id_list ; 
 scalar_t__ M_text_end ; 
 scalar_t__ M_text_max_offset ; 
 scalar_t__ M_text_min_offset ; 
 scalar_t__ M_text_offset ; 
 scalar_t__ M_text_start ; 
 scalar_t__ M_tot_entries ; 
 scalar_t__ M_values ; 
 TYPE_3__ OTree ; 

__attribute__((used)) static void unpack_metafile_pointers_short (list_t *L) {
  M_List = L;
  OTree.root = &L->o_tree;
  M_metafile = 0;
  M_metafile_size = 0;
  M_tot_entries = 0;
  M_obj_id_list = 0;
  M_global_id_list = 0;
  M_sorted_global_id_list = 0;
  M_sublist_temp_id_list = 0;
  M_sublist_temp_id_by_global = 0;
  M_values = 0;
  M_dates = 0;
  M_text_offset = 0;
  M_flags_small = 0;
  M_flags = 0;
  M_text_min_offset = 0;
  M_text_max_offset = 0;
  M_text_start = 0;
  M_text_end = 0;
  OTree.N = 0;
  OTree.A = 0;
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
          int _len_L0 = 1;
          struct TYPE_5__ * L = (struct TYPE_5__ *) malloc(_len_L0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0].o_tree = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_metafile_pointers_short(L);
          free(L);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_L0 = 100;
          struct TYPE_5__ * L = (struct TYPE_5__ *) malloc(_len_L0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0].o_tree = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_metafile_pointers_short(L);
          free(L);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
