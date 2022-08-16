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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int m_nXPos; int m_nYPos; int m_nZPos; } ;

/* Variables and functions */
 int m_nTotStars ; 
 TYPE_1__* stars ; 

void MoveStarField (int nXofs, int nYofs, int nZofs)
{
    int i;
    for (i = 0; i < m_nTotStars; i++)
    {
        stars[i].m_nXPos += nXofs;
        stars[i].m_nYPos += nYofs;
        stars[i].m_nZPos += nZofs;

        if (stars[i].m_nZPos > m_nTotStars)
            stars[i].m_nZPos -= m_nTotStars;
        if (stars[i].m_nZPos < 1)
            stars[i].m_nZPos += m_nTotStars;
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
          int nXofs = 100;
          int nYofs = 100;
          int nZofs = 100;
          MoveStarField(nXofs,nYofs,nZofs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nXofs = 255;
          int nYofs = 255;
          int nZofs = 255;
          MoveStarField(nXofs,nYofs,nZofs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nXofs = 10;
          int nYofs = 10;
          int nZofs = 10;
          MoveStarField(nXofs,nYofs,nZofs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
