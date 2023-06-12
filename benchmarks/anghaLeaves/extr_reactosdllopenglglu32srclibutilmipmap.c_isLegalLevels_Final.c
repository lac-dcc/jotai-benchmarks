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
typedef  scalar_t__ GLint ;
typedef  int /*<<< orphan*/  GLboolean ;

/* Variables and functions */
 int /*<<< orphan*/  GL_FALSE ; 
 int /*<<< orphan*/  GL_TRUE ; 

__attribute__((used)) static GLboolean isLegalLevels(GLint userLevel,GLint baseLevel,GLint maxLevel,
			       GLint totalLevels)
{
   if (baseLevel < 0 || baseLevel < userLevel || maxLevel < baseLevel ||
       totalLevels < maxLevel)
      return GL_FALSE;
   else return GL_TRUE;
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
          long userLevel = 100;
        
          long baseLevel = 100;
        
          long maxLevel = 100;
        
          long totalLevels = 100;
        
          int benchRet = isLegalLevels(userLevel,baseLevel,maxLevel,totalLevels);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long userLevel = 255;
        
          long baseLevel = 255;
        
          long maxLevel = 255;
        
          long totalLevels = 255;
        
          int benchRet = isLegalLevels(userLevel,baseLevel,maxLevel,totalLevels);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long userLevel = 10;
        
          long baseLevel = 10;
        
          long maxLevel = 10;
        
          long totalLevels = 10;
        
          int benchRet = isLegalLevels(userLevel,baseLevel,maxLevel,totalLevels);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          long userLevel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long baseLevel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long maxLevel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long totalLevels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = isLegalLevels(userLevel,baseLevel,maxLevel,totalLevels);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
