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
#define  AUDCLNT_E_ALREADY_INITIALIZED 211 
#define  AUDCLNT_E_BUFDURATION_PERIOD_NOT_EQUAL 210 
#define  AUDCLNT_E_BUFFER_ERROR 209 
#define  AUDCLNT_E_BUFFER_OPERATION_PENDING 208 
#define  AUDCLNT_E_BUFFER_SIZE_ERROR 207 
#define  AUDCLNT_E_BUFFER_SIZE_NOT_ALIGNED 206 
#define  AUDCLNT_E_BUFFER_TOO_LARGE 205 
#define  AUDCLNT_E_CPUUSAGE_EXCEEDED 204 
#define  AUDCLNT_E_DEVICE_INVALIDATED 203 
#define  AUDCLNT_E_DEVICE_IN_USE 202 
#define  AUDCLNT_E_ENDPOINT_CREATE_FAILED 201 
#define  AUDCLNT_E_ENDPOINT_OFFLOAD_NOT_CAPABLE 200 
#define  AUDCLNT_E_EVENTHANDLE_NOT_EXPECTED 199 
#define  AUDCLNT_E_EVENTHANDLE_NOT_SET 198 
#define  AUDCLNT_E_EXCLUSIVE_MODE_NOT_ALLOWED 197 
#define  AUDCLNT_E_EXCLUSIVE_MODE_ONLY 196 
#define  AUDCLNT_E_INCORRECT_BUFFER_SIZE 195 
#define  AUDCLNT_E_INVALID_DEVICE_PERIOD 194 
#define  AUDCLNT_E_INVALID_SIZE 193 
#define  AUDCLNT_E_INVALID_STREAM_FLAG 192 
#define  AUDCLNT_E_NOT_INITIALIZED 191 
#define  AUDCLNT_E_NOT_STOPPED 190 
#define  AUDCLNT_E_OUT_OF_ORDER 189 
#define  AUDCLNT_E_RESOURCES_INVALIDATED 188 
#define  AUDCLNT_E_SERVICE_NOT_RUNNING 187 
#define  AUDCLNT_E_THREAD_NOT_REGISTERED 186 
#define  AUDCLNT_E_UNSUPPORTED_FORMAT 185 
#define  AUDCLNT_E_WRONG_ENDPOINT_TYPE 184 
#define  AUDCLNT_S_BUFFER_EMPTY 183 
#define  AUDCLNT_S_POSITION_STALLED 182 
#define  AUDCLNT_S_THREAD_ALREADY_REGISTERED 181 
#define  CO_E_NOTINITIALIZED 180 
#define  D3DERR_CANNOTPROTECTCONTENT 179 
#define  D3DERR_CONFLICTINGRENDERSTATE 178 
#define  D3DERR_CONFLICTINGTEXTUREFILTER 177 
#define  D3DERR_CONFLICTINGTEXTUREPALETTE 176 
#define  D3DERR_DEVICEHUNG 175 
#define  D3DERR_DEVICELOST 174 
#define  D3DERR_DEVICENOTRESET 173 
#define  D3DERR_DEVICEREMOVED 172 
#define  D3DERR_DRIVERINTERNALERROR 171 
#define  D3DERR_DRIVERINVALIDCALL 170 
#define  D3DERR_INVALIDCALL 169 
#define  D3DERR_INVALIDDEVICE 168 
#define  D3DERR_MOREDATA 167 
#define  D3DERR_NOTAVAILABLE 166 
#define  D3DERR_NOTFOUND 165 
#define  D3DERR_OUTOFVIDEOMEMORY 164 
#define  D3DERR_PRESENT_STATISTICS_DISJOINT 163 
#define  D3DERR_TOOMANYOPERATIONS 162 
#define  D3DERR_UNSUPPORTEDALPHAARG 161 
#define  D3DERR_UNSUPPORTEDALPHAOPERATION 160 
#define  D3DERR_UNSUPPORTEDCOLORARG 159 
#define  D3DERR_UNSUPPORTEDCOLOROPERATION 158 
#define  D3DERR_UNSUPPORTEDCRYPTO 157 
#define  D3DERR_UNSUPPORTEDFACTORVALUE 156 
#define  D3DERR_UNSUPPORTEDOVERLAY 155 
#define  D3DERR_UNSUPPORTEDOVERLAYFORMAT 154 
#define  D3DERR_UNSUPPORTEDTEXTUREFILTER 153 
#define  D3DERR_WASSTILLDRAWING 152 
#define  D3DERR_WRONGTEXTUREFORMAT 151 
#define  D3DOK_NOAUTOGEN 150 
#define  DXGI_ERROR_DEVICE_HUNG 149 
#define  DXGI_ERROR_DEVICE_REMOVED 148 
#define  DXGI_ERROR_DEVICE_RESET 147 
#define  DXGI_ERROR_DRIVER_INTERNAL_ERROR 146 
#define  DXGI_ERROR_INVALID_CALL 145 
#define  DXGI_ERROR_WAS_STILL_DRAWING 144 
#define  DXGI_STATUS_OCCLUDED 143 
#define  E_FAIL 142 
#define  E_HANDLE 141 
#define  E_INVALIDARG 140 
#define  E_NOINTERFACE 139 
#define  E_NOTIMPL 138 
#define  E_OUTOFMEMORY 137 
#define  E_POINTER 136 
#define  E_PROP_ID_UNSUPPORTED 135 
#define  REGDB_E_IIDNOTREG 134 
#define  S_FALSE 133 
#define  S_NOT_RESIDENT 132 
#define  S_OK 131 
#define  S_PRESENT_MODE_CHANGED 130 
#define  S_PRESENT_OCCLUDED 129 
#define  S_RESIDENT_IN_SHARED_MEMORY 128 

__attribute__((used)) static char *hresult_to_str(const HRESULT hr)
{
#define E(x) case x : return # x ;
    switch (hr) {
    E(S_OK)
    E(S_FALSE)
    E(E_FAIL)
    E(E_OUTOFMEMORY)
    E(E_POINTER)
    E(E_HANDLE)
    E(E_NOTIMPL)
    E(E_INVALIDARG)
    E(E_PROP_ID_UNSUPPORTED)
    E(E_NOINTERFACE)
    E(REGDB_E_IIDNOTREG)
    E(CO_E_NOTINITIALIZED)
    E(AUDCLNT_E_NOT_INITIALIZED)
    E(AUDCLNT_E_ALREADY_INITIALIZED)
    E(AUDCLNT_E_WRONG_ENDPOINT_TYPE)
    E(AUDCLNT_E_DEVICE_INVALIDATED)
    E(AUDCLNT_E_NOT_STOPPED)
    E(AUDCLNT_E_BUFFER_TOO_LARGE)
    E(AUDCLNT_E_OUT_OF_ORDER)
    E(AUDCLNT_E_UNSUPPORTED_FORMAT)
    E(AUDCLNT_E_INVALID_SIZE)
    E(AUDCLNT_E_DEVICE_IN_USE)
    E(AUDCLNT_E_BUFFER_OPERATION_PENDING)
    E(AUDCLNT_E_THREAD_NOT_REGISTERED)
    E(AUDCLNT_E_EXCLUSIVE_MODE_NOT_ALLOWED)
    E(AUDCLNT_E_ENDPOINT_CREATE_FAILED)
    E(AUDCLNT_E_SERVICE_NOT_RUNNING)
    E(AUDCLNT_E_EVENTHANDLE_NOT_EXPECTED)
    E(AUDCLNT_E_EXCLUSIVE_MODE_ONLY)
    E(AUDCLNT_E_BUFDURATION_PERIOD_NOT_EQUAL)
    E(AUDCLNT_E_EVENTHANDLE_NOT_SET)
    E(AUDCLNT_E_INCORRECT_BUFFER_SIZE)
    E(AUDCLNT_E_BUFFER_SIZE_ERROR)
    E(AUDCLNT_E_CPUUSAGE_EXCEEDED)
    E(AUDCLNT_E_BUFFER_ERROR)
    E(AUDCLNT_E_BUFFER_SIZE_NOT_ALIGNED)
    E(AUDCLNT_E_INVALID_DEVICE_PERIOD)
    E(AUDCLNT_E_INVALID_STREAM_FLAG)
    E(AUDCLNT_E_ENDPOINT_OFFLOAD_NOT_CAPABLE)
    E(AUDCLNT_E_RESOURCES_INVALIDATED)
    E(AUDCLNT_S_BUFFER_EMPTY)
    E(AUDCLNT_S_THREAD_ALREADY_REGISTERED)
    E(AUDCLNT_S_POSITION_STALLED)
    E(D3DERR_WRONGTEXTUREFORMAT)
    E(D3DERR_UNSUPPORTEDCOLOROPERATION)
    E(D3DERR_UNSUPPORTEDCOLORARG)
    E(D3DERR_UNSUPPORTEDALPHAOPERATION)
    E(D3DERR_UNSUPPORTEDALPHAARG)
    E(D3DERR_TOOMANYOPERATIONS)
    E(D3DERR_CONFLICTINGTEXTUREFILTER)
    E(D3DERR_UNSUPPORTEDFACTORVALUE)
    E(D3DERR_CONFLICTINGRENDERSTATE)
    E(D3DERR_UNSUPPORTEDTEXTUREFILTER)
    E(D3DERR_CONFLICTINGTEXTUREPALETTE)
    E(D3DERR_DRIVERINTERNALERROR)
    E(D3DERR_NOTFOUND)
    E(D3DERR_MOREDATA)
    E(D3DERR_DEVICELOST)
    E(D3DERR_DEVICENOTRESET)
    E(D3DERR_NOTAVAILABLE)
    E(D3DERR_OUTOFVIDEOMEMORY)
    E(D3DERR_INVALIDDEVICE)
    E(D3DERR_INVALIDCALL)
    E(D3DERR_DRIVERINVALIDCALL)
    E(D3DERR_WASSTILLDRAWING)
    E(D3DOK_NOAUTOGEN)
    E(D3DERR_DEVICEREMOVED)
    E(D3DERR_DEVICEHUNG)
    E(S_NOT_RESIDENT)
    E(S_RESIDENT_IN_SHARED_MEMORY)
    E(S_PRESENT_MODE_CHANGED)
    E(S_PRESENT_OCCLUDED)
    E(D3DERR_UNSUPPORTEDOVERLAY)
    E(D3DERR_UNSUPPORTEDOVERLAYFORMAT)
    E(D3DERR_CANNOTPROTECTCONTENT)
    E(D3DERR_UNSUPPORTEDCRYPTO)
    E(D3DERR_PRESENT_STATISTICS_DISJOINT)
    E(DXGI_ERROR_DEVICE_HUNG)
    E(DXGI_ERROR_DEVICE_REMOVED)
    E(DXGI_ERROR_DEVICE_RESET)
    E(DXGI_ERROR_DRIVER_INTERNAL_ERROR)
    E(DXGI_ERROR_INVALID_CALL)
    E(DXGI_ERROR_WAS_STILL_DRAWING)
    E(DXGI_STATUS_OCCLUDED)
    default:
        return "<Unknown>";
    }
#undef E
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
          const int hr = 100;
          char * benchRet = hresult_to_str(hr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int hr = 255;
          char * benchRet = hresult_to_str(hr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int hr = 10;
          char * benchRet = hresult_to_str(hr);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
