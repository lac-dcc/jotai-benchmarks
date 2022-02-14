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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  GLboolean ;

/* Variables and functions */
 int /*<<< orphan*/  GL_FALSE ; 

__attribute__((used)) static GLboolean fghChangeDisplayMode( GLboolean haveToTest )
{
    GLboolean success = GL_FALSE;
#if TARGET_HOST_POSIX_X11

    /*
     * This highly depends on the XFree86 extensions,
     * not approved as X Consortium standards
     */
#   ifdef X_XF86VidModeGetAllModeLines

    /*
     * This is also used by applcations which check modes by calling
     * glutGameModeGet(GLUT_GAME_MODE_POSSIBLE), so allow the check:
     */
    if( haveToTest || fgDisplay.DisplayModeValid )
    {
        XF86VidModeModeInfo** displayModes;
        int i, displayModesCount;

        if( !XF86VidModeGetAllModeLines(
                 fgDisplay.Display,
                 fgDisplay.Screen,
                 &displayModesCount,
                 &displayModes ) )
        {
            fgWarning( "XF86VidModeGetAllModeLines failed" );
            return success;
        }


        /*
         * Check every of the modes looking for one that matches our demands,
         * ignoring the refresh rate if no exact match could be found.
         */
        i = fghCheckDisplayModes( GL_TRUE, displayModesCount, displayModes );
        if( i < 0 ) {
            i = fghCheckDisplayModes( GL_FALSE, displayModesCount, displayModes );
        }
        success = ( i < 0 ) ? GL_FALSE : GL_TRUE;

        if( !haveToTest && success ) {
            if( !XF86VidModeSwitchToMode(
                     fgDisplay.Display,
                     fgDisplay.Screen,
                     displayModes[ i ] ) )
                fgWarning( "XF86VidModeSwitchToMode failed" );
        }

        XFree( displayModes );
    }

#   else

    /*
     * XXX warning fghChangeDisplayMode: missing XFree86 video mode extensions,
     * XXX game mode will not change screen resolution when activated
     */
    success = GL_TRUE;

#   endif

#elif TARGET_HOST_MS_WINDOWS

    DEVMODE  devMode;
    char *fggmstr = NULL;

    success = GL_FALSE;

    EnumDisplaySettings( NULL, -1, &devMode ); 
    devMode.dmFields |= DM_PELSWIDTH | DM_PELSHEIGHT | DM_BITSPERPEL | DM_DISPLAYFREQUENCY;

    devMode.dmPelsWidth  = fgState.GameModeSize.X;
    devMode.dmPelsHeight = fgState.GameModeSize.Y;
    devMode.dmBitsPerPel = fgState.GameModeDepth;
    devMode.dmDisplayFrequency = fgState.GameModeRefresh;
    devMode.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT | DM_BITSPERPEL | DM_DISPLAYFREQUENCY;

    switch ( ChangeDisplaySettingsEx(NULL, &devMode, NULL, haveToTest ? CDS_TEST : CDS_FULLSCREEN , NULL) )
    {
    case DISP_CHANGE_SUCCESSFUL:
        success = GL_TRUE;

        /* update vars in case if windows switched to proper mode */
        EnumDisplaySettings( NULL, FREEGLUT_ENUM_CURRENT_SETTINGS, &devMode );
        fgState.GameModeSize.X  = devMode.dmPelsWidth;        
        fgState.GameModeSize.Y  = devMode.dmPelsHeight;
        fgState.GameModeDepth   = devMode.dmBitsPerPel;
        fgState.GameModeRefresh = devMode.dmDisplayFrequency;
		break;
    case DISP_CHANGE_RESTART:
        fggmstr = "The computer must be restarted for the graphics mode to work.";
        break;
    case DISP_CHANGE_BADFLAGS:
        fggmstr = "An invalid set of flags was passed in.";
        break;
    case DISP_CHANGE_BADPARAM:
        fggmstr = "An invalid parameter was passed in. This can include an invalid flag or combination of flags.";
        break;
    case DISP_CHANGE_FAILED:
        fggmstr = "The display driver failed the specified graphics mode.";
        break;
    case DISP_CHANGE_BADMODE:
        fggmstr = "The graphics mode is not supported.";
        break;
    default:
        fggmstr = "Unknown error in graphics mode???"; /* dunno if it is possible,MSDN does not mention any other error */
        break;
    }

    if ( !success )
        fgWarning(fggmstr); /* I'd rather get info whats going on in my program than wonder about */
                            /* magic happenings behind my back, its lib for devels at last ;) */
#endif

    return success;
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

    // big-arr
    case 0:
    {
          int haveToTest = 255;
          int benchRet = fghChangeDisplayMode(haveToTest);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
