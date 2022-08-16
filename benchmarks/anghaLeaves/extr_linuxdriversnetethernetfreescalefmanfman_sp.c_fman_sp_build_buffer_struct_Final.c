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
typedef  scalar_t__ u8 ;
typedef  int u32 ;
typedef  int u16 ;
struct fman_sp_int_context_data_copy {int ext_buf_offset; int size; scalar_t__ int_context_offset; } ;
struct fman_sp_buffer_offsets {int prs_result_offset; int time_stamp_offset; int hash_result_offset; int data_offset; } ;
struct fman_sp_buf_margins {int start_margins; } ;
struct fman_prs_result {int dummy; } ;
struct fman_buffer_prefix_content {int priv_data_size; int data_align; scalar_t__ pass_prs_result; scalar_t__ pass_hash_result; scalar_t__ pass_time_stamp; } ;

/* Variables and functions */
 scalar_t__ ILLEGAL_BASE ; 
 int OFFSET_UNITS ; 

int fman_sp_build_buffer_struct(struct fman_sp_int_context_data_copy *
				int_context_data_copy,
				struct fman_buffer_prefix_content *
				buffer_prefix_content,
				struct fman_sp_buf_margins *buf_margins,
				struct fman_sp_buffer_offsets *buffer_offsets,
				u8 *internal_buf_offset)
{
	u32 tmp;

	/* Align start of internal context data to 16 byte */
	int_context_data_copy->ext_buf_offset = (u16)
		((buffer_prefix_content->priv_data_size & (OFFSET_UNITS - 1)) ?
		((buffer_prefix_content->priv_data_size + OFFSET_UNITS) &
			~(u16)(OFFSET_UNITS - 1)) :
		buffer_prefix_content->priv_data_size);

	/* Translate margin and int_context params to FM parameters */
	/* Initialize with illegal value. Later we'll set legal values. */
	buffer_offsets->prs_result_offset = (u32)ILLEGAL_BASE;
	buffer_offsets->time_stamp_offset = (u32)ILLEGAL_BASE;
	buffer_offsets->hash_result_offset = (u32)ILLEGAL_BASE;

	/* Internally the driver supports 4 options
	 * 1. prsResult/timestamp/hashResult selection (in fact 8 options,
	 * but for simplicity we'll
	 * relate to it as 1).
	 * 2. All IC context (from AD) not including debug.
	 */

	/* This case covers the options under 1 */
	/* Copy size must be in 16-byte granularity. */
	int_context_data_copy->size =
	    (u16)((buffer_prefix_content->pass_prs_result ? 32 : 0) +
		  ((buffer_prefix_content->pass_time_stamp ||
		  buffer_prefix_content->pass_hash_result) ? 16 : 0));

	/* Align start of internal context data to 16 byte */
	int_context_data_copy->int_context_offset =
	    (u8)(buffer_prefix_content->pass_prs_result ? 32 :
		 ((buffer_prefix_content->pass_time_stamp ||
		 buffer_prefix_content->pass_hash_result) ? 64 : 0));

	if (buffer_prefix_content->pass_prs_result)
		buffer_offsets->prs_result_offset =
		    int_context_data_copy->ext_buf_offset;
	if (buffer_prefix_content->pass_time_stamp)
		buffer_offsets->time_stamp_offset =
		    buffer_prefix_content->pass_prs_result ?
		    (int_context_data_copy->ext_buf_offset +
			sizeof(struct fman_prs_result)) :
		    int_context_data_copy->ext_buf_offset;
	if (buffer_prefix_content->pass_hash_result)
		/* If PR is not requested, whether TS is
		 * requested or not, IC will be copied from TS
			 */
		buffer_offsets->hash_result_offset =
		buffer_prefix_content->pass_prs_result ?
			(int_context_data_copy->ext_buf_offset +
				sizeof(struct fman_prs_result) + 8) :
			int_context_data_copy->ext_buf_offset + 8;

	if (int_context_data_copy->size)
		buf_margins->start_margins =
		    (u16)(int_context_data_copy->ext_buf_offset +
			  int_context_data_copy->size);
	else
		/* No Internal Context passing, STartMargin is
		 * immediately after private_info
		 */
		buf_margins->start_margins =
		    buffer_prefix_content->priv_data_size;

	/* align data start */
	tmp = (u32)(buf_margins->start_margins %
		    buffer_prefix_content->data_align);
	if (tmp)
		buf_margins->start_margins +=
		    (buffer_prefix_content->data_align - tmp);
	buffer_offsets->data_offset = buf_margins->start_margins;

	return 0;
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
          int _len_int_context_data_copy0 = 1;
          struct fman_sp_int_context_data_copy * int_context_data_copy = (struct fman_sp_int_context_data_copy *) malloc(_len_int_context_data_copy0*sizeof(struct fman_sp_int_context_data_copy));
          for(int _i0 = 0; _i0 < _len_int_context_data_copy0; _i0++) {
            int_context_data_copy[_i0].ext_buf_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        int_context_data_copy[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        int_context_data_copy[_i0].int_context_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer_prefix_content0 = 1;
          struct fman_buffer_prefix_content * buffer_prefix_content = (struct fman_buffer_prefix_content *) malloc(_len_buffer_prefix_content0*sizeof(struct fman_buffer_prefix_content));
          for(int _i0 = 0; _i0 < _len_buffer_prefix_content0; _i0++) {
            buffer_prefix_content[_i0].priv_data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_prefix_content[_i0].data_align = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_prefix_content[_i0].pass_prs_result = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_prefix_content[_i0].pass_hash_result = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_prefix_content[_i0].pass_time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf_margins0 = 1;
          struct fman_sp_buf_margins * buf_margins = (struct fman_sp_buf_margins *) malloc(_len_buf_margins0*sizeof(struct fman_sp_buf_margins));
          for(int _i0 = 0; _i0 < _len_buf_margins0; _i0++) {
            buf_margins[_i0].start_margins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer_offsets0 = 1;
          struct fman_sp_buffer_offsets * buffer_offsets = (struct fman_sp_buffer_offsets *) malloc(_len_buffer_offsets0*sizeof(struct fman_sp_buffer_offsets));
          for(int _i0 = 0; _i0 < _len_buffer_offsets0; _i0++) {
            buffer_offsets[_i0].prs_result_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_offsets[_i0].time_stamp_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_offsets[_i0].hash_result_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buffer_offsets[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_internal_buf_offset0 = 1;
          long * internal_buf_offset = (long *) malloc(_len_internal_buf_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_internal_buf_offset0; _i0++) {
            internal_buf_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fman_sp_build_buffer_struct(int_context_data_copy,buffer_prefix_content,buf_margins,buffer_offsets,internal_buf_offset);
          printf("%d\n", benchRet); 
          free(int_context_data_copy);
          free(buffer_prefix_content);
          free(buf_margins);
          free(buffer_offsets);
          free(internal_buf_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
