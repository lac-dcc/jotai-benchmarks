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

/* Type definitions */
struct BufferedFile {unsigned int Ptr; unsigned int Buffer; unsigned int BytesLeft; unsigned int Length; } ;
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

__attribute__((used)) static qboolean BufferedFileRewind(struct BufferedFile *BF, unsigned Offset)
{
	unsigned BytesRead; 

	/*
	 *  input verification
	 */

	if(!BF)
	{
		return(qfalse);
	}

	/*
	 *  special trick to rewind to the beginning of the buffer
	 */

	if(Offset == (unsigned)-1)
	{
		BF->Ptr       = BF->Buffer;
		BF->BytesLeft = BF->Length;

		return(qtrue);
	}

	/*
	 *  How many bytes do we have already read?
	 */

	BytesRead = BF->Ptr - BF->Buffer;

	/*
	 *  We can only rewind to the beginning of the BufferedFile.
	 */

	if(Offset > BytesRead)
	{
		return(qfalse);
	}

	/*
	 *  lower the pointer and counter.
	 */

	BF->Ptr       -= Offset;
	BF->BytesLeft += Offset;

	return(qtrue);
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
          unsigned int Offset = 100;
          int _len_BF0 = 1;
          struct BufferedFile * BF = (struct BufferedFile *) malloc(_len_BF0*sizeof(struct BufferedFile));
          for(int _i0 = 0; _i0 < _len_BF0; _i0++) {
            BF[_i0].Ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        BF[_i0].Buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        BF[_i0].BytesLeft = ((-2 * (next_i()%2)) + 1) * next_i();
        BF[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BufferedFileRewind(BF,Offset);
          printf("%d\n", benchRet); 
          free(BF);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
