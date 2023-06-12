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
       0            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {size_t num_tables; TYPE_1__* dir_tables; } ;
struct TYPE_4__ {int /*<<< orphan*/  Length; int /*<<< orphan*/  Offset; int /*<<< orphan*/  Tag; } ;
typedef  TYPE_2__* TT_Face ;
typedef  int /*<<< orphan*/  FT_ULong ;
typedef  size_t FT_UInt ;
typedef  int /*<<< orphan*/  FT_Error ;

/* Variables and functions */
 int /*<<< orphan*/  SFNT_Err_Invalid_Argument ; 
 int /*<<< orphan*/  SFNT_Err_Ok ; 
 int /*<<< orphan*/  SFNT_Err_Table_Missing ; 

__attribute__((used)) static FT_Error
  sfnt_table_info( TT_Face    face,
                   FT_UInt    idx,
                   FT_ULong  *tag,
                   FT_ULong  *offset,
                   FT_ULong  *length )
  {
    if ( !tag || !offset || !length )
      return SFNT_Err_Invalid_Argument;

    if ( idx >= face->num_tables )
      return SFNT_Err_Table_Missing;

    *tag    = face->dir_tables[idx].Tag;
    *offset = face->dir_tables[idx].Offset;
    *length = face->dir_tables[idx].Length;

    return SFNT_Err_Ok;
  }

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          unsigned long idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_face0 = 1;
          struct TYPE_5__ * face = (struct TYPE_5__ *) malloc(_len_face0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_face0; _i0++) {
              face[_i0].num_tables = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_face__i0__dir_tables0 = 1;
          face[_i0].dir_tables = (struct TYPE_4__ *) malloc(_len_face__i0__dir_tables0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_face__i0__dir_tables0; _j0++) {
              face[_i0].dir_tables->Length = ((-2 * (next_i()%2)) + 1) * next_i();
          face[_i0].dir_tables->Offset = ((-2 * (next_i()%2)) + 1) * next_i();
          face[_i0].dir_tables->Tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tag0 = 1;
          int * tag = (int *) malloc(_len_tag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_offset0 = 1;
          int * offset = (int *) malloc(_len_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_length0 = 1;
          int * length = (int *) malloc(_len_length0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_length0; _i0++) {
            length[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sfnt_table_info(face,idx,tag,offset,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_face0; _aux++) {
          free(face[_aux].dir_tables);
          }
          free(face);
          free(tag);
          free(offset);
          free(length);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
