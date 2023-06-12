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
       0            bintree\n\
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
struct SIS_OH {struct SIS_OH* poh_next; struct SIS_OH* poh_prev; } ;

/* Variables and functions */

__attribute__((used)) static void
sisfb_insert_node(struct SIS_OH *pohList, struct SIS_OH *poh)
{
	struct SIS_OH *pohTemp = pohList->poh_next;

	pohList->poh_next = poh;
	pohTemp->poh_prev = poh;

	poh->poh_prev = pohList;
	poh->poh_next = pohTemp;
}

// ------------------------------------------------------------------------- //

struct SIS_OH *_allocateBinTree_pohList(int length, struct SIS_OH *aux_tree_pohList[], int *counter_pohList) {
  if(length == 0)
    return NULL;
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_tree_pohList[*counter_pohList] = walker;
  (*counter_pohList)++;
  walker->poh_next = _allocateBinTree_pohList(length - 1, aux_tree_pohList, counter_pohList);
  walker->poh_prev = _allocateBinTree_pohList(length - 1, aux_tree_pohList, counter_pohList);
  return walker;
}

void _deleteBinTree_pohList(struct SIS_OH *aux_tree_pohList[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_pohList[i])
      free(aux_tree_pohList[i]);
}

struct SIS_OH *_allocateBinTree_poh(int length, struct SIS_OH *aux_tree_poh[], int *counter_poh) {
  if(length == 0)
    return NULL;
  struct SIS_OH *walker = (struct SIS_OH *)malloc(sizeof(struct SIS_OH));

  aux_tree_poh[*counter_poh] = walker;
  (*counter_poh)++;
  walker->poh_next = _allocateBinTree_poh(length - 1, aux_tree_poh, counter_poh);
  walker->poh_prev = _allocateBinTree_poh(length - 1, aux_tree_poh, counter_poh);
  return walker;
}

void _deleteBinTree_poh(struct SIS_OH *aux_tree_poh[]) {
  for(int i = 0; i < 1023; i++) 
    if(aux_tree_poh[i])
      free(aux_tree_poh[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // bintree
    case 0:
    {
          int counter_pohList= 0;
          struct SIS_OH *  aux_tree_pohList[1023];
          struct SIS_OH * pohList = _allocateBinTree_pohList(10, aux_tree_pohList, &counter_pohList);
        
          int counter_poh= 0;
          struct SIS_OH *  aux_tree_poh[1023];
          struct SIS_OH * poh = _allocateBinTree_poh(10, aux_tree_poh, &counter_poh);
        
          sisfb_insert_node(pohList,poh);
          _deleteBinTree_pohList(aux_tree_pohList);
          _deleteBinTree_poh(aux_tree_poh);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
