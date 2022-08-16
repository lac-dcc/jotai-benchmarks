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
       1            big-arr-10x\n\
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
typedef  int ALint ;
typedef  int /*<<< orphan*/  ALenum ;
typedef  int /*<<< orphan*/  ALboolean ;

/* Variables and functions */
 int /*<<< orphan*/  AL_FALSE ; 
 int /*<<< orphan*/  AL_FORMAT_MONO16 ; 
 int /*<<< orphan*/  AL_FORMAT_MONO8 ; 
 int /*<<< orphan*/  AL_FORMAT_STEREO16 ; 
 int /*<<< orphan*/  AL_FORMAT_STEREO8 ; 
 int /*<<< orphan*/  AL_TRUE ; 

ALboolean _alutFormatConstruct(ALint numChannels, ALint bitsPerSample, ALenum * format)
{
  switch (numChannels)
  {
  case 1:
    switch (bitsPerSample)
    {
    case 8:
      *format = AL_FORMAT_MONO8;
      return AL_TRUE;
    case 16:
      *format = AL_FORMAT_MONO16;
      return AL_TRUE;
    }
    break;
  case 2:
    switch (bitsPerSample)
    {
    case 8:
      *format = AL_FORMAT_STEREO8;
      return AL_TRUE;
    case 16:
      *format = AL_FORMAT_STEREO16;
      return AL_TRUE;
    }
    break;
  }
  return AL_FALSE;
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
          int numChannels = 100;
          int bitsPerSample = 100;
          int _len_format0 = 1;
          int * format = (int *) malloc(_len_format0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _alutFormatConstruct(numChannels,bitsPerSample,format);
          printf("%d\n", benchRet); 
          free(format);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int numChannels = 10;
          int bitsPerSample = 10;
          int _len_format0 = 100;
          int * format = (int *) malloc(_len_format0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _alutFormatConstruct(numChannels,bitsPerSample,format);
          printf("%d\n", benchRet); 
          free(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
