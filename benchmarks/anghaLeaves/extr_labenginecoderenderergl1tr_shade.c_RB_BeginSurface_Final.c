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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {scalar_t__ timeOffset; scalar_t__ clampTime; int /*<<< orphan*/  optimalStageIteratorFunc; int /*<<< orphan*/  numUnfoggedPasses; int /*<<< orphan*/  stages; struct TYPE_7__* remappedShader; } ;
typedef  TYPE_2__ shader_t ;
struct TYPE_6__ {scalar_t__ floatTime; } ;
struct TYPE_9__ {TYPE_1__ refdef; } ;
struct TYPE_8__ {int fogNum; scalar_t__ shaderTime; TYPE_2__* shader; int /*<<< orphan*/  currentStageIteratorFunc; int /*<<< orphan*/  numPasses; int /*<<< orphan*/  xstages; scalar_t__ dlightBits; scalar_t__ numVertexes; scalar_t__ numIndexes; } ;

/* Variables and functions */
 TYPE_4__ backEnd ; 
 TYPE_3__ tess ; 

void RB_BeginSurface( shader_t *shader, int fogNum ) {

	shader_t *state = (shader->remappedShader) ? shader->remappedShader : shader;

	tess.numIndexes = 0;
	tess.numVertexes = 0;
	tess.shader = state;
	tess.fogNum = fogNum;
	tess.dlightBits = 0;		// will be OR'd in by surface functions
	tess.xstages = state->stages;
	tess.numPasses = state->numUnfoggedPasses;
	tess.currentStageIteratorFunc = state->optimalStageIteratorFunc;

	tess.shaderTime = backEnd.refdef.floatTime - tess.shader->timeOffset;
	if (tess.shader->clampTime && tess.shaderTime >= tess.shader->clampTime) {
		tess.shaderTime = tess.shader->clampTime;
	}


}


// ------------------------------------------------------------------------- //

struct TYPE_7__ *_allocate_shader(int length, struct TYPE_7__ *aux_shader[]) {
  struct TYPE_7__ *walker = (struct TYPE_7__ *)malloc(sizeof(struct TYPE_7__));

  aux_shader[0] = walker;
walker->timeOffset = ((-2 * (next_i()%2)) + 1) * next_i();
walker->clampTime = ((-2 * (next_i()%2)) + 1) * next_i();
walker->optimalStageIteratorFunc = ((-2 * (next_i()%2)) + 1) * next_i();
walker->numUnfoggedPasses = ((-2 * (next_i()%2)) + 1) * next_i();
walker->stages = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->remappedShader = NULL;

  struct TYPE_7__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->remappedShader = (struct TYPE_7__ *)malloc(sizeof(struct TYPE_7__));
    walker = walker->remappedShader;
    aux_shader[i] = walker;
walker->timeOffset = ((-2 * (next_i()%2)) + 1) * next_i();
walker->clampTime = ((-2 * (next_i()%2)) + 1) * next_i();
walker->optimalStageIteratorFunc = ((-2 * (next_i()%2)) + 1) * next_i();
walker->numUnfoggedPasses = ((-2 * (next_i()%2)) + 1) * next_i();
walker->stages = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->remappedShader = NULL;
  }

  return head;
}

void _delete_shader(struct TYPE_7__ *aux_shader[], int aux_shader_size) {
  for(int i = 0; i < aux_shader_size; i++) 
    if(aux_shader[i])
      free(aux_shader[i]);
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
          int fogNum = 100;
          struct TYPE_7__ * aux_shader[1];
          struct TYPE_7__ * shader = _allocate_shader(1, aux_shader);
          RB_BeginSurface(shader,fogNum);
          _delete_shader(aux_shader, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
