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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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

/* Variables and functions */

int append_bits(char *in, int in_len, char *app, int app_len) {
  for (int i = 0; i < app_len; i++) {
    in[in_len++] = app[i];
  }
  return in_len;
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
          int in_len = 255;
        
          int app_len = 255;
        
          int _len_in0 = 65025;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_app0 = 65025;
          char * app = (char *) malloc(_len_app0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = append_bits(in,in_len,app,app_len);
          printf("%d\n", benchRet); 
          free(in);
          free(app);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int in_len = 10;
        
          int app_len = 10;
        
          int _len_in0 = 100;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_app0 = 100;
          char * app = (char *) malloc(_len_app0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = append_bits(in,in_len,app,app_len);
          printf("%d\n", benchRet); 
          free(in);
          free(app);
        
        break;
    }
    // empty
    case 2:
    {
          int in_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int app_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_in0 = 1;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_app0 = 1;
          char * app = (char *) malloc(_len_app0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_app0; _i0++) {
            app[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = append_bits(in,in_len,app,app_len);
          printf("%d\n", benchRet); 
          free(in);
          free(app);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
