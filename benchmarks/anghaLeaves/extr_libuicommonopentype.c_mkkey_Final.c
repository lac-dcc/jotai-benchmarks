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
struct feature {char a; char b; char c; char d; } ;

/* Variables and functions */

__attribute__((used)) static struct feature mkkey(char a, char b, char c, char d)
{
	struct feature f;

	f.a = a;
	f.b = b;
	f.c = c;
	f.d = d;
	return f;
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
          char a = 100;
          char b = 100;
          char c = 100;
          char d = 100;
          struct feature benchRet = mkkey(a,b,c,d);
          printf("%c\n", benchRet.a %26 + 'a');
          printf("%c\n", benchRet.b %26 + 'a');
          printf("%c\n", benchRet.c %26 + 'a');
          printf("%c\n", benchRet.d %26 + 'a');
        
        break;
    }
    // big-arr
    case 1:
    {
          char a = 255;
          char b = 255;
          char c = 255;
          char d = 255;
          struct feature benchRet = mkkey(a,b,c,d);
          printf("%c\n", benchRet.a %26 + 'a');
          printf("%c\n", benchRet.b %26 + 'a');
          printf("%c\n", benchRet.c %26 + 'a');
          printf("%c\n", benchRet.d %26 + 'a');
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char a = 10;
          char b = 10;
          char c = 10;
          char d = 10;
          struct feature benchRet = mkkey(a,b,c,d);
          printf("%c\n", benchRet.a %26 + 'a');
          printf("%c\n", benchRet.b %26 + 'a');
          printf("%c\n", benchRet.c %26 + 'a');
          printf("%c\n", benchRet.d %26 + 'a');
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
