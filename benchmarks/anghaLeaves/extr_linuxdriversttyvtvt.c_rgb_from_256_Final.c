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
struct rgb {int r; int g; int b; } ;

/* Variables and functions */

__attribute__((used)) static void rgb_from_256(int i, struct rgb *c)
{
	if (i < 8) {            /* Standard colours. */
		c->r = i&1 ? 0xaa : 0x00;
		c->g = i&2 ? 0xaa : 0x00;
		c->b = i&4 ? 0xaa : 0x00;
	} else if (i < 16) {
		c->r = i&1 ? 0xff : 0x55;
		c->g = i&2 ? 0xff : 0x55;
		c->b = i&4 ? 0xff : 0x55;
	} else if (i < 232) {   /* 6x6x6 colour cube. */
		c->r = (i - 16) / 36 * 85 / 2;
		c->g = (i - 16) / 6 % 6 * 85 / 2;
		c->b = (i - 16) % 6 * 85 / 2;
	} else                  /* Grayscale ramp. */
		c->r = c->g = c->b = i * 10 - 2312;
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
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 54
          // ------------------------------- 
          // static_instructions_O1 : 54
          // dynamic_instructions_O1 : 54
          // ------------------------------- 
          // static_instructions_O2 : 62
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 62
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 62
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 64
          // dynamic_instructions_Os : 64
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 41
          // ------------------------------- 

          int i = 100;
        
          int _len_c0 = 1;
          struct rgb * c = (struct rgb *) malloc(_len_c0*sizeof(struct rgb));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].g = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rgb_from_256(i,c);
          free(c);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int i = 255;
        
          int _len_c0 = 65025;
          struct rgb * c = (struct rgb *) malloc(_len_c0*sizeof(struct rgb));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].g = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rgb_from_256(i,c);
          free(c);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int i = 10;
        
          int _len_c0 = 100;
          struct rgb * c = (struct rgb *) malloc(_len_c0*sizeof(struct rgb));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].g = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rgb_from_256(i,c);
          free(c);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          int i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_c0 = 1;
          struct rgb * c = (struct rgb *) malloc(_len_c0*sizeof(struct rgb));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].g = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rgb_from_256(i,c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
