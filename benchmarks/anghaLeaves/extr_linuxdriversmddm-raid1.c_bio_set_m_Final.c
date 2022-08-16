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
struct mirror {int dummy; } ;
struct bio {struct bio* bi_next; } ;

/* Variables and functions */

__attribute__((used)) static void bio_set_m(struct bio *bio, struct mirror *m)
{
	bio->bi_next = (struct bio *) m;
}


// ------------------------------------------------------------------------- //

struct bio *_allocate_bio(int length, struct bio *aux_bio[]) {
  struct bio *walker = (struct bio *)malloc(sizeof(struct bio));

  aux_bio[0] = walker;
  walker->bi_next = NULL;

  struct bio *head = walker;
  for(int i = 1; i < length; i++) {
    walker->bi_next = (struct bio *)malloc(sizeof(struct bio));
    walker = walker->bi_next;
    aux_bio[i] = walker;
    walker->bi_next = NULL;
  }

  return head;
}

void _delete_bio(struct bio *aux_bio[], int aux_bio_size) {
  for(int i = 0; i < aux_bio_size; i++) 
    if(aux_bio[i])
      free(aux_bio[i]);
}




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
          struct bio * aux_bio[1];
          struct bio * bio = _allocate_bio(1, aux_bio);
          int _len_m0 = 1;
          struct mirror * m = (struct mirror *) malloc(_len_m0*sizeof(struct mirror));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bio_set_m(bio,m);
          _delete_bio(aux_bio, 1);
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
