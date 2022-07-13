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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct seq_file {struct l2t_data* private; } ;
struct l2t_data {size_t l2t_size; void* l2tab; } ;
typedef  size_t loff_t ;

/* Variables and functions */

__attribute__((used)) static inline void *l2t_get_idx(struct seq_file *seq, loff_t pos)
{
	struct l2t_data *d = seq->private;

	return pos >= d->l2t_size ? NULL : &d->l2tab[pos];
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
          unsigned long pos = 100;
          int _len_seq0 = 1;
          struct seq_file * seq = (struct seq_file *) malloc(_len_seq0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
              int _len_seq__i0__private0 = 1;
          seq[_i0].private = (struct l2t_data *) malloc(_len_seq__i0__private0*sizeof(struct l2t_data));
          for(int _j0 = 0; _j0 < _len_seq__i0__private0; _j0++) {
            seq[_i0].private->l2t_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = l2t_get_idx(seq,pos);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_seq0; _aux++) {
          free(seq[_aux].private);
          }
          free(seq);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pos = 255;
          int _len_seq0 = 65025;
          struct seq_file * seq = (struct seq_file *) malloc(_len_seq0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
              int _len_seq__i0__private0 = 1;
          seq[_i0].private = (struct l2t_data *) malloc(_len_seq__i0__private0*sizeof(struct l2t_data));
          for(int _j0 = 0; _j0 < _len_seq__i0__private0; _j0++) {
            seq[_i0].private->l2t_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = l2t_get_idx(seq,pos);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_seq0; _aux++) {
          free(seq[_aux].private);
          }
          free(seq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pos = 10;
          int _len_seq0 = 100;
          struct seq_file * seq = (struct seq_file *) malloc(_len_seq0*sizeof(struct seq_file));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
              int _len_seq__i0__private0 = 1;
          seq[_i0].private = (struct l2t_data *) malloc(_len_seq__i0__private0*sizeof(struct l2t_data));
          for(int _j0 = 0; _j0 < _len_seq__i0__private0; _j0++) {
            seq[_i0].private->l2t_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * benchRet = l2t_get_idx(seq,pos);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_seq0; _aux++) {
          free(seq[_aux].private);
          }
          free(seq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
