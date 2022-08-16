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
struct git_graph {int num_columns; int num_parents; int width; } ;

/* Variables and functions */

__attribute__((used)) static void graph_update_width(struct git_graph *graph,
			       int is_commit_in_existing_columns)
{
	/*
	 * Compute the width needed to display the graph for this commit.
	 * This is the maximum width needed for any row.  All other rows
	 * will be padded to this width.
	 *
	 * Compute the number of columns in the widest row:
	 * Count each existing column (graph->num_columns), and each new
	 * column added by this commit.
	 */
	int max_cols = graph->num_columns + graph->num_parents;

	/*
	 * Even if the current commit has no parents to be printed, it
	 * still takes up a column for itself.
	 */
	if (graph->num_parents < 1)
		max_cols++;

	/*
	 * We added a column for the current commit as part of
	 * graph->num_parents.  If the current commit was already in
	 * graph->columns, then we have double counted it.
	 */
	if (is_commit_in_existing_columns)
		max_cols--;

	/*
	 * Each column takes up 2 spaces
	 */
	graph->width = max_cols * 2;
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
          int is_commit_in_existing_columns = 100;
          int _len_graph0 = 1;
          struct git_graph * graph = (struct git_graph *) malloc(_len_graph0*sizeof(struct git_graph));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].num_columns = ((-2 * (next_i()%2)) + 1) * next_i();
        graph[_i0].num_parents = ((-2 * (next_i()%2)) + 1) * next_i();
        graph[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          graph_update_width(graph,is_commit_in_existing_columns);
          free(graph);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
