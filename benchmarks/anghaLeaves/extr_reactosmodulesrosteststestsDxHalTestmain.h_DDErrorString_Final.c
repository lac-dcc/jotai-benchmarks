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

/* Type definitions */
typedef  int HRESULT ;

/* Variables and functions */
#define  DDERR_ALREADYINITIALIZED 228 
#define  DDERR_BLTFASTCANTCLIP 227 
#define  DDERR_CANNOTATTACHSURFACE 226 
#define  DDERR_CANNOTDETACHSURFACE 225 
#define  DDERR_CANTCREATEDC 224 
#define  DDERR_CANTDUPLICATE 223 
#define  DDERR_CANTLOCKSURFACE 222 
#define  DDERR_CANTPAGELOCK 221 
#define  DDERR_CANTPAGEUNLOCK 220 
#define  DDERR_CLIPPERISUSINGHWND 219 
#define  DDERR_COLORKEYNOTSET 218 
#define  DDERR_CURRENTLYNOTAVAIL 217 
#define  DDERR_DCALREADYCREATED 216 
#define  DDERR_DIRECTDRAWALREADYCREATED 215 
#define  DDERR_EXCEPTION 214 
#define  DDERR_EXCLUSIVEMODEALREADYSET 213 
#define  DDERR_GENERIC 212 
#define  DDERR_HEIGHTALIGN 211 
#define  DDERR_HWNDALREADYSET 210 
#define  DDERR_HWNDSUBCLASSED 209 
#define  DDERR_IMPLICITLYCREATED 208 
#define  DDERR_INCOMPATIBLEPRIMARY 207 
#define  DDERR_INVALIDCAPS 206 
#define  DDERR_INVALIDCLIPLIST 205 
#define  DDERR_INVALIDDIRECTDRAWGUID 204 
#define  DDERR_INVALIDMODE 203 
#define  DDERR_INVALIDOBJECT 202 
#define  DDERR_INVALIDPARAMS 201 
#define  DDERR_INVALIDPIXELFORMAT 200 
#define  DDERR_INVALIDPOSITION 199 
#define  DDERR_INVALIDRECT 198 
#define  DDERR_INVALIDSURFACETYPE 197 
#define  DDERR_LOCKEDSURFACES 196 
#define  DDERR_NO3D 195 
#define  DDERR_NOALPHAHW 194 
#define  DDERR_NOBLTHW 193 
#define  DDERR_NOCLIPLIST 192 
#define  DDERR_NOCLIPPERATTACHED 191 
#define  DDERR_NOCOLORCONVHW 190 
#define  DDERR_NOCOLORKEY 189 
#define  DDERR_NOCOLORKEYHW 188 
#define  DDERR_NOCOOPERATIVELEVELSET 187 
#define  DDERR_NODC 186 
#define  DDERR_NODDROPSHW 185 
#define  DDERR_NODIRECTDRAWHW 184 
#define  DDERR_NODIRECTDRAWSUPPORT 183 
#define  DDERR_NOEMULATION 182 
#define  DDERR_NOEXCLUSIVEMODE 181 
#define  DDERR_NOFLIPHW 180 
#define  DDERR_NOGDI 179 
#define  DDERR_NOHWND 178 
#define  DDERR_NOMIPMAPHW 177 
#define  DDERR_NOMIRRORHW 176 
#define  DDERR_NOOVERLAYDEST 175 
#define  DDERR_NOOVERLAYHW 174 
#define  DDERR_NOPALETTEATTACHED 173 
#define  DDERR_NOPALETTEHW 172 
#define  DDERR_NORASTEROPHW 171 
#define  DDERR_NOROTATIONHW 170 
#define  DDERR_NOSTRETCHHW 169 
#define  DDERR_NOT4BITCOLOR 168 
#define  DDERR_NOT4BITCOLORINDEX 167 
#define  DDERR_NOT8BITCOLOR 166 
#define  DDERR_NOTAOVERLAYSURFACE 165 
#define  DDERR_NOTEXTUREHW 164 
#define  DDERR_NOTFLIPPABLE 163 
#define  DDERR_NOTFOUND 162 
#define  DDERR_NOTINITIALIZED 161 
#define  DDERR_NOTLOCKED 160 
#define  DDERR_NOTPAGELOCKED 159 
#define  DDERR_NOTPALETTIZED 158 
#define  DDERR_NOVSYNCHW 157 
#define  DDERR_NOZBUFFERHW 156 
#define  DDERR_NOZOVERLAYHW 155 
#define  DDERR_OUTOFCAPS 154 
#define  DDERR_OUTOFMEMORY 153 
#define  DDERR_OUTOFVIDEOMEMORY 152 
#define  DDERR_OVERLAYCANTCLIP 151 
#define  DDERR_OVERLAYCOLORKEYONLYONEACTIVE 150 
#define  DDERR_OVERLAYNOTVISIBLE 149 
#define  DDERR_PALETTEBUSY 148 
#define  DDERR_PRIMARYSURFACEALREADYEXISTS 147 
#define  DDERR_REGIONTOOSMALL 146 
#define  DDERR_SURFACEALREADYATTACHED 145 
#define  DDERR_SURFACEALREADYDEPENDENT 144 
#define  DDERR_SURFACEBUSY 143 
#define  DDERR_SURFACEISOBSCURED 142 
#define  DDERR_SURFACELOST 141 
#define  DDERR_SURFACENOTATTACHED 140 
#define  DDERR_TOOBIGHEIGHT 139 
#define  DDERR_TOOBIGSIZE 138 
#define  DDERR_TOOBIGWIDTH 137 
#define  DDERR_UNSUPPORTED 136 
#define  DDERR_UNSUPPORTEDFORMAT 135 
#define  DDERR_UNSUPPORTEDMASK 134 
#define  DDERR_UNSUPPORTEDMODE 133 
#define  DDERR_VERTICALBLANKINPROGRESS 132 
#define  DDERR_WASSTILLDRAWING 131 
#define  DDERR_WRONGMODE 130 
#define  DDERR_XALIGN 129 
#define  DD_OK 128 

char* DDErrorString (HRESULT hr)
{
	switch (hr)
	{
		case DD_OK:								 return "DD_OK";
		case DDERR_ALREADYINITIALIZED:           return "DDERR_ALREADYINITIALIZED";
		case DDERR_CANNOTATTACHSURFACE:          return "DDERR_CANNOTATTACHSURFACE";
		case DDERR_CANNOTDETACHSURFACE:          return "DDERR_CANNOTDETACHSURFACE";
		case DDERR_CURRENTLYNOTAVAIL:            return "DDERR_CURRENTLYNOTAVAIL";
		case DDERR_EXCEPTION:                    return "DDERR_EXCEPTION";
		case DDERR_GENERIC:                      return "DDERR_GENERIC";
		case DDERR_HEIGHTALIGN:                  return "DDERR_HEIGHTALIGN";
		case DDERR_INCOMPATIBLEPRIMARY:          return "DDERR_INCOMPATIBLEPRIMARY";
		case DDERR_INVALIDCAPS:                  return "DDERR_INVALIDCAPS";
		case DDERR_INVALIDCLIPLIST:              return "DDERR_INVALIDCLIPLIST";
		case DDERR_INVALIDMODE:                  return "DDERR_INVALIDMODE";
		case DDERR_INVALIDOBJECT:                return "DDERR_INVALIDOBJECT";
		case DDERR_INVALIDPARAMS:                return "DDERR_INVALIDPARAMS";
		case DDERR_INVALIDPIXELFORMAT:           return "DDERR_INVALIDPIXELFORMAT";
		case DDERR_INVALIDRECT:                  return "DDERR_INVALIDRECT";
		case DDERR_LOCKEDSURFACES:               return "DDERR_LOCKEDSURFACES";
		case DDERR_NO3D:                         return "DDERR_NO3D";
		case DDERR_NOALPHAHW:                    return "DDERR_NOALPHAHW";
		case DDERR_NOCLIPLIST:                   return "DDERR_NOCLIPLIST";
		case DDERR_NOCOLORCONVHW:                return "DDERR_NOCOLORCONVHW";
		case DDERR_NOCOOPERATIVELEVELSET:        return "DDERR_NOCOOPERATIVELEVELSET";
		case DDERR_NOCOLORKEY:                   return "DDERR_NOCOLORKEY";
		case DDERR_NOCOLORKEYHW:                 return "DDERR_NOCOLORKEYHW";
		case DDERR_NODIRECTDRAWSUPPORT:          return "DDERR_NODIRECTDRAWSUPPORT";
		case DDERR_NOEXCLUSIVEMODE:              return "DDERR_NOEXCLUSIVEMODE";
		case DDERR_NOFLIPHW:                     return "DDERR_NOFLIPHW";
		case DDERR_NOGDI:                        return "DDERR_NOGDI";
		case DDERR_NOMIRRORHW:                   return "DDERR_NOMIRRORHW";
		case DDERR_NOTFOUND:                     return "DDERR_NOTFOUND";
		case DDERR_NOOVERLAYHW:                  return "DDERR_NOOVERLAYHW";
		case DDERR_NORASTEROPHW:                 return "DDERR_NORASTEROPHW";
		case DDERR_NOROTATIONHW:                 return "DDERR_NOROTATIONHW";
		case DDERR_NOSTRETCHHW:                  return "DDERR_NOSTRETCHHW";
		case DDERR_NOT4BITCOLOR:                 return "DDERR_NOT4BITCOLOR";
		case DDERR_NOT4BITCOLORINDEX:            return "DDERR_NOT4BITCOLORINDEX";
		case DDERR_NOT8BITCOLOR:                 return "DDERR_NOT8BITCOLOR";
		case DDERR_NOTEXTUREHW:                  return "DDERR_NOTEXTUREHW";
		case DDERR_NOVSYNCHW:                    return "DDERR_NOVSYNCHW";
		case DDERR_NOZBUFFERHW:                  return "DDERR_NOZBUFFERHW";
		case DDERR_NOZOVERLAYHW:                 return "DDERR_NOZOVERLAYHW";
		case DDERR_OUTOFCAPS:                    return "DDERR_OUTOFCAPS";
		case DDERR_OUTOFMEMORY:                  return "DDERR_OUTOFMEMORY";
		case DDERR_OUTOFVIDEOMEMORY:             return "DDERR_OUTOFVIDEOMEMORY";
		case DDERR_OVERLAYCANTCLIP:              return "DDERR_OVERLAYCANTCLIP";
		case DDERR_OVERLAYCOLORKEYONLYONEACTIVE: return "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
		case DDERR_PALETTEBUSY:                  return "DDERR_PALETTEBUSY";
		case DDERR_COLORKEYNOTSET:               return "DDERR_COLORKEYNOTSET";
		case DDERR_SURFACEALREADYATTACHED:       return "DDERR_SURFACEALREADYATTACHED";
		case DDERR_SURFACEALREADYDEPENDENT:      return "DDERR_SURFACEALREADYDEPENDENT";
		case DDERR_SURFACEBUSY:                  return "DDERR_SURFACEBUSY";
		case DDERR_CANTLOCKSURFACE:              return "DDERR_CANTLOCKSURFACE";
		case DDERR_SURFACEISOBSCURED:            return "DDERR_SURFACEISOBSCURED";
		case DDERR_SURFACELOST:                  return "DDERR_SURFACELOST";
		case DDERR_SURFACENOTATTACHED:           return "DDERR_SURFACENOTATTACHED";
		case DDERR_TOOBIGHEIGHT:                 return "DDERR_TOOBIGHEIGHT";
		case DDERR_TOOBIGSIZE:                   return "DDERR_TOOBIGSIZE";
		case DDERR_TOOBIGWIDTH:                  return "DDERR_TOOBIGWIDTH";
		case DDERR_UNSUPPORTED:                  return "DDERR_UNSUPPORTED";
		case DDERR_UNSUPPORTEDFORMAT:            return "DDERR_UNSUPPORTEDFORMAT";
		case DDERR_UNSUPPORTEDMASK:              return "DDERR_UNSUPPORTEDMASK";
		case DDERR_VERTICALBLANKINPROGRESS:      return "DDERR_VERTICALBLANKINPROGRESS";
		case DDERR_WASSTILLDRAWING:              return "DDERR_WASSTILLDRAWING";
		case DDERR_XALIGN:                       return "DDERR_XALIGN";
		case DDERR_INVALIDDIRECTDRAWGUID:        return "DDERR_INVALIDDIRECTDRAWGUID";
		case DDERR_DIRECTDRAWALREADYCREATED:     return "DDERR_DIRECTDRAWALREADYCREATED";
		case DDERR_NODIRECTDRAWHW:               return "DDERR_NODIRECTDRAWHW";
		case DDERR_PRIMARYSURFACEALREADYEXISTS:  return "DDERR_PRIMARYSURFACEALREADYEXISTS";
		case DDERR_NOEMULATION:                  return "DDERR_NOEMULATION";
		case DDERR_REGIONTOOSMALL:               return "DDERR_REGIONTOOSMALL";
		case DDERR_CLIPPERISUSINGHWND:           return "DDERR_CLIPPERISUSINGHWND";
		case DDERR_NOCLIPPERATTACHED:            return "DDERR_NOCLIPPERATTACHED";
		case DDERR_NOHWND:                       return "DDERR_NOHWND";
		case DDERR_HWNDSUBCLASSED:               return "DDERR_HWNDSUBCLASSED";
		case DDERR_HWNDALREADYSET:               return "DDERR_HWNDALREADYSET";
		case DDERR_NOPALETTEATTACHED:            return "DDERR_NOPALETTEATTACHED";
		case DDERR_NOPALETTEHW:                  return "DDERR_NOPALETTEHW";
		case DDERR_BLTFASTCANTCLIP:              return "DDERR_BLTFASTCANTCLIP";
		case DDERR_NOBLTHW:                      return "DDERR_NOBLTHW";
		case DDERR_NODDROPSHW:                   return "DDERR_NODDROPSHW";
		case DDERR_OVERLAYNOTVISIBLE:            return "DDERR_OVERLAYNOTVISIBLE";
		case DDERR_NOOVERLAYDEST:                return "DDERR_NOOVERLAYDEST";
		case DDERR_INVALIDPOSITION:              return "DDERR_INVALIDPOSITION";
		case DDERR_NOTAOVERLAYSURFACE:           return "DDERR_NOTAOVERLAYSURFACE";
		case DDERR_EXCLUSIVEMODEALREADYSET:      return "DDERR_EXCLUSIVEMODEALREADYSET";
		case DDERR_NOTFLIPPABLE:                 return "DDERR_NOTFLIPPABLE";
		case DDERR_CANTDUPLICATE:                return "DDERR_CANTDUPLICATE";
		case DDERR_NOTLOCKED:                    return "DDERR_NOTLOCKED";
		case DDERR_CANTCREATEDC:                 return "DDERR_CANTCREATEDC";
		case DDERR_NODC:                         return "DDERR_NODC";
		case DDERR_WRONGMODE:                    return "DDERR_WRONGMODE";
		case DDERR_IMPLICITLYCREATED:            return "DDERR_IMPLICITLYCREATED";
		case DDERR_NOTPALETTIZED:                return "DDERR_NOTPALETTIZED";
		case DDERR_UNSUPPORTEDMODE:              return "DDERR_UNSUPPORTEDMODE";
		case DDERR_NOMIPMAPHW:                   return "DDERR_NOMIPMAPHW";
		case DDERR_INVALIDSURFACETYPE:           return "DDERR_INVALIDSURFACETYPE";
		case DDERR_DCALREADYCREATED:             return "DDERR_DCALREADYCREATED";
		case DDERR_CANTPAGELOCK:                 return "DDERR_CANTPAGELOCK";
		case DDERR_CANTPAGEUNLOCK:               return "DDERR_CANTPAGEUNLOCK";
		case DDERR_NOTPAGELOCKED:                return "DDERR_NOTPAGELOCKED";
		case DDERR_NOTINITIALIZED:               return "DDERR_NOTINITIALIZED";
	}

	return "Unknown Error ";
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
          int hr = 100;
          char * benchRet = DDErrorString(hr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hr = 255;
          char * benchRet = DDErrorString(hr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hr = 10;
          char * benchRet = DDErrorString(hr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
