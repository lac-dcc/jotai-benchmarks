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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  enum dc_cursor_color_format { ____Placeholder_dc_cursor_color_format } dc_cursor_color_format ;
typedef  enum cursor_lines_per_chunk { ____Placeholder_cursor_lines_per_chunk } cursor_lines_per_chunk ;

/* Variables and functions */
 int CURSOR_LINE_PER_CHUNK_16 ; 
 int CURSOR_LINE_PER_CHUNK_2 ; 
 int CURSOR_LINE_PER_CHUNK_4 ; 
 int CURSOR_LINE_PER_CHUNK_8 ; 
 int CURSOR_MODE_MONO ; 

__attribute__((used)) static enum cursor_lines_per_chunk hubp1_get_lines_per_chunk(
		unsigned int cur_width,
		enum dc_cursor_color_format format)
{
	enum cursor_lines_per_chunk line_per_chunk;

	if (format == CURSOR_MODE_MONO)
		/* impl B. expansion in CUR Buffer reader */
		line_per_chunk = CURSOR_LINE_PER_CHUNK_16;
	else if (cur_width <= 32)
		line_per_chunk = CURSOR_LINE_PER_CHUNK_16;
	else if (cur_width <= 64)
		line_per_chunk = CURSOR_LINE_PER_CHUNK_8;
	else if (cur_width <= 128)
		line_per_chunk = CURSOR_LINE_PER_CHUNK_4;
	else
		line_per_chunk = CURSOR_LINE_PER_CHUNK_2;

	return line_per_chunk;
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
          unsigned int cur_width = 100;
          enum dc_cursor_color_format format = 0;
          enum cursor_lines_per_chunk benchRet = hubp1_get_lines_per_chunk(cur_width,format);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int cur_width = 255;
          enum dc_cursor_color_format format = 0;
          enum cursor_lines_per_chunk benchRet = hubp1_get_lines_per_chunk(cur_width,format);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int cur_width = 10;
          enum dc_cursor_color_format format = 0;
          enum cursor_lines_per_chunk benchRet = hubp1_get_lines_per_chunk(cur_width,format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
