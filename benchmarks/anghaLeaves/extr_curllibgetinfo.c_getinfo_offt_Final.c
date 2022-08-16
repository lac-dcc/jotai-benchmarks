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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int uploaded; int downloaded; int dlspeed; int ulspeed; int flags; int size_dl; int size_ul; int timespent; int t_nslookup; int t_connect; int t_appconnect; int t_pretransfer; int t_starttransfer; int t_redirect; } ;
struct TYPE_3__ {int /*<<< orphan*/  filetime; } ;
struct Curl_easy {TYPE_2__ progress; TYPE_1__ info; } ;
typedef  int curl_off_t ;
typedef  int /*<<< orphan*/  CURLcode ;
typedef  int CURLINFO ;

/* Variables and functions */
 int /*<<< orphan*/  CURLE_OK ; 
 int /*<<< orphan*/  CURLE_UNKNOWN_OPTION ; 
#define  CURLINFO_APPCONNECT_TIME_T 141 
#define  CURLINFO_CONNECT_TIME_T 140 
#define  CURLINFO_CONTENT_LENGTH_DOWNLOAD_T 139 
#define  CURLINFO_CONTENT_LENGTH_UPLOAD_T 138 
#define  CURLINFO_FILETIME_T 137 
#define  CURLINFO_NAMELOOKUP_TIME_T 136 
#define  CURLINFO_PRETRANSFER_TIME_T 135 
#define  CURLINFO_REDIRECT_TIME_T 134 
#define  CURLINFO_SIZE_DOWNLOAD_T 133 
#define  CURLINFO_SIZE_UPLOAD_T 132 
#define  CURLINFO_SPEED_DOWNLOAD_T 131 
#define  CURLINFO_SPEED_UPLOAD_T 130 
#define  CURLINFO_STARTTRANSFER_TIME_T 129 
#define  CURLINFO_TOTAL_TIME_T 128 
 int PGRS_DL_SIZE_KNOWN ; 
 int PGRS_UL_SIZE_KNOWN ; 

__attribute__((used)) static CURLcode getinfo_offt(struct Curl_easy *data, CURLINFO info,
                             curl_off_t *param_offt)
{
  switch(info) {
  case CURLINFO_FILETIME_T:
    *param_offt = (curl_off_t)data->info.filetime;
    break;
  case CURLINFO_SIZE_UPLOAD_T:
    *param_offt = data->progress.uploaded;
    break;
  case CURLINFO_SIZE_DOWNLOAD_T:
    *param_offt = data->progress.downloaded;
    break;
  case CURLINFO_SPEED_DOWNLOAD_T:
    *param_offt =  data->progress.dlspeed;
    break;
  case CURLINFO_SPEED_UPLOAD_T:
    *param_offt = data->progress.ulspeed;
    break;
  case CURLINFO_CONTENT_LENGTH_DOWNLOAD_T:
    *param_offt = (data->progress.flags & PGRS_DL_SIZE_KNOWN)?
      data->progress.size_dl:-1;
    break;
  case CURLINFO_CONTENT_LENGTH_UPLOAD_T:
    *param_offt = (data->progress.flags & PGRS_UL_SIZE_KNOWN)?
      data->progress.size_ul:-1;
    break;
  case CURLINFO_TOTAL_TIME_T:
    *param_offt = data->progress.timespent;
    break;
  case CURLINFO_NAMELOOKUP_TIME_T:
    *param_offt = data->progress.t_nslookup;
    break;
  case CURLINFO_CONNECT_TIME_T:
    *param_offt = data->progress.t_connect;
    break;
  case CURLINFO_APPCONNECT_TIME_T:
    *param_offt = data->progress.t_appconnect;
    break;
  case CURLINFO_PRETRANSFER_TIME_T:
    *param_offt = data->progress.t_pretransfer;
    break;
  case CURLINFO_STARTTRANSFER_TIME_T:
    *param_offt = data->progress.t_starttransfer;
    break;
  case CURLINFO_REDIRECT_TIME_T:
    *param_offt = data->progress.t_redirect;
    break;

  default:
    return CURLE_UNKNOWN_OPTION;
  }

  return CURLE_OK;
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
          int info = 100;
          int _len_data0 = 1;
          struct Curl_easy * data = (struct Curl_easy *) malloc(_len_data0*sizeof(struct Curl_easy));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].progress.uploaded = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.downloaded = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.dlspeed = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.ulspeed = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.size_dl = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.size_ul = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.timespent = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.t_nslookup = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.t_connect = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.t_appconnect = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.t_pretransfer = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.t_starttransfer = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].progress.t_redirect = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].info.filetime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param_offt0 = 1;
          int * param_offt = (int *) malloc(_len_param_offt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_param_offt0; _i0++) {
            param_offt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = getinfo_offt(data,info,param_offt);
          printf("%d\n", benchRet); 
          free(data);
          free(param_offt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
