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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int dx; int dy; int dz; } ;
struct mousedev {TYPE_1__ packet; } ;

/* Variables and functions */
#define  REL_WHEEL 130 
#define  REL_X 129 
#define  REL_Y 128 

__attribute__((used)) static void mousedev_rel_event(struct mousedev *mousedev,
				unsigned int code, int value)
{
	switch (code) {
	case REL_X:
		mousedev->packet.dx += value;
		break;

	case REL_Y:
		mousedev->packet.dy -= value;
		break;

	case REL_WHEEL:
		mousedev->packet.dz -= value;
		break;
	}
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
          unsigned int code = 100;
          int value = 100;
          int _len_mousedev0 = 1;
          struct mousedev * mousedev = (struct mousedev *) malloc(_len_mousedev0*sizeof(struct mousedev));
          for(int _i0 = 0; _i0 < _len_mousedev0; _i0++) {
            mousedev[_i0].packet.dx = ((-2 * (next_i()%2)) + 1) * next_i();
        mousedev[_i0].packet.dy = ((-2 * (next_i()%2)) + 1) * next_i();
        mousedev[_i0].packet.dz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mousedev_rel_event(mousedev,code,value);
          free(mousedev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
