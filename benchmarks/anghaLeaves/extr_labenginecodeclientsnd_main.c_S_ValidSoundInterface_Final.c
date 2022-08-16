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
struct TYPE_3__ {int /*<<< orphan*/  SoundList; int /*<<< orphan*/  SoundInfo; int /*<<< orphan*/  ClearSoundBuffer; int /*<<< orphan*/  RegisterSound; int /*<<< orphan*/  BeginRegistration; int /*<<< orphan*/  DisableSounds; int /*<<< orphan*/  Update; int /*<<< orphan*/  UpdateEntityPosition; int /*<<< orphan*/  Respatialize; int /*<<< orphan*/  StopLoopingSound; int /*<<< orphan*/  AddRealLoopingSound; int /*<<< orphan*/  AddLoopingSound; int /*<<< orphan*/  ClearLoopingSounds; int /*<<< orphan*/  StopAllSounds; int /*<<< orphan*/  RawSamples; int /*<<< orphan*/  StopBackgroundTrack; int /*<<< orphan*/  StartBackgroundTrack; int /*<<< orphan*/  StartLocalSound; int /*<<< orphan*/  StartSound; int /*<<< orphan*/  Shutdown; } ;
typedef  TYPE_1__ soundInterface_t ;
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

__attribute__((used)) static qboolean S_ValidSoundInterface( soundInterface_t *si )
{
	if( !si->Shutdown ) return qfalse;
	if( !si->StartSound ) return qfalse;
	if( !si->StartLocalSound ) return qfalse;
	if( !si->StartBackgroundTrack ) return qfalse;
	if( !si->StopBackgroundTrack ) return qfalse;
	if( !si->RawSamples ) return qfalse;
	if( !si->StopAllSounds ) return qfalse;
	if( !si->ClearLoopingSounds ) return qfalse;
	if( !si->AddLoopingSound ) return qfalse;
	if( !si->AddRealLoopingSound ) return qfalse;
	if( !si->StopLoopingSound ) return qfalse;
	if( !si->Respatialize ) return qfalse;
	if( !si->UpdateEntityPosition ) return qfalse;
	if( !si->Update ) return qfalse;
	if( !si->DisableSounds ) return qfalse;
	if( !si->BeginRegistration ) return qfalse;
	if( !si->RegisterSound ) return qfalse;
	if( !si->ClearSoundBuffer ) return qfalse;
	if( !si->SoundInfo ) return qfalse;
	if( !si->SoundList ) return qfalse;

#ifdef USE_VOIP
	if( !si->StartCapture ) return qfalse;
	if( !si->AvailableCaptureSamples ) return qfalse;
	if( !si->Capture ) return qfalse;
	if( !si->StopCapture ) return qfalse;
	if( !si->MasterGain ) return qfalse;
#endif

	return qtrue;
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
          int _len_si0 = 1;
          struct TYPE_3__ * si = (struct TYPE_3__ *) malloc(_len_si0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].SoundList = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].SoundInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].ClearSoundBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].RegisterSound = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].BeginRegistration = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].DisableSounds = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].Update = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].UpdateEntityPosition = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].Respatialize = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].StopLoopingSound = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].AddRealLoopingSound = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].AddLoopingSound = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].ClearLoopingSounds = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].StopAllSounds = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].RawSamples = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].StopBackgroundTrack = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].StartBackgroundTrack = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].StartLocalSound = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].StartSound = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].Shutdown = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = S_ValidSoundInterface(si);
          printf("%d\n", benchRet); 
          free(si);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
