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
typedef  int cl_int ;

/* Variables and functions */

const char *val2cstr_cl (cl_int CL_err)
{
  #define CLERR(a) case a: return #a

  switch (CL_err)
  {
    /**
     * OpenCL runtime errors
     */

    #if defined (CL_VERSION_1_0)
    CLERR (CL_SUCCESS);
    CLERR (CL_DEVICE_NOT_FOUND);
    CLERR (CL_DEVICE_NOT_AVAILABLE);
    CLERR (CL_COMPILER_NOT_AVAILABLE);
    CLERR (CL_MEM_OBJECT_ALLOCATION_FAILURE);
    CLERR (CL_OUT_OF_RESOURCES);
    CLERR (CL_OUT_OF_HOST_MEMORY);
    CLERR (CL_PROFILING_INFO_NOT_AVAILABLE);
    CLERR (CL_MEM_COPY_OVERLAP);
    CLERR (CL_IMAGE_FORMAT_MISMATCH);
    CLERR (CL_IMAGE_FORMAT_NOT_SUPPORTED);
    CLERR (CL_BUILD_PROGRAM_FAILURE);
    CLERR (CL_MAP_FAILURE);
    #endif

    #if defined (CL_VERSION_1_1)
    CLERR (CL_MISALIGNED_SUB_BUFFER_OFFSET);
    CLERR (CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST);
    #endif

    #if defined (CL_VERSION_1_2)
    CLERR (CL_COMPILE_PROGRAM_FAILURE);
    CLERR (CL_LINKER_NOT_AVAILABLE);
    CLERR (CL_LINK_PROGRAM_FAILURE);
    CLERR (CL_DEVICE_PARTITION_FAILED);
    CLERR (CL_KERNEL_ARG_INFO_NOT_AVAILABLE);
    #endif

    /**
     * OpenCL compile-time errors
     */

    #if defined (CL_VERSION_1_0)
    CLERR (CL_INVALID_VALUE);
    CLERR (CL_INVALID_DEVICE_TYPE);
    CLERR (CL_INVALID_PLATFORM);
    CLERR (CL_INVALID_DEVICE);
    CLERR (CL_INVALID_CONTEXT);
    CLERR (CL_INVALID_QUEUE_PROPERTIES);
    CLERR (CL_INVALID_COMMAND_QUEUE);
    CLERR (CL_INVALID_HOST_PTR);
    CLERR (CL_INVALID_MEM_OBJECT);
    CLERR (CL_INVALID_IMAGE_FORMAT_DESCRIPTOR);
    CLERR (CL_INVALID_IMAGE_SIZE);
    CLERR (CL_INVALID_SAMPLER);
    CLERR (CL_INVALID_BINARY);
    CLERR (CL_INVALID_BUILD_OPTIONS);
    CLERR (CL_INVALID_PROGRAM);
    CLERR (CL_INVALID_PROGRAM_EXECUTABLE);
    CLERR (CL_INVALID_KERNEL_NAME);
    CLERR (CL_INVALID_KERNEL_DEFINITION);
    CLERR (CL_INVALID_KERNEL);
    CLERR (CL_INVALID_ARG_INDEX);
    CLERR (CL_INVALID_ARG_VALUE);
    CLERR (CL_INVALID_ARG_SIZE);
    CLERR (CL_INVALID_KERNEL_ARGS);
    CLERR (CL_INVALID_WORK_DIMENSION);
    CLERR (CL_INVALID_WORK_GROUP_SIZE);
    CLERR (CL_INVALID_WORK_ITEM_SIZE);
    CLERR (CL_INVALID_GLOBAL_OFFSET);
    CLERR (CL_INVALID_EVENT_WAIT_LIST);
    CLERR (CL_INVALID_EVENT);
    CLERR (CL_INVALID_OPERATION);
    CLERR (CL_INVALID_GL_OBJECT);
    CLERR (CL_INVALID_BUFFER_SIZE);
    CLERR (CL_INVALID_MIP_LEVEL);
    CLERR (CL_INVALID_GLOBAL_WORK_SIZE);
    #endif

    #if defined (CL_VERSION_1_1)
    CLERR (CL_INVALID_PROPERTY);
    #endif

    #if defined (CL_VERSION_1_2)
    CLERR (CL_INVALID_IMAGE_DESCRIPTOR);
    CLERR (CL_INVALID_COMPILER_OPTIONS);
    CLERR (CL_INVALID_LINKER_OPTIONS);
    CLERR (CL_INVALID_DEVICE_PARTITION_COUNT);
    #endif

    #if defined (CL_VERSION_2_0)
    CLERR (CL_INVALID_PIPE_SIZE);
    CLERR (CL_INVALID_DEVICE_QUEUE);
    #endif

    /**
     * OpenCL extension error values
     */

    #if defined (__OPENCL_CL_GL_H) && defined (cl_khr_gl_sharing)
    CLERR (CL_INVALID_GL_SHAREGROUP_REFERENCE_KHR);
    #endif

    #if defined (__CL_EXT_H) && defined (cl_khr_icd)
    CLERR (CL_PLATFORM_NOT_FOUND_KHR);
    #else
    case -1001: return "CL_PLATFORM_NOT_FOUND_KHR";
    #endif

    #if defined (__OPENCL_CL_D3D10_H)
    CLERR (CL_INVALID_D3D10_DEVICE_KHR);
    CLERR (CL_INVALID_D3D10_RESOURCE_KHR);
    CLERR (CL_D3D10_RESOURCE_ALREADY_ACQUIRED_KHR);
    CLERR (CL_D3D10_RESOURCE_NOT_ACQUIRED_KHR);
    #endif

    #if defined (__OPENCL_CL_D3D11_H)
    CLERR (CL_INVALID_D3D11_DEVICE_KHR);
    CLERR (CL_INVALID_D3D11_RESOURCE_KHR);
    CLERR (CL_D3D11_RESOURCE_ALREADY_ACQUIRED_KHR);
    CLERR (CL_D3D11_RESOURCE_NOT_ACQUIRED_KHR);
    #endif

    #if defined (__OPENCL_CL_DX9_MEDIA_SHARING_H)
    CLERR (CL_INVALID_DX9_MEDIA_ADAPTER_KHR);
    CLERR (CL_INVALID_DX9_MEDIA_SURFACE_KHR);
    CLERR (CL_DX9_MEDIA_SURFACE_ALREADY_ACQUIRED_KHR);
    CLERR (CL_DX9_MEDIA_SURFACE_NOT_ACQUIRED_KHR);
    #endif

    #if defined (__CL_EXT_H) && defined (cl_ext_device_fission)
    CLERR (CL_DEVICE_PARTITION_FAILED_EXT);
    CLERR (CL_INVALID_PARTITION_COUNT_EXT);
    CLERR (CL_INVALID_PARTITION_NAME_EXT);
    #endif

    #if defined (__OPENCL_CL_EGL_H)
    CLERR (CL_EGL_RESOURCE_NOT_ACQUIRED_KHR);
    CLERR (CL_INVALID_EGL_OBJECT_KHR);
    #endif

    #if defined (__CL_EXT_H) && defined (cl_intel_accelerator)
    CLERR (CL_INVALID_ACCELERATOR_INTEL);
    CLERR (CL_INVALID_ACCELERATOR_TYPE_INTEL);
    CLERR (CL_INVALID_ACCELERATOR_DESCRIPTOR_INTEL);
    CLERR (CL_ACCELERATOR_TYPE_NOT_SUPPORTED_INTEL);
    #endif
  }

  #undef CLERR

  return "CL_UNKNOWN_ERROR";
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
          int CL_err = 100;
          const char * benchRet = val2cstr_cl(CL_err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int CL_err = 255;
          const char * benchRet = val2cstr_cl(CL_err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int CL_err = 10;
          const char * benchRet = val2cstr_cl(CL_err);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
