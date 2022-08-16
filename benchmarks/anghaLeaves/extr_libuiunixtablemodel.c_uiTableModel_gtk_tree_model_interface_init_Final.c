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
struct TYPE_3__ {int /*<<< orphan*/  iter_parent; int /*<<< orphan*/  iter_nth_child; int /*<<< orphan*/  iter_n_children; int /*<<< orphan*/  iter_has_child; int /*<<< orphan*/  iter_children; int /*<<< orphan*/  iter_previous; int /*<<< orphan*/  iter_next; int /*<<< orphan*/  get_value; int /*<<< orphan*/  get_path; int /*<<< orphan*/  get_iter; int /*<<< orphan*/  get_column_type; int /*<<< orphan*/  get_n_columns; int /*<<< orphan*/  get_flags; } ;
typedef  TYPE_1__ GtkTreeModelIface ;

/* Variables and functions */
 int /*<<< orphan*/  uiTableModel_get_column_type ; 
 int /*<<< orphan*/  uiTableModel_get_flags ; 
 int /*<<< orphan*/  uiTableModel_get_iter ; 
 int /*<<< orphan*/  uiTableModel_get_n_columns ; 
 int /*<<< orphan*/  uiTableModel_get_path ; 
 int /*<<< orphan*/  uiTableModel_get_value ; 
 int /*<<< orphan*/  uiTableModel_iter_children ; 
 int /*<<< orphan*/  uiTableModel_iter_has_child ; 
 int /*<<< orphan*/  uiTableModel_iter_n_children ; 
 int /*<<< orphan*/  uiTableModel_iter_next ; 
 int /*<<< orphan*/  uiTableModel_iter_nth_child ; 
 int /*<<< orphan*/  uiTableModel_iter_parent ; 
 int /*<<< orphan*/  uiTableModel_iter_previous ; 

__attribute__((used)) static void uiTableModel_gtk_tree_model_interface_init(GtkTreeModelIface *iface)
{
	iface->get_flags = uiTableModel_get_flags;
	iface->get_n_columns = uiTableModel_get_n_columns;
	iface->get_column_type = uiTableModel_get_column_type;
	iface->get_iter = uiTableModel_get_iter;
	iface->get_path = uiTableModel_get_path;
	iface->get_value = uiTableModel_get_value;
	iface->iter_next = uiTableModel_iter_next;
	iface->iter_previous = uiTableModel_iter_previous;
	iface->iter_children = uiTableModel_iter_children;
	iface->iter_has_child = uiTableModel_iter_has_child;
	iface->iter_n_children = uiTableModel_iter_n_children;
	iface->iter_nth_child = uiTableModel_iter_nth_child;
	iface->iter_parent = uiTableModel_iter_parent;
	// don't specify ref_node() or unref_node()
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
          int _len_iface0 = 1;
          struct TYPE_3__ * iface = (struct TYPE_3__ *) malloc(_len_iface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iface0; _i0++) {
            iface[_i0].iter_parent = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].iter_nth_child = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].iter_n_children = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].iter_has_child = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].iter_children = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].iter_previous = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].iter_next = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].get_value = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].get_path = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].get_iter = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].get_column_type = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].get_n_columns = ((-2 * (next_i()%2)) + 1) * next_i();
        iface[_i0].get_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uiTableModel_gtk_tree_model_interface_init(iface);
          free(iface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
