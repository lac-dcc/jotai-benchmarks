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
typedef  int NTSTATUS ;
typedef  int DWORD ;

/* Variables and functions */
 int ERROR_IO_PENDING ; 
 int ERROR_SEVERITY_ERROR ; 
 int ERROR_SEVERITY_WARNING ; 
 int ERROR_SUCCESS ; 
 int FACILITY_NTWIN32 ; 
#define  STATUS_ACCESS_DENIED 184 
#define  STATUS_ACCESS_VIOLATION 183 
#define  STATUS_ADDRESS_ALREADY_EXISTS 182 
#define  STATUS_BAD_NETWORK_PATH 181 
#define  STATUS_BUFFER_OVERFLOW 180 
#define  STATUS_BUFFER_TOO_SMALL 179 
#define  STATUS_CANCELLED 178 
#define  STATUS_COMMITMENT_LIMIT 177 
#define  STATUS_CONFLICTING_ADDRESSES 176 
#define  STATUS_CONNECTION_ABORTED 175 
#define  STATUS_CONNECTION_DISCONNECTED 174 
#define  STATUS_CONNECTION_REFUSED 173 
#define  STATUS_CONNECTION_RESET 172 
#define  STATUS_DEVICE_NOT_READY 171 
#define  STATUS_GRACEFUL_DISCONNECT 170 
#define  STATUS_HOPLIMIT_EXCEEDED 169 
#define  STATUS_HOST_UNREACHABLE 168 
#define  STATUS_INSUFFICIENT_RESOURCES 167 
#define  STATUS_INVALID_ADDRESS 166 
#define  STATUS_INVALID_ADDRESS_COMPONENT 165 
#define  STATUS_INVALID_BUFFER_SIZE 164 
#define  STATUS_INVALID_CONNECTION 163 
#define  STATUS_INVALID_HANDLE 162 
#define  STATUS_INVALID_NETWORK_RESPONSE 161 
#define  STATUS_IO_TIMEOUT 160 
#define  STATUS_LINK_FAILED 159 
#define  STATUS_LINK_TIMEOUT 158 
#define  STATUS_LOCAL_DISCONNECT 157 
#define  STATUS_NETWORK_BUSY 156 
#define  STATUS_NETWORK_UNREACHABLE 155 
#define  STATUS_NOT_IMPLEMENTED 154 
#define  STATUS_NOT_SUPPORTED 153 
#define  STATUS_NO_MEMORY 152 
#define  STATUS_NO_SUCH_DEVICE 151 
#define  STATUS_NO_SUCH_FILE 150 
#define  STATUS_OBJECT_NAME_NOT_FOUND 149 
#define  STATUS_OBJECT_PATH_NOT_FOUND 148 
#define  STATUS_OBJECT_TYPE_MISMATCH 147 
#define  STATUS_PAGEFILE_QUOTA 146 
#define  STATUS_PENDING 145 
#define  STATUS_PIPE_DISCONNECTED 144 
#define  STATUS_PORT_UNREACHABLE 143 
#define  STATUS_PROTOCOL_UNREACHABLE 142 
#define  STATUS_QUOTA_EXCEEDED 141 
#define  STATUS_REMOTE_DISCONNECT 140 
#define  STATUS_REMOTE_NOT_LISTENING 139 
#define  STATUS_REMOTE_RESOURCES 138 
#define  STATUS_REQUEST_ABORTED 137 
#define  STATUS_REQUEST_NOT_ACCEPTED 136 
#define  STATUS_SHARING_VIOLATION 135 
#define  STATUS_SUCCESS 134 
#define  STATUS_TIMEOUT 133 
#define  STATUS_TOO_MANY_ADDRESSES 132 
#define  STATUS_TOO_MANY_PAGING_FILES 131 
#define  STATUS_TRANSACTION_ABORTED 130 
#define  STATUS_UNEXPECTED_NETWORK_ERROR 129 
#define  STATUS_WORKING_SET_QUOTA 128 
 int WSAEACCES ; 
 int WSAEADDRINUSE ; 
 int WSAEADDRNOTAVAIL ; 
 int WSAECONNABORTED ; 
 int WSAECONNREFUSED ; 
 int WSAECONNRESET ; 
 int WSAEDISCON ; 
 int WSAEFAULT ; 
 int WSAEHOSTUNREACH ; 
 int WSAEINTR ; 
 int WSAEINVAL ; 
 int WSAEMSGSIZE ; 
 int WSAENETDOWN ; 
 int WSAENETUNREACH ; 
 int WSAENOBUFS ; 
 int WSAENOTCONN ; 
 int WSAENOTSOCK ; 
 int WSAEOPNOTSUPP ; 
 int WSAESHUTDOWN ; 
 int WSAETIMEDOUT ; 
 int WSAEWOULDBLOCK ; 

int uv_ntstatus_to_winsock_error(NTSTATUS status) {
  switch (status) {
    case STATUS_SUCCESS:
      return ERROR_SUCCESS;

    case STATUS_PENDING:
      return ERROR_IO_PENDING;

    case STATUS_INVALID_HANDLE:
    case STATUS_OBJECT_TYPE_MISMATCH:
      return WSAENOTSOCK;

    case STATUS_INSUFFICIENT_RESOURCES:
    case STATUS_PAGEFILE_QUOTA:
    case STATUS_COMMITMENT_LIMIT:
    case STATUS_WORKING_SET_QUOTA:
    case STATUS_NO_MEMORY:
    case STATUS_QUOTA_EXCEEDED:
    case STATUS_TOO_MANY_PAGING_FILES:
    case STATUS_REMOTE_RESOURCES:
      return WSAENOBUFS;

    case STATUS_TOO_MANY_ADDRESSES:
    case STATUS_SHARING_VIOLATION:
    case STATUS_ADDRESS_ALREADY_EXISTS:
      return WSAEADDRINUSE;

    case STATUS_LINK_TIMEOUT:
    case STATUS_IO_TIMEOUT:
    case STATUS_TIMEOUT:
      return WSAETIMEDOUT;

    case STATUS_GRACEFUL_DISCONNECT:
      return WSAEDISCON;

    case STATUS_REMOTE_DISCONNECT:
    case STATUS_CONNECTION_RESET:
    case STATUS_LINK_FAILED:
    case STATUS_CONNECTION_DISCONNECTED:
    case STATUS_PORT_UNREACHABLE:
    case STATUS_HOPLIMIT_EXCEEDED:
      return WSAECONNRESET;

    case STATUS_LOCAL_DISCONNECT:
    case STATUS_TRANSACTION_ABORTED:
    case STATUS_CONNECTION_ABORTED:
      return WSAECONNABORTED;

    case STATUS_BAD_NETWORK_PATH:
    case STATUS_NETWORK_UNREACHABLE:
    case STATUS_PROTOCOL_UNREACHABLE:
      return WSAENETUNREACH;

    case STATUS_HOST_UNREACHABLE:
      return WSAEHOSTUNREACH;

    case STATUS_CANCELLED:
    case STATUS_REQUEST_ABORTED:
      return WSAEINTR;

    case STATUS_BUFFER_OVERFLOW:
    case STATUS_INVALID_BUFFER_SIZE:
      return WSAEMSGSIZE;

    case STATUS_BUFFER_TOO_SMALL:
    case STATUS_ACCESS_VIOLATION:
      return WSAEFAULT;

    case STATUS_DEVICE_NOT_READY:
    case STATUS_REQUEST_NOT_ACCEPTED:
      return WSAEWOULDBLOCK;

    case STATUS_INVALID_NETWORK_RESPONSE:
    case STATUS_NETWORK_BUSY:
    case STATUS_NO_SUCH_DEVICE:
    case STATUS_NO_SUCH_FILE:
    case STATUS_OBJECT_PATH_NOT_FOUND:
    case STATUS_OBJECT_NAME_NOT_FOUND:
    case STATUS_UNEXPECTED_NETWORK_ERROR:
      return WSAENETDOWN;

    case STATUS_INVALID_CONNECTION:
      return WSAENOTCONN;

    case STATUS_REMOTE_NOT_LISTENING:
    case STATUS_CONNECTION_REFUSED:
      return WSAECONNREFUSED;

    case STATUS_PIPE_DISCONNECTED:
      return WSAESHUTDOWN;

    case STATUS_CONFLICTING_ADDRESSES:
    case STATUS_INVALID_ADDRESS:
    case STATUS_INVALID_ADDRESS_COMPONENT:
      return WSAEADDRNOTAVAIL;

    case STATUS_NOT_SUPPORTED:
    case STATUS_NOT_IMPLEMENTED:
      return WSAEOPNOTSUPP;

    case STATUS_ACCESS_DENIED:
      return WSAEACCES;

    default:
      if ((status & (FACILITY_NTWIN32 << 16)) == (FACILITY_NTWIN32 << 16) &&
          (status & (ERROR_SEVERITY_ERROR | ERROR_SEVERITY_WARNING))) {
        /* It's a windows error that has been previously mapped to an ntstatus
         * code. */
        return (DWORD) (status & 0xffff);
      } else {
        /* The default fallback for unmappable ntstatus codes. */
        return WSAEINVAL;
      }
  }
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int status = 100;
        
          int benchRet = uv_ntstatus_to_winsock_error(status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int status = 255;
        
          int benchRet = uv_ntstatus_to_winsock_error(status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int status = 10;
        
          int benchRet = uv_ntstatus_to_winsock_error(status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = uv_ntstatus_to_winsock_error(status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
