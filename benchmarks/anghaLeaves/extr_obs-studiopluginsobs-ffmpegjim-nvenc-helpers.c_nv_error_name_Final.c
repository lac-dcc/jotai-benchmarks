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
typedef  int NVENCSTATUS ;

/* Variables and functions */
#define  NV_ENC_ERR_DEVICE_NOT_EXIST 153 
#define  NV_ENC_ERR_ENCODER_BUSY 152 
#define  NV_ENC_ERR_ENCODER_NOT_INITIALIZED 151 
#define  NV_ENC_ERR_EVENT_NOT_REGISTERD 150 
#define  NV_ENC_ERR_GENERIC 149 
#define  NV_ENC_ERR_INCOMPATIBLE_CLIENT_KEY 148 
#define  NV_ENC_ERR_INVALID_CALL 147 
#define  NV_ENC_ERR_INVALID_DEVICE 146 
#define  NV_ENC_ERR_INVALID_ENCODERDEVICE 145 
#define  NV_ENC_ERR_INVALID_EVENT 144 
#define  NV_ENC_ERR_INVALID_PARAM 143 
#define  NV_ENC_ERR_INVALID_PTR 142 
#define  NV_ENC_ERR_INVALID_VERSION 141 
#define  NV_ENC_ERR_LOCK_BUSY 140 
#define  NV_ENC_ERR_MAP_FAILED 139 
#define  NV_ENC_ERR_NEED_MORE_INPUT 138 
#define  NV_ENC_ERR_NOT_ENOUGH_BUFFER 137 
#define  NV_ENC_ERR_NO_ENCODE_DEVICE 136 
#define  NV_ENC_ERR_OUT_OF_MEMORY 135 
#define  NV_ENC_ERR_RESOURCE_NOT_MAPPED 134 
#define  NV_ENC_ERR_RESOURCE_NOT_REGISTERED 133 
#define  NV_ENC_ERR_RESOURCE_REGISTER_FAILED 132 
#define  NV_ENC_ERR_UNIMPLEMENTED 131 
#define  NV_ENC_ERR_UNSUPPORTED_DEVICE 130 
#define  NV_ENC_ERR_UNSUPPORTED_PARAM 129 
#define  NV_ENC_SUCCESS 128 

const char *nv_error_name(NVENCSTATUS err)
{
#define RETURN_CASE(x) \
	case x: return #x

	switch (err) {
	RETURN_CASE(NV_ENC_SUCCESS);
	RETURN_CASE(NV_ENC_ERR_NO_ENCODE_DEVICE);
	RETURN_CASE(NV_ENC_ERR_UNSUPPORTED_DEVICE);
	RETURN_CASE(NV_ENC_ERR_INVALID_ENCODERDEVICE);
	RETURN_CASE(NV_ENC_ERR_INVALID_DEVICE);
	RETURN_CASE(NV_ENC_ERR_DEVICE_NOT_EXIST);
	RETURN_CASE(NV_ENC_ERR_INVALID_PTR);
	RETURN_CASE(NV_ENC_ERR_INVALID_EVENT);
	RETURN_CASE(NV_ENC_ERR_INVALID_PARAM);
	RETURN_CASE(NV_ENC_ERR_INVALID_CALL);
	RETURN_CASE(NV_ENC_ERR_OUT_OF_MEMORY);
	RETURN_CASE(NV_ENC_ERR_ENCODER_NOT_INITIALIZED);
	RETURN_CASE(NV_ENC_ERR_UNSUPPORTED_PARAM);
	RETURN_CASE(NV_ENC_ERR_LOCK_BUSY);
	RETURN_CASE(NV_ENC_ERR_NOT_ENOUGH_BUFFER);
	RETURN_CASE(NV_ENC_ERR_INVALID_VERSION);
	RETURN_CASE(NV_ENC_ERR_MAP_FAILED);
	RETURN_CASE(NV_ENC_ERR_NEED_MORE_INPUT);
	RETURN_CASE(NV_ENC_ERR_ENCODER_BUSY);
	RETURN_CASE(NV_ENC_ERR_EVENT_NOT_REGISTERD);
	RETURN_CASE(NV_ENC_ERR_GENERIC);
	RETURN_CASE(NV_ENC_ERR_INCOMPATIBLE_CLIENT_KEY);
	RETURN_CASE(NV_ENC_ERR_UNIMPLEMENTED);
	RETURN_CASE(NV_ENC_ERR_RESOURCE_REGISTER_FAILED);
	RETURN_CASE(NV_ENC_ERR_RESOURCE_NOT_REGISTERED);
	RETURN_CASE(NV_ENC_ERR_RESOURCE_NOT_MAPPED);
	}
#undef RETURN_CASE

	return "Unknown Error";
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int err = 100;
        
          const char * benchRet = nv_error_name(err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int err = 255;
        
          const char * benchRet = nv_error_name(err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int err = 10;
        
          const char * benchRet = nv_error_name(err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int err = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const char * benchRet = nv_error_name(err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
