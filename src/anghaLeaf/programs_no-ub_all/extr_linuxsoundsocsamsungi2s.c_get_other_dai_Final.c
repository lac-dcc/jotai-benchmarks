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
       0            big-arr\n\
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
struct i2s_dai {struct i2s_dai* sec_dai; scalar_t__ pri_dai; } ;

/* Variables and functions */

__attribute__((used)) static inline struct i2s_dai *get_other_dai(struct i2s_dai *i2s)
{
	return i2s->pri_dai ? : i2s->sec_dai;
}


// ------------------------------------------------------------------------- //

struct i2s_dai *_allocate_i2s(int length) {
  struct i2s_dai *head = (struct i2s_dai *)malloc(sizeof(struct i2s_dai));

  head->sec_dai = NULL;
  head->pri_dai = rand();

  struct i2s_dai *walker = head;
  for(int i = 1; i < length; i++) {
    walker->sec_dai = (struct i2s_dai *)malloc(sizeof(struct i2s_dai));
    walker = walker->sec_dai;
    walker->sec_dai = NULL;
    walker->pri_dai = rand();
  }

  return head;
}

void _delete_i2s(struct i2s_dai * head) {
  if(head->sec_dai != NULL) _delete_i2s(head->sec_dai);
  free(head);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          struct i2s_dai * i2s = _allocate_i2s(1);
          struct i2s_dai * benchRet = get_other_dai(i2s);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_i2s(i2s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
