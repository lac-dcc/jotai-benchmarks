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
       3            empty\n\
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
struct mg_connection {scalar_t__ user_data; } ;

/* Variables and functions */
#define  MG_EV_CLOSE 129 
#define  MG_EV_TIMER 128 

__attribute__((used)) static void ev_timer_handler(struct mg_connection *c, int ev, void *ev_data) {
  (void) ev_data;
  switch (ev) {
    case MG_EV_TIMER:
      (*(int *) c->user_data)++;
      break;
    case MG_EV_CLOSE:
      /* Make sure we're alive. Make the ASSERTs fail if we're here. */
      (*(int *) c->user_data) += 100;
      break;
  }
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
          int ev = 100;
        
          int _len_c0 = 1;
          struct mg_connection * c = (struct mg_connection *) malloc(_len_c0*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].user_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * ev_data;
        
          ev_timer_handler(c,ev,ev_data);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ev = 255;
        
          int _len_c0 = 65025;
          struct mg_connection * c = (struct mg_connection *) malloc(_len_c0*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].user_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * ev_data;
        
          ev_timer_handler(c,ev,ev_data);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ev = 10;
        
          int _len_c0 = 100;
          struct mg_connection * c = (struct mg_connection *) malloc(_len_c0*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].user_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * ev_data;
        
          ev_timer_handler(c,ev,ev_data);
          free(c);
        
        break;
    }
    // empty
    case 3:
    {
          int ev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_c0 = 1;
          struct mg_connection * c = (struct mg_connection *) malloc(_len_c0*sizeof(struct mg_connection));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].user_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * ev_data;
        
          ev_timer_handler(c,ev,ev_data);
          free(c);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
