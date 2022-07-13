// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int memory_width; int mclk_khz; int mem_page_miss; int /*<<< orphan*/  mem_latency; int /*<<< orphan*/  gr_during_vid; scalar_t__ enable_mp; } ;
typedef  TYPE_1__ nv3_sim_state ;
typedef  int /*<<< orphan*/  nv3_fifo_info ;
struct TYPE_6__ {int cur; int gburst_size; int wcvocc; int vocc; int wcvlwm; int vburst_size; long vdrain_rate; long wcmocc; long mocc; int wcglwm; long wcgocc; long gocc; long gdrain_rate; long by_gfacc; int priority; long mdrain_rate; scalar_t__ converged; int /*<<< orphan*/  first_macc; int /*<<< orphan*/  first_gacc; int /*<<< orphan*/  first_vacc; int /*<<< orphan*/  vid_only_once; scalar_t__ vid_en; int /*<<< orphan*/  gr_only_once; scalar_t__ gr_en; } ;
typedef  TYPE_2__ nv3_arb_info ;

/* Variables and functions */
 int GFIFO_SIZE ; 
 int GFIFO_SIZE_128 ; 
#define  GRAPHICS 129 
 int MFIFO_SIZE ; 
 int MPORT ; 
 int VFIFO_SIZE ; 
#define  VIDEO 128 

__attribute__((used)) static int nv3_iterate(nv3_fifo_info *res_info, nv3_sim_state * state, nv3_arb_info *ainfo)
{
    int iter = 0;
    int tmp;
    int vfsize, mfsize, gfsize;
    int mburst_size = 32;
    int mmisses, gmisses, vmisses;
    int misses;
    int vlwm, glwm, mlwm;
    int last, next, cur;
    int max_gfsize ;
    long ns;

    vlwm = 0;
    glwm = 0;
    mlwm = 0;
    vfsize = 0;
    gfsize = 0;
    cur = ainfo->cur;
    mmisses = 2;
    gmisses = 2;
    vmisses = 2;
    if (ainfo->gburst_size == 128) max_gfsize = GFIFO_SIZE_128;
    else  max_gfsize = GFIFO_SIZE;
    max_gfsize = GFIFO_SIZE;
    while (1)
    {
        if (ainfo->vid_en)
        {
            if (ainfo->wcvocc > ainfo->vocc) ainfo->wcvocc = ainfo->vocc;
            if (ainfo->wcvlwm > vlwm) ainfo->wcvlwm = vlwm ;
            ns = 1000000 * ainfo->vburst_size/(state->memory_width/8)/state->mclk_khz;
            vfsize = ns * ainfo->vdrain_rate / 1000000;
            vfsize =  ainfo->wcvlwm - ainfo->vburst_size + vfsize;
        }
        if (state->enable_mp)
        {
            if (ainfo->wcmocc > ainfo->mocc) ainfo->wcmocc = ainfo->mocc;
        }
        if (ainfo->gr_en)
        {
            if (ainfo->wcglwm > glwm) ainfo->wcglwm = glwm ;
            if (ainfo->wcgocc > ainfo->gocc) ainfo->wcgocc = ainfo->gocc;
            ns = 1000000 * (ainfo->gburst_size/(state->memory_width/8))/state->mclk_khz;
            gfsize = (ns * (long) ainfo->gdrain_rate)/1000000;
            gfsize = ainfo->wcglwm - ainfo->gburst_size + gfsize;
        }
        mfsize = 0;
        if (!state->gr_during_vid && ainfo->vid_en)
            if (ainfo->vid_en && (ainfo->vocc < 0) && !ainfo->vid_only_once)
                next = VIDEO;
            else if (ainfo->mocc < 0)
                next = MPORT;
            else if (ainfo->gocc< ainfo->by_gfacc)
                next = GRAPHICS;
            else return (0);
        else switch (ainfo->priority)
            {
                case VIDEO:
                    if (ainfo->vid_en && ainfo->vocc<0 && !ainfo->vid_only_once)
                        next = VIDEO;
                    else if (ainfo->gr_en && ainfo->gocc<0 && !ainfo->gr_only_once)
                        next = GRAPHICS;
                    else if (ainfo->mocc<0)
                        next = MPORT;
                    else    return (0);
                    break;
                case GRAPHICS:
                    if (ainfo->gr_en && ainfo->gocc<0 && !ainfo->gr_only_once)
                        next = GRAPHICS;
                    else if (ainfo->vid_en && ainfo->vocc<0 && !ainfo->vid_only_once)
                        next = VIDEO;
                    else if (ainfo->mocc<0)
                        next = MPORT;
                    else    return (0);
                    break;
                default:
                    if (ainfo->mocc<0)
                        next = MPORT;
                    else if (ainfo->gr_en && ainfo->gocc<0 && !ainfo->gr_only_once)
                        next = GRAPHICS;
                    else if (ainfo->vid_en && ainfo->vocc<0 && !ainfo->vid_only_once)
                        next = VIDEO;
                    else    return (0);
                    break;
            }
        last = cur;
        cur = next;
        iter++;
        switch (cur)
        {
            case VIDEO:
                if (last==cur)    misses = 0;
                else if (ainfo->first_vacc)   misses = vmisses;
                else    misses = 1;
                ainfo->first_vacc = 0;
                if (last!=cur)
                {
                    ns =  1000000 * (vmisses*state->mem_page_miss + state->mem_latency)/state->mclk_khz; 
                    vlwm = ns * ainfo->vdrain_rate/ 1000000;
                    vlwm = ainfo->vocc - vlwm;
                }
                ns = 1000000*(misses*state->mem_page_miss + ainfo->vburst_size)/(state->memory_width/8)/state->mclk_khz;
                ainfo->vocc = ainfo->vocc + ainfo->vburst_size - ns*ainfo->vdrain_rate/1000000;
                ainfo->gocc = ainfo->gocc - ns*ainfo->gdrain_rate/1000000;
                ainfo->mocc = ainfo->mocc - ns*ainfo->mdrain_rate/1000000;
                break;
            case GRAPHICS:
                if (last==cur)    misses = 0;
                else if (ainfo->first_gacc)   misses = gmisses;
                else    misses = 1;
                ainfo->first_gacc = 0;
                if (last!=cur)
                {
                    ns = 1000000*(gmisses*state->mem_page_miss + state->mem_latency)/state->mclk_khz ;
                    glwm = ns * ainfo->gdrain_rate/1000000;
                    glwm = ainfo->gocc - glwm;
                }
                ns = 1000000*(misses*state->mem_page_miss + ainfo->gburst_size/(state->memory_width/8))/state->mclk_khz;
                ainfo->vocc = ainfo->vocc + 0 - ns*ainfo->vdrain_rate/1000000;
                ainfo->gocc = ainfo->gocc + ainfo->gburst_size - ns*ainfo->gdrain_rate/1000000;
                ainfo->mocc = ainfo->mocc + 0 - ns*ainfo->mdrain_rate/1000000;
                break;
            default:
                if (last==cur)    misses = 0;
                else if (ainfo->first_macc)   misses = mmisses;
                else    misses = 1;
                ainfo->first_macc = 0;
                ns = 1000000*(misses*state->mem_page_miss + mburst_size/(state->memory_width/8))/state->mclk_khz;
                ainfo->vocc = ainfo->vocc + 0 - ns*ainfo->vdrain_rate/1000000;
                ainfo->gocc = ainfo->gocc + 0 - ns*ainfo->gdrain_rate/1000000;
                ainfo->mocc = ainfo->mocc + mburst_size - ns*ainfo->mdrain_rate/1000000;
                break;
        }
        if (iter>100)
        {
            ainfo->converged = 0;
            return (1);
        }
        ns = 1000000*ainfo->gburst_size/(state->memory_width/8)/state->mclk_khz;
        tmp = ns * ainfo->gdrain_rate/1000000;
        if (abs(ainfo->gburst_size) + ((abs(ainfo->wcglwm) + 16 ) & ~0x7) - tmp > max_gfsize)
        {
            ainfo->converged = 0;
            return (1);
        }
        ns = 1000000*ainfo->vburst_size/(state->memory_width/8)/state->mclk_khz;
        tmp = ns * ainfo->vdrain_rate/1000000;
        if (abs(ainfo->vburst_size) + (abs(ainfo->wcvlwm + 32) & ~0xf)  - tmp> VFIFO_SIZE)
        {
            ainfo->converged = 0;
            return (1);
        }
        if (abs(ainfo->gocc) > max_gfsize)
        {
            ainfo->converged = 0;
            return (1);
        }
        if (abs(ainfo->vocc) > VFIFO_SIZE)
        {
            ainfo->converged = 0;
            return (1);
        }
        if (abs(ainfo->mocc) > MFIFO_SIZE)
        {
            ainfo->converged = 0;
            return (1);
        }
        if (abs(vfsize) > VFIFO_SIZE)
        {
            ainfo->converged = 0;
            return (1);
        }
        if (abs(gfsize) > max_gfsize)
        {
            ainfo->converged = 0;
            return (1);
        }
        if (abs(mfsize) > MFIFO_SIZE)
        {
            ainfo->converged = 0;
            return (1);
        }
    }
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
          int _len_res_info0 = 1;
          int * res_info = (int *) malloc(_len_res_info0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res_info0; _i0++) {
            res_info[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct TYPE_5__ * state = (struct TYPE_5__ *) malloc(_len_state0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].memory_width = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].mclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].mem_page_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].mem_latency = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].gr_during_vid = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].enable_mp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ainfo0 = 1;
          struct TYPE_6__ * ainfo = (struct TYPE_6__ *) malloc(_len_ainfo0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ainfo0; _i0++) {
            ainfo[_i0].cur = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].gburst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].wcvocc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].vocc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].wcvlwm = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].vburst_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].vdrain_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].wcmocc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].mocc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].wcglwm = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].wcgocc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].gocc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].gdrain_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].by_gfacc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].mdrain_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].converged = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].first_macc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].first_gacc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].first_vacc = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].vid_only_once = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].vid_en = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].gr_only_once = ((-2 * (next_i()%2)) + 1) * next_i();
        ainfo[_i0].gr_en = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nv3_iterate(res_info,state,ainfo);
          printf("%d\n", benchRet); 
          free(res_info);
          free(state);
          free(ainfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
