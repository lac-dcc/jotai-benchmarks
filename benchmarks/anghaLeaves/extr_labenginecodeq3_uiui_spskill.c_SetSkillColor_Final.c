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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  void* vec4_t ;
struct TYPE_11__ {void* color; } ;
struct TYPE_10__ {void* color; } ;
struct TYPE_9__ {void* color; } ;
struct TYPE_8__ {void* color; } ;
struct TYPE_7__ {void* color; } ;
struct TYPE_12__ {TYPE_5__ item_nightmare; TYPE_4__ item_hard; TYPE_3__ item_medium; TYPE_2__ item_easy; TYPE_1__ item_baby; } ;

/* Variables and functions */
 TYPE_6__ skillMenuInfo ; 

__attribute__((used)) static void SetSkillColor( int skill, vec4_t color ) {
	switch( skill ) {
	case 1:
		skillMenuInfo.item_baby.color = color;
		break;
	case 2:
		skillMenuInfo.item_easy.color = color;
		break;
	case 3:
		skillMenuInfo.item_medium.color = color;
		break;
	case 4:
		skillMenuInfo.item_hard.color = color;
		break;
	case 5:
		skillMenuInfo.item_nightmare.color = color;
		break;
	default:
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
          int skill = 100;
        
          void * color;
        
          SetSkillColor(skill,color);
        
        break;
    }
    // big-arr
    case 1:
    {
          int skill = 255;
        
          void * color;
        
          SetSkillColor(skill,color);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int skill = 10;
        
          void * color;
        
          SetSkillColor(skill,color);
        
        break;
    }
    // empty
    case 3:
    {
          int skill = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * color;
        
          SetSkillColor(skill,color);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
