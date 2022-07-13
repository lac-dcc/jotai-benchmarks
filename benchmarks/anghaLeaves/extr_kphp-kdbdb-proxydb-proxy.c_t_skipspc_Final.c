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

/* Variables and functions */

char *t_skipspc (char *ptr, char *end) {
  while (1) {
    while (ptr < end && (*ptr == ' ' || *ptr == 9 || *ptr == 13 || *ptr == 10)) {
      ptr++;
    }
    if (ptr + 2 <= end && ptr[0] == '*' && ptr[1] == '/') {
      ptr += 2;
      continue;
    }
    if (ptr + 2 > end || ptr[0] != '/' || ptr[1] != '*') {
      break;
    }
    ptr += 2;
    if (ptr < end && (ptr[0] == '!' || ptr[0] == '?')) {
      ptr++;
      continue;
    }
    while (ptr + 2 <= end && (ptr[0] != '*' || ptr[1] != '/')) {
      ptr++;
    }
    if (ptr + 2 > end) {
      return end;
    }
    ptr += 2;
  }
  return ptr;
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
          int _len_ptr0 = 1;
          char * ptr = (char *) malloc(_len_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          char * end = (char *) malloc(_len_end0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = t_skipspc(ptr,end);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
          free(end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ptr0 = 65025;
          char * ptr = (char *) malloc(_len_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          char * end = (char *) malloc(_len_end0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = t_skipspc(ptr,end);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
          free(end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ptr0 = 100;
          char * ptr = (char *) malloc(_len_ptr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          char * end = (char *) malloc(_len_end0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = t_skipspc(ptr,end);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(ptr);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
