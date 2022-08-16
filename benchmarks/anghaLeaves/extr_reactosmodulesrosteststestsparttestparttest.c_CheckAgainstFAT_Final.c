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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int Signature1; int BytesPerSector; int FATCount; int Media; int SectorsPerCluster; } ;
typedef  TYPE_1__* PFATBootSector ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

BOOL CheckAgainstFAT(PFATBootSector Sector)
{
    if (Sector->Signature1 != 0xaa55)
    {
        return FALSE;
    }

    if (Sector->BytesPerSector != 512 &&
        Sector->BytesPerSector != 1024 &&
        Sector->BytesPerSector != 2048 &&
        Sector->BytesPerSector != 4096)
    {
        return FALSE;
    }

    if (Sector->FATCount != 1 &&
        Sector->FATCount != 2)
    {
        return FALSE;
    }

    if (Sector->Media != 0xf0 &&
        Sector->Media != 0xf8 &&
        Sector->Media != 0xf9 &&
        Sector->Media != 0xfa &&
        Sector->Media != 0xfb &&
        Sector->Media != 0xfc &&
        Sector->Media != 0xfd &&
        Sector->Media != 0xfe &&
        Sector->Media != 0xff)
    {
        return FALSE;
    }

    if (Sector->SectorsPerCluster != 1 &&
        Sector->SectorsPerCluster != 2 &&
        Sector->SectorsPerCluster != 4 &&
        Sector->SectorsPerCluster != 8 &&
        Sector->SectorsPerCluster != 16 &&
        Sector->SectorsPerCluster != 32 &&
        Sector->SectorsPerCluster != 64 &&
        Sector->SectorsPerCluster != 128)
    {
        return FALSE;
    }

    if (Sector->BytesPerSector * Sector->SectorsPerCluster > 32 * 1024)
    {
        return FALSE;
    }

    return TRUE;
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
          int _len_Sector0 = 1;
          struct TYPE_3__ * Sector = (struct TYPE_3__ *) malloc(_len_Sector0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Sector0; _i0++) {
            Sector[_i0].Signature1 = ((-2 * (next_i()%2)) + 1) * next_i();
        Sector[_i0].BytesPerSector = ((-2 * (next_i()%2)) + 1) * next_i();
        Sector[_i0].FATCount = ((-2 * (next_i()%2)) + 1) * next_i();
        Sector[_i0].Media = ((-2 * (next_i()%2)) + 1) * next_i();
        Sector[_i0].SectorsPerCluster = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CheckAgainstFAT(Sector);
          printf("%d\n", benchRet); 
          free(Sector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
