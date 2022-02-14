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
struct BannerOutput {unsigned int protocol; struct BannerOutput* next; } ;

/* Variables and functions */

__attribute__((used)) static struct BannerOutput *
banout_find_proto(struct BannerOutput *banout, unsigned proto)
{
    while (banout && banout->protocol != proto)
        banout = banout->next;
    return banout;
}


// ------------------------------------------------------------------------- //

struct BannerOutput *_allocate_banout(int length) {
  struct BannerOutput *head = (struct BannerOutput *)malloc(sizeof(struct BannerOutput));

  head->protocol = rand();
  head->next = NULL;

  struct BannerOutput *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct BannerOutput *)malloc(sizeof(struct BannerOutput));
    walker = walker->next;
    walker->protocol = rand();
    walker->next = NULL;
  }

  return head;
}

void _delete_banout(struct BannerOutput * head) {
  if(head->next != NULL) _delete_banout(head->next);
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
          unsigned int proto = 255;
          struct BannerOutput * banout = _allocate_banout(1);
          struct BannerOutput * benchRet = banout_find_proto(banout,proto);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_banout(banout);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
